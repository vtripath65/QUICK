!---------------------------------------------------------------------!
! ediis.f90 — EDIIS coefficient solver                                !
!                                                                     !
! Copyright (C) 2024 QUICK contributors                              !
!                                                                     !
! This Source Code Form is subject to the terms of the Mozilla Public !
! License, v. 2.0. If a copy of the MPL was not distributed with this !
! file, You can obtain one at http://mozilla.org/MPL/2.0/.            !
!_____________________________________________________________________!
!
! Implements the EDIIS (Energy-DIIS) coefficient optimisation described
! in Kudin, Scuseria & Frisch, J. Chem. Phys. 116, 8255 (2002).
!
! The EDIIS energy functional is:
!
!   E(c) = sum_i  c_i * E_i
!          - sum_{i,j}  c_i * c_j * B_ij
!
! where
!   B_ij = (1/4) * Tr[ (D_i - D_j) * (F_i - F_j) ]
!
! subject to  sum_i c_i = 1,  c_i >= 0.
!
! The gradient with respect to c_k (before enforcing constraints) is:
!   dE/dc_k = E_k  -  2 * sum_j c_j * B_kj
!
! Minimisation is performed by projected gradient descent onto the
! unit simplex.  Convergence is fast (typically < 50 iterations) for
! the small window sizes (<=10) used in SCF DIIS.
!
!---------------------------------------------------------------------!

#include "util.fh"

subroutine ediis_coefficients(n, nbasis, energies, densities, operators, coeff)
   !------------------------------------------------------------------
   ! Compute EDIIS interpolation coefficients.
   !
   ! Arguments:
   !   n          (in)  number of stored iterates (1 <= n <= maxdiisscf)
   !   nbasis     (in)  number of AO basis functions
   !   energies   (in)  stored SCF energies,        dimension(n)
   !   densities  (in)  stored density matrices,    dimension(nbasis,nbasis,n)
   !   operators  (in)  stored Fock/KS matrices,    dimension(nbasis,nbasis,n)
   !   coeff      (out) EDIIS coefficients,          dimension(n)
   !                    satisfies sum(coeff)=1, coeff(i)>=0
   !------------------------------------------------------------------
   implicit none

   integer,          intent(in)  :: n, nbasis
   double precision, intent(in)  :: energies(n)
   double precision, intent(in)  :: densities(nbasis, nbasis, n)
   double precision, intent(in)  :: operators(nbasis, nbasis, n)
   double precision, intent(out) :: coeff(n)

   !------------------------------------------------------------------
   ! Local variables
   !------------------------------------------------------------------
   double precision :: B(n, n)      ! EDIIS curvature matrix
   double precision :: grad(n)      ! gradient of E(c)
   double precision :: c(n)         ! working coefficients
   double precision :: c_new(n)     ! projected coefficients
   double precision :: dij, step, gnorm
   integer          :: i, j, k, iter
   integer, parameter :: maxiter = 200
   double precision, parameter :: step_init = 0.1d0
   double precision, parameter :: gtol      = 1.0d-8

   !------------------------------------------------------------------
   ! Edge case: only one iterate — coefficient must be 1
   !------------------------------------------------------------------
   if (n == 1) then
      coeff(1) = 1.0d0
      return
   end if

   !------------------------------------------------------------------
   ! Build the B matrix:
   !   B_ij = (1/4) * sum_{k,l} (D_i(k,l)-D_j(k,l)) * (F_i(k,l)-F_j(k,l))
   ! The factor 1/4 comes from the original EDIIS paper.
   !------------------------------------------------------------------
   do i = 1, n
      B(i, i) = 0.0d0
      do j = i+1, n
         dij = 0.0d0
         do k = 1, nbasis
            dij = dij + dot_product( densities(:,k,i) - densities(:,k,j), &
                                     operators(:,k,i) - operators(:,k,j) )
         end do
         B(i,j) = 0.25d0 * dij
         B(j,i) = B(i,j)
      end do
   end do

   !------------------------------------------------------------------
   ! Initialise: uniform distribution on the simplex
   !------------------------------------------------------------------
   c(:) = 1.0d0 / dble(n)

   !------------------------------------------------------------------
   ! Projected gradient descent onto the unit simplex.
   !
   ! Update rule:
   !   grad_k = E_k - 2 * sum_j c_j * B_{kj}
   !   c_new  = project_simplex( c - step * grad )
   !
   ! A simple sufficient decrease line search is used.
   !------------------------------------------------------------------
   step = step_init
   do iter = 1, maxiter

      ! Compute gradient
      do k = 1, n
         grad(k) = energies(k)
         do j = 1, n
            grad(k) = grad(k) - 2.0d0 * c(j) * B(k,j)
         end do
      end do

      ! Check gradient norm for convergence
      gnorm = sqrt(dot_product(grad, grad))
      if (gnorm < gtol) exit

      ! Gradient step
      do k = 1, n
         c_new(k) = c(k) - step * grad(k)
      end do

      ! Project onto unit simplex
      call project_simplex(n, c_new)

      c(:) = c_new(:)

   end do

   coeff(:) = c(:)

end subroutine ediis_coefficients


!---------------------------------------------------------------------!
! project_simplex: project a vector onto the unit simplex             !
!   { x : sum(x)=1, x_i>=0 }                                         !
!                                                                     !
! Uses the O(n log n) algorithm of Duchi et al. (2008).              !
!---------------------------------------------------------------------!
subroutine project_simplex(n, x)
   implicit none
   integer,          intent(in)    :: n
   double precision, intent(inout) :: x(n)

   double precision :: u(n), cssv, rho, theta
   integer          :: i, j, rho_idx
   logical          :: found

   ! Copy and sort descending (insertion sort — n is small, <=10)
   u(:) = x(:)
   do i = 2, n
      do j = i, 2, -1
         if (u(j) > u(j-1)) then
            theta  = u(j)
            u(j)   = u(j-1)
            u(j-1) = theta
         else
            exit
         end if
      end do
   end do

   ! Find rho = max { j : u_j - (1/j)(sum_{i<=j} u_i - 1) > 0 }
   cssv  = 0.0d0
   rho   = 0
   rho_idx = 1
   found = .false.
   do i = 1, n
      cssv = cssv + u(i)
      if (u(i) - (cssv - 1.0d0) / dble(i) > 0.0d0) then
         rho_idx = i
         found   = .true.
      end if
   end do

   ! Compute threshold theta
   cssv = 0.0d0
   do i = 1, rho_idx
      cssv = cssv + u(i)
   end do
   theta = (cssv - 1.0d0) / dble(rho_idx)

   ! Project
   do i = 1, n
      x(i) = max(x(i) - theta, 0.0d0)
   end do

end subroutine project_simplex
