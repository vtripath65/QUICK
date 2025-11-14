/*
 !---------------------------------------------------------------------!
 ! Written by QUICK-GenInt code generator on 11/13/2025                !
 !                                                                     !
 ! Copyright (C) 2025-2026 Merz lab                                    !
 ! Copyright (C) 2025-2026 Götz lab                                    !
 !                                                                     !
 ! This Source Code Form is subject to the terms of the Mozilla Public !
 ! License, v. 2.0. If a copy of the MPL was not distributed with this !
 ! file, You can obtain one at http://mozilla.org/MPL/2.0/.            !
 !_____________________________________________________________________!
*/

__device__ __inline__ void oei_grad_vertical(int I, int J,
#ifdef DEBUG_OEI
                    int II, int JJ,
#endif
                    QUICKDouble PAx, QUICKDouble PAy, QUICKDouble PAz,
                    QUICKDouble PBx, QUICKDouble PBy, QUICKDouble PBz,
                    QUICKDouble PCx, QUICKDouble PCy, QUICKDouble PCz,
                    QUICKDouble TwoZetaInv, QUICKDouble* store, QUICKDouble* YVerticalTemp){ 

  /* SS integral gradient, m=0 */ 
  if(I == 0 && J == 0){ 
    
SPint_0 sp(PBx, PBy, PBz, PCx, PCy, PCz, store, YVerticalTemp); 

    LOCSTORE(store, 0, 1, STOREDIM, STOREDIM) = sp.x_0_1;
    LOCSTORE(store, 0, 2, STOREDIM, STOREDIM) = sp.x_0_2;
    LOCSTORE(store, 0, 3, STOREDIM, STOREDIM) = sp.x_0_3;
    
PSint_0 ps(PAx, PAy, PAz, PCx, PCy, PCz, store, YVerticalTemp); 

    LOCSTORE(store, 1, 0, STOREDIM, STOREDIM) = ps.x_1_0;
    LOCSTORE(store, 2, 0, STOREDIM, STOREDIM) = ps.x_2_0;
    LOCSTORE(store, 3, 0, STOREDIM, STOREDIM) = ps.x_3_0;

#ifdef DEBUG_OEI 
    printf("II %d JJ %d SP store[0,1] = %f \n", II, JJ, LOCSTORE(store, 0, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d SP store[0,2] = %f \n", II, JJ, LOCSTORE(store, 0, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d SP store[0,3] = %f \n", II, JJ, LOCSTORE(store, 0, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PS store[1,0] = %f \n", II, JJ, LOCSTORE(store, 1, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PS store[2,0] = %f \n", II, JJ, LOCSTORE(store, 2, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PS store[3,0] = %f \n", II, JJ, LOCSTORE(store, 3, 0, STOREDIM, STOREDIM)); 
#endif 

  } 

  /* SP integral gradient, m=0 */ 
  if(I == 0 && J == 1){ 
    
LOCSTORE(store, 0, 0, STOREDIM, STOREDIM) = VY(0, 0, 0);
    
PPint_0 pp(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 1, 1, STOREDIM, STOREDIM) = pp.x_1_1;
    LOCSTORE(store, 1, 2, STOREDIM, STOREDIM) = pp.x_1_2;
    LOCSTORE(store, 1, 3, STOREDIM, STOREDIM) = pp.x_1_3;
    LOCSTORE(store, 2, 1, STOREDIM, STOREDIM) = pp.x_2_1;
    LOCSTORE(store, 2, 2, STOREDIM, STOREDIM) = pp.x_2_2;
    LOCSTORE(store, 2, 3, STOREDIM, STOREDIM) = pp.x_2_3;
    LOCSTORE(store, 3, 1, STOREDIM, STOREDIM) = pp.x_3_1;
    LOCSTORE(store, 3, 2, STOREDIM, STOREDIM) = pp.x_3_2;
    LOCSTORE(store, 3, 3, STOREDIM, STOREDIM) = pp.x_3_3;
    
SDint_0 sd(PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 0, 4, STOREDIM, STOREDIM) = sd.x_0_4;
    LOCSTORE(store, 0, 5, STOREDIM, STOREDIM) = sd.x_0_5;
    LOCSTORE(store, 0, 6, STOREDIM, STOREDIM) = sd.x_0_6;
    LOCSTORE(store, 0, 7, STOREDIM, STOREDIM) = sd.x_0_7;
    LOCSTORE(store, 0, 8, STOREDIM, STOREDIM) = sd.x_0_8;
    LOCSTORE(store, 0, 9, STOREDIM, STOREDIM) = sd.x_0_9;

#ifdef DEBUG_OEI 
    printf("II %d JJ %d SS store[0,0] = %f \n", II, JJ, LOCSTORE(store, 0, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PP store[1,1] = %f \n", II, JJ, LOCSTORE(store, 1, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PP store[1,2] = %f \n", II, JJ, LOCSTORE(store, 1, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PP store[1,3] = %f \n", II, JJ, LOCSTORE(store, 1, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PP store[2,1] = %f \n", II, JJ, LOCSTORE(store, 2, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PP store[2,2] = %f \n", II, JJ, LOCSTORE(store, 2, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PP store[2,3] = %f \n", II, JJ, LOCSTORE(store, 2, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PP store[3,1] = %f \n", II, JJ, LOCSTORE(store, 3, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PP store[3,2] = %f \n", II, JJ, LOCSTORE(store, 3, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PP store[3,3] = %f \n", II, JJ, LOCSTORE(store, 3, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d SD store[0,4] = %f \n", II, JJ, LOCSTORE(store, 0, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d SD store[0,5] = %f \n", II, JJ, LOCSTORE(store, 0, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d SD store[0,6] = %f \n", II, JJ, LOCSTORE(store, 0, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d SD store[0,7] = %f \n", II, JJ, LOCSTORE(store, 0, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d SD store[0,8] = %f \n", II, JJ, LOCSTORE(store, 0, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d SD store[0,9] = %f \n", II, JJ, LOCSTORE(store, 0, 9, STOREDIM, STOREDIM)); 
#endif 

  } 

  /* PS integral gradient, m=0 */ 
  if(I == 1 && J == 0){ 
    
LOCSTORE(store, 0, 0, STOREDIM, STOREDIM) = VY(0, 0, 0);
    
PPint_0 pp(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 1, 1, STOREDIM, STOREDIM) = pp.x_1_1;
    LOCSTORE(store, 1, 2, STOREDIM, STOREDIM) = pp.x_1_2;
    LOCSTORE(store, 1, 3, STOREDIM, STOREDIM) = pp.x_1_3;
    LOCSTORE(store, 2, 1, STOREDIM, STOREDIM) = pp.x_2_1;
    LOCSTORE(store, 2, 2, STOREDIM, STOREDIM) = pp.x_2_2;
    LOCSTORE(store, 2, 3, STOREDIM, STOREDIM) = pp.x_2_3;
    LOCSTORE(store, 3, 1, STOREDIM, STOREDIM) = pp.x_3_1;
    LOCSTORE(store, 3, 2, STOREDIM, STOREDIM) = pp.x_3_2;
    LOCSTORE(store, 3, 3, STOREDIM, STOREDIM) = pp.x_3_3;
    
DSint_0 ds(PAx, PAy, PAz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 4, 0, STOREDIM, STOREDIM) = ds.x_4_0;
    LOCSTORE(store, 5, 0, STOREDIM, STOREDIM) = ds.x_5_0;
    LOCSTORE(store, 6, 0, STOREDIM, STOREDIM) = ds.x_6_0;
    LOCSTORE(store, 7, 0, STOREDIM, STOREDIM) = ds.x_7_0;
    LOCSTORE(store, 8, 0, STOREDIM, STOREDIM) = ds.x_8_0;
    LOCSTORE(store, 9, 0, STOREDIM, STOREDIM) = ds.x_9_0;

#ifdef DEBUG_OEI 
    printf("II %d JJ %d SS store[0,0] = %f \n", II, JJ, LOCSTORE(store, 0, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PP store[1,1] = %f \n", II, JJ, LOCSTORE(store, 1, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PP store[1,2] = %f \n", II, JJ, LOCSTORE(store, 1, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PP store[1,3] = %f \n", II, JJ, LOCSTORE(store, 1, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PP store[2,1] = %f \n", II, JJ, LOCSTORE(store, 2, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PP store[2,2] = %f \n", II, JJ, LOCSTORE(store, 2, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PP store[2,3] = %f \n", II, JJ, LOCSTORE(store, 2, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PP store[3,1] = %f \n", II, JJ, LOCSTORE(store, 3, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PP store[3,2] = %f \n", II, JJ, LOCSTORE(store, 3, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PP store[3,3] = %f \n", II, JJ, LOCSTORE(store, 3, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DS store[4,0] = %f \n", II, JJ, LOCSTORE(store, 4, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DS store[5,0] = %f \n", II, JJ, LOCSTORE(store, 5, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DS store[6,0] = %f \n", II, JJ, LOCSTORE(store, 6, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DS store[7,0] = %f \n", II, JJ, LOCSTORE(store, 7, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DS store[8,0] = %f \n", II, JJ, LOCSTORE(store, 8, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DS store[9,0] = %f \n", II, JJ, LOCSTORE(store, 9, 0, STOREDIM, STOREDIM)); 
#endif 

  } 

  /* PP integral gradient, m=0 */ 
  if(I == 1 && J == 1){ 
    
SPint_0 sp(PBx, PBy, PBz, PCx, PCy, PCz, store, YVerticalTemp); 

    LOCSTORE(store, 0, 1, STOREDIM, STOREDIM) = sp.x_0_1;
    LOCSTORE(store, 0, 2, STOREDIM, STOREDIM) = sp.x_0_2;
    LOCSTORE(store, 0, 3, STOREDIM, STOREDIM) = sp.x_0_3;
    
PSint_0 ps(PAx, PAy, PAz, PCx, PCy, PCz, store, YVerticalTemp); 

    LOCSTORE(store, 1, 0, STOREDIM, STOREDIM) = ps.x_1_0;
    LOCSTORE(store, 2, 0, STOREDIM, STOREDIM) = ps.x_2_0;
    LOCSTORE(store, 3, 0, STOREDIM, STOREDIM) = ps.x_3_0;
    
DPint_0 dp(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 4, 1, STOREDIM, STOREDIM) = dp.x_4_1;
    LOCSTORE(store, 4, 2, STOREDIM, STOREDIM) = dp.x_4_2;
    LOCSTORE(store, 4, 3, STOREDIM, STOREDIM) = dp.x_4_3;
    LOCSTORE(store, 5, 1, STOREDIM, STOREDIM) = dp.x_5_1;
    LOCSTORE(store, 5, 2, STOREDIM, STOREDIM) = dp.x_5_2;
    LOCSTORE(store, 5, 3, STOREDIM, STOREDIM) = dp.x_5_3;
    LOCSTORE(store, 6, 1, STOREDIM, STOREDIM) = dp.x_6_1;
    LOCSTORE(store, 6, 2, STOREDIM, STOREDIM) = dp.x_6_2;
    LOCSTORE(store, 6, 3, STOREDIM, STOREDIM) = dp.x_6_3;
    LOCSTORE(store, 7, 1, STOREDIM, STOREDIM) = dp.x_7_1;
    LOCSTORE(store, 7, 2, STOREDIM, STOREDIM) = dp.x_7_2;
    LOCSTORE(store, 7, 3, STOREDIM, STOREDIM) = dp.x_7_3;
    LOCSTORE(store, 8, 1, STOREDIM, STOREDIM) = dp.x_8_1;
    LOCSTORE(store, 8, 2, STOREDIM, STOREDIM) = dp.x_8_2;
    LOCSTORE(store, 8, 3, STOREDIM, STOREDIM) = dp.x_8_3;
    LOCSTORE(store, 9, 1, STOREDIM, STOREDIM) = dp.x_9_1;
    LOCSTORE(store, 9, 2, STOREDIM, STOREDIM) = dp.x_9_2;
    LOCSTORE(store, 9, 3, STOREDIM, STOREDIM) = dp.x_9_3;
    
PDint_0 pd(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 1, 4, STOREDIM, STOREDIM) = pd.x_1_4;
    LOCSTORE(store, 2, 4, STOREDIM, STOREDIM) = pd.x_2_4;
    LOCSTORE(store, 3, 4, STOREDIM, STOREDIM) = pd.x_3_4;
    LOCSTORE(store, 1, 5, STOREDIM, STOREDIM) = pd.x_1_5;
    LOCSTORE(store, 2, 5, STOREDIM, STOREDIM) = pd.x_2_5;
    LOCSTORE(store, 3, 5, STOREDIM, STOREDIM) = pd.x_3_5;
    LOCSTORE(store, 1, 6, STOREDIM, STOREDIM) = pd.x_1_6;
    LOCSTORE(store, 2, 6, STOREDIM, STOREDIM) = pd.x_2_6;
    LOCSTORE(store, 3, 6, STOREDIM, STOREDIM) = pd.x_3_6;
    LOCSTORE(store, 1, 7, STOREDIM, STOREDIM) = pd.x_1_7;
    LOCSTORE(store, 2, 7, STOREDIM, STOREDIM) = pd.x_2_7;
    LOCSTORE(store, 3, 7, STOREDIM, STOREDIM) = pd.x_3_7;
    LOCSTORE(store, 1, 8, STOREDIM, STOREDIM) = pd.x_1_8;
    LOCSTORE(store, 2, 8, STOREDIM, STOREDIM) = pd.x_2_8;
    LOCSTORE(store, 3, 8, STOREDIM, STOREDIM) = pd.x_3_8;
    LOCSTORE(store, 1, 9, STOREDIM, STOREDIM) = pd.x_1_9;
    LOCSTORE(store, 2, 9, STOREDIM, STOREDIM) = pd.x_2_9;
    LOCSTORE(store, 3, 9, STOREDIM, STOREDIM) = pd.x_3_9;

#ifdef DEBUG_OEI 
    printf("II %d JJ %d SP store[0,1] = %f \n", II, JJ, LOCSTORE(store, 0, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d SP store[0,2] = %f \n", II, JJ, LOCSTORE(store, 0, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d SP store[0,3] = %f \n", II, JJ, LOCSTORE(store, 0, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PS store[1,0] = %f \n", II, JJ, LOCSTORE(store, 1, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PS store[2,0] = %f \n", II, JJ, LOCSTORE(store, 2, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PS store[3,0] = %f \n", II, JJ, LOCSTORE(store, 3, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[4,1] = %f \n", II, JJ, LOCSTORE(store, 4, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[4,2] = %f \n", II, JJ, LOCSTORE(store, 4, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[4,3] = %f \n", II, JJ, LOCSTORE(store, 4, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[5,1] = %f \n", II, JJ, LOCSTORE(store, 5, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[5,2] = %f \n", II, JJ, LOCSTORE(store, 5, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[5,3] = %f \n", II, JJ, LOCSTORE(store, 5, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[6,1] = %f \n", II, JJ, LOCSTORE(store, 6, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[6,2] = %f \n", II, JJ, LOCSTORE(store, 6, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[6,3] = %f \n", II, JJ, LOCSTORE(store, 6, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[7,1] = %f \n", II, JJ, LOCSTORE(store, 7, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[7,2] = %f \n", II, JJ, LOCSTORE(store, 7, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[7,3] = %f \n", II, JJ, LOCSTORE(store, 7, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[8,1] = %f \n", II, JJ, LOCSTORE(store, 8, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[8,2] = %f \n", II, JJ, LOCSTORE(store, 8, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[8,3] = %f \n", II, JJ, LOCSTORE(store, 8, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[9,1] = %f \n", II, JJ, LOCSTORE(store, 9, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[9,2] = %f \n", II, JJ, LOCSTORE(store, 9, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[9,3] = %f \n", II, JJ, LOCSTORE(store, 9, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[1,4] = %f \n", II, JJ, LOCSTORE(store, 1, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[2,4] = %f \n", II, JJ, LOCSTORE(store, 2, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[3,4] = %f \n", II, JJ, LOCSTORE(store, 3, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[1,5] = %f \n", II, JJ, LOCSTORE(store, 1, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[2,5] = %f \n", II, JJ, LOCSTORE(store, 2, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[3,5] = %f \n", II, JJ, LOCSTORE(store, 3, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[1,6] = %f \n", II, JJ, LOCSTORE(store, 1, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[2,6] = %f \n", II, JJ, LOCSTORE(store, 2, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[3,6] = %f \n", II, JJ, LOCSTORE(store, 3, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[1,7] = %f \n", II, JJ, LOCSTORE(store, 1, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[2,7] = %f \n", II, JJ, LOCSTORE(store, 2, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[3,7] = %f \n", II, JJ, LOCSTORE(store, 3, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[1,8] = %f \n", II, JJ, LOCSTORE(store, 1, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[2,8] = %f \n", II, JJ, LOCSTORE(store, 2, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[3,8] = %f \n", II, JJ, LOCSTORE(store, 3, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[1,9] = %f \n", II, JJ, LOCSTORE(store, 1, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[2,9] = %f \n", II, JJ, LOCSTORE(store, 2, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[3,9] = %f \n", II, JJ, LOCSTORE(store, 3, 9, STOREDIM, STOREDIM)); 
#endif 

  } 

  /* SD integral gradient, m=0 */ 
  if(I == 0 && J == 2){ 
    
SPint_0 sp(PBx, PBy, PBz, PCx, PCy, PCz, store, YVerticalTemp); 

    LOCSTORE(store, 0, 1, STOREDIM, STOREDIM) = sp.x_0_1;
    LOCSTORE(store, 0, 2, STOREDIM, STOREDIM) = sp.x_0_2;
    LOCSTORE(store, 0, 3, STOREDIM, STOREDIM) = sp.x_0_3;
    
PDint_0 pd(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 1, 4, STOREDIM, STOREDIM) = pd.x_1_4;
    LOCSTORE(store, 2, 4, STOREDIM, STOREDIM) = pd.x_2_4;
    LOCSTORE(store, 3, 4, STOREDIM, STOREDIM) = pd.x_3_4;
    LOCSTORE(store, 1, 5, STOREDIM, STOREDIM) = pd.x_1_5;
    LOCSTORE(store, 2, 5, STOREDIM, STOREDIM) = pd.x_2_5;
    LOCSTORE(store, 3, 5, STOREDIM, STOREDIM) = pd.x_3_5;
    LOCSTORE(store, 1, 6, STOREDIM, STOREDIM) = pd.x_1_6;
    LOCSTORE(store, 2, 6, STOREDIM, STOREDIM) = pd.x_2_6;
    LOCSTORE(store, 3, 6, STOREDIM, STOREDIM) = pd.x_3_6;
    LOCSTORE(store, 1, 7, STOREDIM, STOREDIM) = pd.x_1_7;
    LOCSTORE(store, 2, 7, STOREDIM, STOREDIM) = pd.x_2_7;
    LOCSTORE(store, 3, 7, STOREDIM, STOREDIM) = pd.x_3_7;
    LOCSTORE(store, 1, 8, STOREDIM, STOREDIM) = pd.x_1_8;
    LOCSTORE(store, 2, 8, STOREDIM, STOREDIM) = pd.x_2_8;
    LOCSTORE(store, 3, 8, STOREDIM, STOREDIM) = pd.x_3_8;
    LOCSTORE(store, 1, 9, STOREDIM, STOREDIM) = pd.x_1_9;
    LOCSTORE(store, 2, 9, STOREDIM, STOREDIM) = pd.x_2_9;
    LOCSTORE(store, 3, 9, STOREDIM, STOREDIM) = pd.x_3_9;
    
SFint_0 sf(PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

#ifdef REG_SF 
    LOCSTORE(store, 0, 10, STOREDIM, STOREDIM) = sf.x_0_10;
    LOCSTORE(store, 0, 11, STOREDIM, STOREDIM) = sf.x_0_11;
    LOCSTORE(store, 0, 12, STOREDIM, STOREDIM) = sf.x_0_12;
    LOCSTORE(store, 0, 13, STOREDIM, STOREDIM) = sf.x_0_13;
    LOCSTORE(store, 0, 14, STOREDIM, STOREDIM) = sf.x_0_14;
    LOCSTORE(store, 0, 15, STOREDIM, STOREDIM) = sf.x_0_15;
    LOCSTORE(store, 0, 16, STOREDIM, STOREDIM) = sf.x_0_16;
    LOCSTORE(store, 0, 17, STOREDIM, STOREDIM) = sf.x_0_17;
    LOCSTORE(store, 0, 18, STOREDIM, STOREDIM) = sf.x_0_18;
    LOCSTORE(store, 0, 19, STOREDIM, STOREDIM) = sf.x_0_19;
#endif 

#ifdef DEBUG_OEI 
    printf("II %d JJ %d SP store[0,1] = %f \n", II, JJ, LOCSTORE(store, 0, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d SP store[0,2] = %f \n", II, JJ, LOCSTORE(store, 0, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d SP store[0,3] = %f \n", II, JJ, LOCSTORE(store, 0, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[1,4] = %f \n", II, JJ, LOCSTORE(store, 1, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[2,4] = %f \n", II, JJ, LOCSTORE(store, 2, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[3,4] = %f \n", II, JJ, LOCSTORE(store, 3, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[1,5] = %f \n", II, JJ, LOCSTORE(store, 1, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[2,5] = %f \n", II, JJ, LOCSTORE(store, 2, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[3,5] = %f \n", II, JJ, LOCSTORE(store, 3, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[1,6] = %f \n", II, JJ, LOCSTORE(store, 1, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[2,6] = %f \n", II, JJ, LOCSTORE(store, 2, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[3,6] = %f \n", II, JJ, LOCSTORE(store, 3, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[1,7] = %f \n", II, JJ, LOCSTORE(store, 1, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[2,7] = %f \n", II, JJ, LOCSTORE(store, 2, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[3,7] = %f \n", II, JJ, LOCSTORE(store, 3, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[1,8] = %f \n", II, JJ, LOCSTORE(store, 1, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[2,8] = %f \n", II, JJ, LOCSTORE(store, 2, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[3,8] = %f \n", II, JJ, LOCSTORE(store, 3, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[1,9] = %f \n", II, JJ, LOCSTORE(store, 1, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[2,9] = %f \n", II, JJ, LOCSTORE(store, 2, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[3,9] = %f \n", II, JJ, LOCSTORE(store, 3, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d SF store[0,10] = %f \n", II, JJ, LOCSTORE(store, 0, 10, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d SF store[0,11] = %f \n", II, JJ, LOCSTORE(store, 0, 11, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d SF store[0,12] = %f \n", II, JJ, LOCSTORE(store, 0, 12, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d SF store[0,13] = %f \n", II, JJ, LOCSTORE(store, 0, 13, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d SF store[0,14] = %f \n", II, JJ, LOCSTORE(store, 0, 14, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d SF store[0,15] = %f \n", II, JJ, LOCSTORE(store, 0, 15, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d SF store[0,16] = %f \n", II, JJ, LOCSTORE(store, 0, 16, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d SF store[0,17] = %f \n", II, JJ, LOCSTORE(store, 0, 17, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d SF store[0,18] = %f \n", II, JJ, LOCSTORE(store, 0, 18, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d SF store[0,19] = %f \n", II, JJ, LOCSTORE(store, 0, 19, STOREDIM, STOREDIM)); 
#endif 

  } 

  /* DS integral gradient, m=0 */ 
  if(I == 2 && J == 0){ 
    
PSint_0 ps(PAx, PAy, PAz, PCx, PCy, PCz, store, YVerticalTemp); 

    LOCSTORE(store, 1, 0, STOREDIM, STOREDIM) = ps.x_1_0;
    LOCSTORE(store, 2, 0, STOREDIM, STOREDIM) = ps.x_2_0;
    LOCSTORE(store, 3, 0, STOREDIM, STOREDIM) = ps.x_3_0;
    
DPint_0 dp(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 4, 1, STOREDIM, STOREDIM) = dp.x_4_1;
    LOCSTORE(store, 4, 2, STOREDIM, STOREDIM) = dp.x_4_2;
    LOCSTORE(store, 4, 3, STOREDIM, STOREDIM) = dp.x_4_3;
    LOCSTORE(store, 5, 1, STOREDIM, STOREDIM) = dp.x_5_1;
    LOCSTORE(store, 5, 2, STOREDIM, STOREDIM) = dp.x_5_2;
    LOCSTORE(store, 5, 3, STOREDIM, STOREDIM) = dp.x_5_3;
    LOCSTORE(store, 6, 1, STOREDIM, STOREDIM) = dp.x_6_1;
    LOCSTORE(store, 6, 2, STOREDIM, STOREDIM) = dp.x_6_2;
    LOCSTORE(store, 6, 3, STOREDIM, STOREDIM) = dp.x_6_3;
    LOCSTORE(store, 7, 1, STOREDIM, STOREDIM) = dp.x_7_1;
    LOCSTORE(store, 7, 2, STOREDIM, STOREDIM) = dp.x_7_2;
    LOCSTORE(store, 7, 3, STOREDIM, STOREDIM) = dp.x_7_3;
    LOCSTORE(store, 8, 1, STOREDIM, STOREDIM) = dp.x_8_1;
    LOCSTORE(store, 8, 2, STOREDIM, STOREDIM) = dp.x_8_2;
    LOCSTORE(store, 8, 3, STOREDIM, STOREDIM) = dp.x_8_3;
    LOCSTORE(store, 9, 1, STOREDIM, STOREDIM) = dp.x_9_1;
    LOCSTORE(store, 9, 2, STOREDIM, STOREDIM) = dp.x_9_2;
    LOCSTORE(store, 9, 3, STOREDIM, STOREDIM) = dp.x_9_3;
    
FSint_0 fs(PAx, PAy, PAz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

#ifdef REG_FS 
    LOCSTORE(store, 10, 0, STOREDIM, STOREDIM) = fs.x_10_0;
    LOCSTORE(store, 11, 0, STOREDIM, STOREDIM) = fs.x_11_0;
    LOCSTORE(store, 12, 0, STOREDIM, STOREDIM) = fs.x_12_0;
    LOCSTORE(store, 13, 0, STOREDIM, STOREDIM) = fs.x_13_0;
    LOCSTORE(store, 14, 0, STOREDIM, STOREDIM) = fs.x_14_0;
    LOCSTORE(store, 15, 0, STOREDIM, STOREDIM) = fs.x_15_0;
    LOCSTORE(store, 16, 0, STOREDIM, STOREDIM) = fs.x_16_0;
    LOCSTORE(store, 17, 0, STOREDIM, STOREDIM) = fs.x_17_0;
    LOCSTORE(store, 18, 0, STOREDIM, STOREDIM) = fs.x_18_0;
    LOCSTORE(store, 19, 0, STOREDIM, STOREDIM) = fs.x_19_0;
#endif 

#ifdef DEBUG_OEI 
    printf("II %d JJ %d PS store[1,0] = %f \n", II, JJ, LOCSTORE(store, 1, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PS store[2,0] = %f \n", II, JJ, LOCSTORE(store, 2, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PS store[3,0] = %f \n", II, JJ, LOCSTORE(store, 3, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[4,1] = %f \n", II, JJ, LOCSTORE(store, 4, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[4,2] = %f \n", II, JJ, LOCSTORE(store, 4, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[4,3] = %f \n", II, JJ, LOCSTORE(store, 4, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[5,1] = %f \n", II, JJ, LOCSTORE(store, 5, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[5,2] = %f \n", II, JJ, LOCSTORE(store, 5, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[5,3] = %f \n", II, JJ, LOCSTORE(store, 5, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[6,1] = %f \n", II, JJ, LOCSTORE(store, 6, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[6,2] = %f \n", II, JJ, LOCSTORE(store, 6, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[6,3] = %f \n", II, JJ, LOCSTORE(store, 6, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[7,1] = %f \n", II, JJ, LOCSTORE(store, 7, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[7,2] = %f \n", II, JJ, LOCSTORE(store, 7, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[7,3] = %f \n", II, JJ, LOCSTORE(store, 7, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[8,1] = %f \n", II, JJ, LOCSTORE(store, 8, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[8,2] = %f \n", II, JJ, LOCSTORE(store, 8, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[8,3] = %f \n", II, JJ, LOCSTORE(store, 8, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[9,1] = %f \n", II, JJ, LOCSTORE(store, 9, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[9,2] = %f \n", II, JJ, LOCSTORE(store, 9, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[9,3] = %f \n", II, JJ, LOCSTORE(store, 9, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FS store[10,0] = %f \n", II, JJ, LOCSTORE(store, 10, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FS store[11,0] = %f \n", II, JJ, LOCSTORE(store, 11, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FS store[12,0] = %f \n", II, JJ, LOCSTORE(store, 12, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FS store[13,0] = %f \n", II, JJ, LOCSTORE(store, 13, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FS store[14,0] = %f \n", II, JJ, LOCSTORE(store, 14, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FS store[15,0] = %f \n", II, JJ, LOCSTORE(store, 15, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FS store[16,0] = %f \n", II, JJ, LOCSTORE(store, 16, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FS store[17,0] = %f \n", II, JJ, LOCSTORE(store, 17, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FS store[18,0] = %f \n", II, JJ, LOCSTORE(store, 18, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FS store[19,0] = %f \n", II, JJ, LOCSTORE(store, 19, 0, STOREDIM, STOREDIM)); 
#endif 

  } 

  /* PD integral gradient, m=0 */ 
  if(I == 1 && J == 2){ 
    
SDint_0 sd(PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 0, 4, STOREDIM, STOREDIM) = sd.x_0_4;
    LOCSTORE(store, 0, 5, STOREDIM, STOREDIM) = sd.x_0_5;
    LOCSTORE(store, 0, 6, STOREDIM, STOREDIM) = sd.x_0_6;
    LOCSTORE(store, 0, 7, STOREDIM, STOREDIM) = sd.x_0_7;
    LOCSTORE(store, 0, 8, STOREDIM, STOREDIM) = sd.x_0_8;
    LOCSTORE(store, 0, 9, STOREDIM, STOREDIM) = sd.x_0_9;
    
PPint_0 pp(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 1, 1, STOREDIM, STOREDIM) = pp.x_1_1;
    LOCSTORE(store, 1, 2, STOREDIM, STOREDIM) = pp.x_1_2;
    LOCSTORE(store, 1, 3, STOREDIM, STOREDIM) = pp.x_1_3;
    LOCSTORE(store, 2, 1, STOREDIM, STOREDIM) = pp.x_2_1;
    LOCSTORE(store, 2, 2, STOREDIM, STOREDIM) = pp.x_2_2;
    LOCSTORE(store, 2, 3, STOREDIM, STOREDIM) = pp.x_2_3;
    LOCSTORE(store, 3, 1, STOREDIM, STOREDIM) = pp.x_3_1;
    LOCSTORE(store, 3, 2, STOREDIM, STOREDIM) = pp.x_3_2;
    LOCSTORE(store, 3, 3, STOREDIM, STOREDIM) = pp.x_3_3;
    
DDint_0 dd(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

#ifdef REG_DD 
    LOCSTORE(store, 4, 4, STOREDIM, STOREDIM) = dd.x_4_4;
    LOCSTORE(store, 4, 5, STOREDIM, STOREDIM) = dd.x_4_5;
    LOCSTORE(store, 4, 6, STOREDIM, STOREDIM) = dd.x_4_6;
    LOCSTORE(store, 4, 7, STOREDIM, STOREDIM) = dd.x_4_7;
    LOCSTORE(store, 4, 8, STOREDIM, STOREDIM) = dd.x_4_8;
    LOCSTORE(store, 4, 9, STOREDIM, STOREDIM) = dd.x_4_9;
    LOCSTORE(store, 5, 4, STOREDIM, STOREDIM) = dd.x_5_4;
    LOCSTORE(store, 5, 5, STOREDIM, STOREDIM) = dd.x_5_5;
    LOCSTORE(store, 5, 6, STOREDIM, STOREDIM) = dd.x_5_6;
    LOCSTORE(store, 5, 7, STOREDIM, STOREDIM) = dd.x_5_7;
    LOCSTORE(store, 5, 8, STOREDIM, STOREDIM) = dd.x_5_8;
    LOCSTORE(store, 5, 9, STOREDIM, STOREDIM) = dd.x_5_9;
    LOCSTORE(store, 6, 4, STOREDIM, STOREDIM) = dd.x_6_4;
    LOCSTORE(store, 6, 5, STOREDIM, STOREDIM) = dd.x_6_5;
    LOCSTORE(store, 6, 6, STOREDIM, STOREDIM) = dd.x_6_6;
    LOCSTORE(store, 6, 7, STOREDIM, STOREDIM) = dd.x_6_7;
    LOCSTORE(store, 6, 8, STOREDIM, STOREDIM) = dd.x_6_8;
    LOCSTORE(store, 6, 9, STOREDIM, STOREDIM) = dd.x_6_9;
    LOCSTORE(store, 7, 4, STOREDIM, STOREDIM) = dd.x_7_4;
    LOCSTORE(store, 7, 5, STOREDIM, STOREDIM) = dd.x_7_5;
    LOCSTORE(store, 7, 6, STOREDIM, STOREDIM) = dd.x_7_6;
    LOCSTORE(store, 7, 7, STOREDIM, STOREDIM) = dd.x_7_7;
    LOCSTORE(store, 7, 8, STOREDIM, STOREDIM) = dd.x_7_8;
    LOCSTORE(store, 7, 9, STOREDIM, STOREDIM) = dd.x_7_9;
    LOCSTORE(store, 8, 4, STOREDIM, STOREDIM) = dd.x_8_4;
    LOCSTORE(store, 8, 5, STOREDIM, STOREDIM) = dd.x_8_5;
    LOCSTORE(store, 8, 6, STOREDIM, STOREDIM) = dd.x_8_6;
    LOCSTORE(store, 8, 7, STOREDIM, STOREDIM) = dd.x_8_7;
    LOCSTORE(store, 8, 8, STOREDIM, STOREDIM) = dd.x_8_8;
    LOCSTORE(store, 8, 9, STOREDIM, STOREDIM) = dd.x_8_9;
    LOCSTORE(store, 9, 4, STOREDIM, STOREDIM) = dd.x_9_4;
    LOCSTORE(store, 9, 5, STOREDIM, STOREDIM) = dd.x_9_5;
    LOCSTORE(store, 9, 6, STOREDIM, STOREDIM) = dd.x_9_6;
    LOCSTORE(store, 9, 7, STOREDIM, STOREDIM) = dd.x_9_7;
    LOCSTORE(store, 9, 8, STOREDIM, STOREDIM) = dd.x_9_8;
    LOCSTORE(store, 9, 9, STOREDIM, STOREDIM) = dd.x_9_9;
#endif 
#ifdef USE_PARTIAL_PF 
  { 
    PFint_0_1 pf(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 1, 10, STOREDIM, STOREDIM) = pf.x_1_10;
    LOCSTORE(store, 2, 10, STOREDIM, STOREDIM) = pf.x_2_10;
    LOCSTORE(store, 3, 10, STOREDIM, STOREDIM) = pf.x_3_10;
  } 

  { 
    PFint_0_2 pf(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 1, 11, STOREDIM, STOREDIM) = pf.x_1_11;
    LOCSTORE(store, 2, 11, STOREDIM, STOREDIM) = pf.x_2_11;
    LOCSTORE(store, 3, 11, STOREDIM, STOREDIM) = pf.x_3_11;
  } 

  { 
    PFint_0_3 pf(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 1, 12, STOREDIM, STOREDIM) = pf.x_1_12;
    LOCSTORE(store, 2, 12, STOREDIM, STOREDIM) = pf.x_2_12;
    LOCSTORE(store, 3, 12, STOREDIM, STOREDIM) = pf.x_3_12;
  } 

  { 
    PFint_0_4 pf(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 1, 13, STOREDIM, STOREDIM) = pf.x_1_13;
    LOCSTORE(store, 2, 13, STOREDIM, STOREDIM) = pf.x_2_13;
    LOCSTORE(store, 3, 13, STOREDIM, STOREDIM) = pf.x_3_13;
  } 

  { 
    PFint_0_5 pf(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 1, 14, STOREDIM, STOREDIM) = pf.x_1_14;
    LOCSTORE(store, 2, 14, STOREDIM, STOREDIM) = pf.x_2_14;
    LOCSTORE(store, 3, 14, STOREDIM, STOREDIM) = pf.x_3_14;
  } 

  { 
    PFint_0_6 pf(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 1, 15, STOREDIM, STOREDIM) = pf.x_1_15;
    LOCSTORE(store, 2, 15, STOREDIM, STOREDIM) = pf.x_2_15;
    LOCSTORE(store, 3, 15, STOREDIM, STOREDIM) = pf.x_3_15;
  } 

  { 
    PFint_0_7 pf(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 1, 16, STOREDIM, STOREDIM) = pf.x_1_16;
    LOCSTORE(store, 2, 16, STOREDIM, STOREDIM) = pf.x_2_16;
    LOCSTORE(store, 3, 16, STOREDIM, STOREDIM) = pf.x_3_16;
  } 

  { 
    PFint_0_8 pf(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 1, 17, STOREDIM, STOREDIM) = pf.x_1_17;
    LOCSTORE(store, 2, 17, STOREDIM, STOREDIM) = pf.x_2_17;
    LOCSTORE(store, 3, 17, STOREDIM, STOREDIM) = pf.x_3_17;
  } 

  { 
    PFint_0_9 pf(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 1, 18, STOREDIM, STOREDIM) = pf.x_1_18;
    LOCSTORE(store, 2, 18, STOREDIM, STOREDIM) = pf.x_2_18;
    LOCSTORE(store, 3, 18, STOREDIM, STOREDIM) = pf.x_3_18;
  } 

  { 
    PFint_0_10 pf(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 1, 19, STOREDIM, STOREDIM) = pf.x_1_19;
    LOCSTORE(store, 2, 19, STOREDIM, STOREDIM) = pf.x_2_19;
    LOCSTORE(store, 3, 19, STOREDIM, STOREDIM) = pf.x_3_19;
  } 

#else 
    PFint_0 pf(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

#ifdef REG_PF 
    LOCSTORE(store, 1, 10, STOREDIM, STOREDIM) = pf.x_1_10;
    LOCSTORE(store, 2, 10, STOREDIM, STOREDIM) = pf.x_2_10;
    LOCSTORE(store, 3, 10, STOREDIM, STOREDIM) = pf.x_3_10;
    LOCSTORE(store, 1, 11, STOREDIM, STOREDIM) = pf.x_1_11;
    LOCSTORE(store, 2, 11, STOREDIM, STOREDIM) = pf.x_2_11;
    LOCSTORE(store, 3, 11, STOREDIM, STOREDIM) = pf.x_3_11;
    LOCSTORE(store, 1, 12, STOREDIM, STOREDIM) = pf.x_1_12;
    LOCSTORE(store, 2, 12, STOREDIM, STOREDIM) = pf.x_2_12;
    LOCSTORE(store, 3, 12, STOREDIM, STOREDIM) = pf.x_3_12;
    LOCSTORE(store, 1, 13, STOREDIM, STOREDIM) = pf.x_1_13;
    LOCSTORE(store, 2, 13, STOREDIM, STOREDIM) = pf.x_2_13;
    LOCSTORE(store, 3, 13, STOREDIM, STOREDIM) = pf.x_3_13;
    LOCSTORE(store, 1, 14, STOREDIM, STOREDIM) = pf.x_1_14;
    LOCSTORE(store, 2, 14, STOREDIM, STOREDIM) = pf.x_2_14;
    LOCSTORE(store, 3, 14, STOREDIM, STOREDIM) = pf.x_3_14;
    LOCSTORE(store, 1, 15, STOREDIM, STOREDIM) = pf.x_1_15;
    LOCSTORE(store, 2, 15, STOREDIM, STOREDIM) = pf.x_2_15;
    LOCSTORE(store, 3, 15, STOREDIM, STOREDIM) = pf.x_3_15;
    LOCSTORE(store, 1, 16, STOREDIM, STOREDIM) = pf.x_1_16;
    LOCSTORE(store, 2, 16, STOREDIM, STOREDIM) = pf.x_2_16;
    LOCSTORE(store, 3, 16, STOREDIM, STOREDIM) = pf.x_3_16;
    LOCSTORE(store, 1, 17, STOREDIM, STOREDIM) = pf.x_1_17;
    LOCSTORE(store, 2, 17, STOREDIM, STOREDIM) = pf.x_2_17;
    LOCSTORE(store, 3, 17, STOREDIM, STOREDIM) = pf.x_3_17;
    LOCSTORE(store, 1, 18, STOREDIM, STOREDIM) = pf.x_1_18;
    LOCSTORE(store, 2, 18, STOREDIM, STOREDIM) = pf.x_2_18;
    LOCSTORE(store, 3, 18, STOREDIM, STOREDIM) = pf.x_3_18;
    LOCSTORE(store, 1, 19, STOREDIM, STOREDIM) = pf.x_1_19;
    LOCSTORE(store, 2, 19, STOREDIM, STOREDIM) = pf.x_2_19;
    LOCSTORE(store, 3, 19, STOREDIM, STOREDIM) = pf.x_3_19;
#endif 
#endif 

#ifdef DEBUG_OEI 
    printf("II %d JJ %d SD store[0,4] = %f \n", II, JJ, LOCSTORE(store, 0, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d SD store[0,5] = %f \n", II, JJ, LOCSTORE(store, 0, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d SD store[0,6] = %f \n", II, JJ, LOCSTORE(store, 0, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d SD store[0,7] = %f \n", II, JJ, LOCSTORE(store, 0, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d SD store[0,8] = %f \n", II, JJ, LOCSTORE(store, 0, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d SD store[0,9] = %f \n", II, JJ, LOCSTORE(store, 0, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PP store[1,1] = %f \n", II, JJ, LOCSTORE(store, 1, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PP store[1,2] = %f \n", II, JJ, LOCSTORE(store, 1, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PP store[1,3] = %f \n", II, JJ, LOCSTORE(store, 1, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PP store[2,1] = %f \n", II, JJ, LOCSTORE(store, 2, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PP store[2,2] = %f \n", II, JJ, LOCSTORE(store, 2, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PP store[2,3] = %f \n", II, JJ, LOCSTORE(store, 2, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PP store[3,1] = %f \n", II, JJ, LOCSTORE(store, 3, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PP store[3,2] = %f \n", II, JJ, LOCSTORE(store, 3, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PP store[3,3] = %f \n", II, JJ, LOCSTORE(store, 3, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[4,4] = %f \n", II, JJ, LOCSTORE(store, 4, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[4,5] = %f \n", II, JJ, LOCSTORE(store, 4, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[4,6] = %f \n", II, JJ, LOCSTORE(store, 4, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[4,7] = %f \n", II, JJ, LOCSTORE(store, 4, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[4,8] = %f \n", II, JJ, LOCSTORE(store, 4, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[4,9] = %f \n", II, JJ, LOCSTORE(store, 4, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[5,4] = %f \n", II, JJ, LOCSTORE(store, 5, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[5,5] = %f \n", II, JJ, LOCSTORE(store, 5, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[5,6] = %f \n", II, JJ, LOCSTORE(store, 5, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[5,7] = %f \n", II, JJ, LOCSTORE(store, 5, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[5,8] = %f \n", II, JJ, LOCSTORE(store, 5, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[5,9] = %f \n", II, JJ, LOCSTORE(store, 5, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[6,4] = %f \n", II, JJ, LOCSTORE(store, 6, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[6,5] = %f \n", II, JJ, LOCSTORE(store, 6, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[6,6] = %f \n", II, JJ, LOCSTORE(store, 6, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[6,7] = %f \n", II, JJ, LOCSTORE(store, 6, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[6,8] = %f \n", II, JJ, LOCSTORE(store, 6, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[6,9] = %f \n", II, JJ, LOCSTORE(store, 6, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[7,4] = %f \n", II, JJ, LOCSTORE(store, 7, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[7,5] = %f \n", II, JJ, LOCSTORE(store, 7, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[7,6] = %f \n", II, JJ, LOCSTORE(store, 7, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[7,7] = %f \n", II, JJ, LOCSTORE(store, 7, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[7,8] = %f \n", II, JJ, LOCSTORE(store, 7, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[7,9] = %f \n", II, JJ, LOCSTORE(store, 7, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[8,4] = %f \n", II, JJ, LOCSTORE(store, 8, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[8,5] = %f \n", II, JJ, LOCSTORE(store, 8, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[8,6] = %f \n", II, JJ, LOCSTORE(store, 8, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[8,7] = %f \n", II, JJ, LOCSTORE(store, 8, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[8,8] = %f \n", II, JJ, LOCSTORE(store, 8, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[8,9] = %f \n", II, JJ, LOCSTORE(store, 8, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[9,4] = %f \n", II, JJ, LOCSTORE(store, 9, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[9,5] = %f \n", II, JJ, LOCSTORE(store, 9, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[9,6] = %f \n", II, JJ, LOCSTORE(store, 9, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[9,7] = %f \n", II, JJ, LOCSTORE(store, 9, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[9,8] = %f \n", II, JJ, LOCSTORE(store, 9, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[9,9] = %f \n", II, JJ, LOCSTORE(store, 9, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PF store[1,10] = %f \n", II, JJ, LOCSTORE(store, 1, 10, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PF store[2,10] = %f \n", II, JJ, LOCSTORE(store, 2, 10, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PF store[3,10] = %f \n", II, JJ, LOCSTORE(store, 3, 10, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PF store[1,11] = %f \n", II, JJ, LOCSTORE(store, 1, 11, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PF store[2,11] = %f \n", II, JJ, LOCSTORE(store, 2, 11, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PF store[3,11] = %f \n", II, JJ, LOCSTORE(store, 3, 11, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PF store[1,12] = %f \n", II, JJ, LOCSTORE(store, 1, 12, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PF store[2,12] = %f \n", II, JJ, LOCSTORE(store, 2, 12, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PF store[3,12] = %f \n", II, JJ, LOCSTORE(store, 3, 12, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PF store[1,13] = %f \n", II, JJ, LOCSTORE(store, 1, 13, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PF store[2,13] = %f \n", II, JJ, LOCSTORE(store, 2, 13, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PF store[3,13] = %f \n", II, JJ, LOCSTORE(store, 3, 13, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PF store[1,14] = %f \n", II, JJ, LOCSTORE(store, 1, 14, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PF store[2,14] = %f \n", II, JJ, LOCSTORE(store, 2, 14, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PF store[3,14] = %f \n", II, JJ, LOCSTORE(store, 3, 14, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PF store[1,15] = %f \n", II, JJ, LOCSTORE(store, 1, 15, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PF store[2,15] = %f \n", II, JJ, LOCSTORE(store, 2, 15, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PF store[3,15] = %f \n", II, JJ, LOCSTORE(store, 3, 15, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PF store[1,16] = %f \n", II, JJ, LOCSTORE(store, 1, 16, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PF store[2,16] = %f \n", II, JJ, LOCSTORE(store, 2, 16, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PF store[3,16] = %f \n", II, JJ, LOCSTORE(store, 3, 16, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PF store[1,17] = %f \n", II, JJ, LOCSTORE(store, 1, 17, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PF store[2,17] = %f \n", II, JJ, LOCSTORE(store, 2, 17, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PF store[3,17] = %f \n", II, JJ, LOCSTORE(store, 3, 17, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PF store[1,18] = %f \n", II, JJ, LOCSTORE(store, 1, 18, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PF store[2,18] = %f \n", II, JJ, LOCSTORE(store, 2, 18, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PF store[3,18] = %f \n", II, JJ, LOCSTORE(store, 3, 18, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PF store[1,19] = %f \n", II, JJ, LOCSTORE(store, 1, 19, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PF store[2,19] = %f \n", II, JJ, LOCSTORE(store, 2, 19, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PF store[3,19] = %f \n", II, JJ, LOCSTORE(store, 3, 19, STOREDIM, STOREDIM)); 
#endif 

  } 

  /* DP integral gradient, m=0 */ 
  if(I == 2 && J == 1){ 
    
DSint_0 ds(PAx, PAy, PAz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 4, 0, STOREDIM, STOREDIM) = ds.x_4_0;
    LOCSTORE(store, 5, 0, STOREDIM, STOREDIM) = ds.x_5_0;
    LOCSTORE(store, 6, 0, STOREDIM, STOREDIM) = ds.x_6_0;
    LOCSTORE(store, 7, 0, STOREDIM, STOREDIM) = ds.x_7_0;
    LOCSTORE(store, 8, 0, STOREDIM, STOREDIM) = ds.x_8_0;
    LOCSTORE(store, 9, 0, STOREDIM, STOREDIM) = ds.x_9_0;
    
PPint_0 pp(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 1, 1, STOREDIM, STOREDIM) = pp.x_1_1;
    LOCSTORE(store, 1, 2, STOREDIM, STOREDIM) = pp.x_1_2;
    LOCSTORE(store, 1, 3, STOREDIM, STOREDIM) = pp.x_1_3;
    LOCSTORE(store, 2, 1, STOREDIM, STOREDIM) = pp.x_2_1;
    LOCSTORE(store, 2, 2, STOREDIM, STOREDIM) = pp.x_2_2;
    LOCSTORE(store, 2, 3, STOREDIM, STOREDIM) = pp.x_2_3;
    LOCSTORE(store, 3, 1, STOREDIM, STOREDIM) = pp.x_3_1;
    LOCSTORE(store, 3, 2, STOREDIM, STOREDIM) = pp.x_3_2;
    LOCSTORE(store, 3, 3, STOREDIM, STOREDIM) = pp.x_3_3;
    
DDint_0 dd(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

#ifdef REG_DD 
    LOCSTORE(store, 4, 4, STOREDIM, STOREDIM) = dd.x_4_4;
    LOCSTORE(store, 4, 5, STOREDIM, STOREDIM) = dd.x_4_5;
    LOCSTORE(store, 4, 6, STOREDIM, STOREDIM) = dd.x_4_6;
    LOCSTORE(store, 4, 7, STOREDIM, STOREDIM) = dd.x_4_7;
    LOCSTORE(store, 4, 8, STOREDIM, STOREDIM) = dd.x_4_8;
    LOCSTORE(store, 4, 9, STOREDIM, STOREDIM) = dd.x_4_9;
    LOCSTORE(store, 5, 4, STOREDIM, STOREDIM) = dd.x_5_4;
    LOCSTORE(store, 5, 5, STOREDIM, STOREDIM) = dd.x_5_5;
    LOCSTORE(store, 5, 6, STOREDIM, STOREDIM) = dd.x_5_6;
    LOCSTORE(store, 5, 7, STOREDIM, STOREDIM) = dd.x_5_7;
    LOCSTORE(store, 5, 8, STOREDIM, STOREDIM) = dd.x_5_8;
    LOCSTORE(store, 5, 9, STOREDIM, STOREDIM) = dd.x_5_9;
    LOCSTORE(store, 6, 4, STOREDIM, STOREDIM) = dd.x_6_4;
    LOCSTORE(store, 6, 5, STOREDIM, STOREDIM) = dd.x_6_5;
    LOCSTORE(store, 6, 6, STOREDIM, STOREDIM) = dd.x_6_6;
    LOCSTORE(store, 6, 7, STOREDIM, STOREDIM) = dd.x_6_7;
    LOCSTORE(store, 6, 8, STOREDIM, STOREDIM) = dd.x_6_8;
    LOCSTORE(store, 6, 9, STOREDIM, STOREDIM) = dd.x_6_9;
    LOCSTORE(store, 7, 4, STOREDIM, STOREDIM) = dd.x_7_4;
    LOCSTORE(store, 7, 5, STOREDIM, STOREDIM) = dd.x_7_5;
    LOCSTORE(store, 7, 6, STOREDIM, STOREDIM) = dd.x_7_6;
    LOCSTORE(store, 7, 7, STOREDIM, STOREDIM) = dd.x_7_7;
    LOCSTORE(store, 7, 8, STOREDIM, STOREDIM) = dd.x_7_8;
    LOCSTORE(store, 7, 9, STOREDIM, STOREDIM) = dd.x_7_9;
    LOCSTORE(store, 8, 4, STOREDIM, STOREDIM) = dd.x_8_4;
    LOCSTORE(store, 8, 5, STOREDIM, STOREDIM) = dd.x_8_5;
    LOCSTORE(store, 8, 6, STOREDIM, STOREDIM) = dd.x_8_6;
    LOCSTORE(store, 8, 7, STOREDIM, STOREDIM) = dd.x_8_7;
    LOCSTORE(store, 8, 8, STOREDIM, STOREDIM) = dd.x_8_8;
    LOCSTORE(store, 8, 9, STOREDIM, STOREDIM) = dd.x_8_9;
    LOCSTORE(store, 9, 4, STOREDIM, STOREDIM) = dd.x_9_4;
    LOCSTORE(store, 9, 5, STOREDIM, STOREDIM) = dd.x_9_5;
    LOCSTORE(store, 9, 6, STOREDIM, STOREDIM) = dd.x_9_6;
    LOCSTORE(store, 9, 7, STOREDIM, STOREDIM) = dd.x_9_7;
    LOCSTORE(store, 9, 8, STOREDIM, STOREDIM) = dd.x_9_8;
    LOCSTORE(store, 9, 9, STOREDIM, STOREDIM) = dd.x_9_9;
#endif 
#ifdef USE_PARTIAL_FP 
  { 
    FPint_0_1 fp(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 10, 1, STOREDIM, STOREDIM) = fp.x_10_1;
    LOCSTORE(store, 10, 2, STOREDIM, STOREDIM) = fp.x_10_2;
    LOCSTORE(store, 10, 3, STOREDIM, STOREDIM) = fp.x_10_3;
  } 

  { 
    FPint_0_2 fp(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 11, 1, STOREDIM, STOREDIM) = fp.x_11_1;
    LOCSTORE(store, 11, 2, STOREDIM, STOREDIM) = fp.x_11_2;
    LOCSTORE(store, 11, 3, STOREDIM, STOREDIM) = fp.x_11_3;
  } 

  { 
    FPint_0_3 fp(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 12, 1, STOREDIM, STOREDIM) = fp.x_12_1;
    LOCSTORE(store, 12, 2, STOREDIM, STOREDIM) = fp.x_12_2;
    LOCSTORE(store, 12, 3, STOREDIM, STOREDIM) = fp.x_12_3;
  } 

  { 
    FPint_0_4 fp(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 13, 1, STOREDIM, STOREDIM) = fp.x_13_1;
    LOCSTORE(store, 13, 2, STOREDIM, STOREDIM) = fp.x_13_2;
    LOCSTORE(store, 13, 3, STOREDIM, STOREDIM) = fp.x_13_3;
  } 

  { 
    FPint_0_5 fp(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 14, 1, STOREDIM, STOREDIM) = fp.x_14_1;
    LOCSTORE(store, 14, 2, STOREDIM, STOREDIM) = fp.x_14_2;
    LOCSTORE(store, 14, 3, STOREDIM, STOREDIM) = fp.x_14_3;
  } 

  { 
    FPint_0_6 fp(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 15, 1, STOREDIM, STOREDIM) = fp.x_15_1;
    LOCSTORE(store, 15, 2, STOREDIM, STOREDIM) = fp.x_15_2;
    LOCSTORE(store, 15, 3, STOREDIM, STOREDIM) = fp.x_15_3;
  } 

  { 
    FPint_0_7 fp(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 16, 1, STOREDIM, STOREDIM) = fp.x_16_1;
    LOCSTORE(store, 16, 2, STOREDIM, STOREDIM) = fp.x_16_2;
    LOCSTORE(store, 16, 3, STOREDIM, STOREDIM) = fp.x_16_3;
  } 

  { 
    FPint_0_8 fp(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 17, 1, STOREDIM, STOREDIM) = fp.x_17_1;
    LOCSTORE(store, 17, 2, STOREDIM, STOREDIM) = fp.x_17_2;
    LOCSTORE(store, 17, 3, STOREDIM, STOREDIM) = fp.x_17_3;
  } 

  { 
    FPint_0_9 fp(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 18, 1, STOREDIM, STOREDIM) = fp.x_18_1;
    LOCSTORE(store, 18, 2, STOREDIM, STOREDIM) = fp.x_18_2;
    LOCSTORE(store, 18, 3, STOREDIM, STOREDIM) = fp.x_18_3;
  } 

  { 
    FPint_0_10 fp(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 19, 1, STOREDIM, STOREDIM) = fp.x_19_1;
    LOCSTORE(store, 19, 2, STOREDIM, STOREDIM) = fp.x_19_2;
    LOCSTORE(store, 19, 3, STOREDIM, STOREDIM) = fp.x_19_3;
  } 

#else 
    
FPint_0 fp(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

#ifdef REG_FP 
    LOCSTORE(store, 10, 1, STOREDIM, STOREDIM) = fp.x_10_1;
    LOCSTORE(store, 10, 2, STOREDIM, STOREDIM) = fp.x_10_2;
    LOCSTORE(store, 10, 3, STOREDIM, STOREDIM) = fp.x_10_3;
    LOCSTORE(store, 11, 1, STOREDIM, STOREDIM) = fp.x_11_1;
    LOCSTORE(store, 11, 2, STOREDIM, STOREDIM) = fp.x_11_2;
    LOCSTORE(store, 11, 3, STOREDIM, STOREDIM) = fp.x_11_3;
    LOCSTORE(store, 12, 1, STOREDIM, STOREDIM) = fp.x_12_1;
    LOCSTORE(store, 12, 2, STOREDIM, STOREDIM) = fp.x_12_2;
    LOCSTORE(store, 12, 3, STOREDIM, STOREDIM) = fp.x_12_3;
    LOCSTORE(store, 13, 1, STOREDIM, STOREDIM) = fp.x_13_1;
    LOCSTORE(store, 13, 2, STOREDIM, STOREDIM) = fp.x_13_2;
    LOCSTORE(store, 13, 3, STOREDIM, STOREDIM) = fp.x_13_3;
    LOCSTORE(store, 14, 1, STOREDIM, STOREDIM) = fp.x_14_1;
    LOCSTORE(store, 14, 2, STOREDIM, STOREDIM) = fp.x_14_2;
    LOCSTORE(store, 14, 3, STOREDIM, STOREDIM) = fp.x_14_3;
    LOCSTORE(store, 15, 1, STOREDIM, STOREDIM) = fp.x_15_1;
    LOCSTORE(store, 15, 2, STOREDIM, STOREDIM) = fp.x_15_2;
    LOCSTORE(store, 15, 3, STOREDIM, STOREDIM) = fp.x_15_3;
    LOCSTORE(store, 16, 1, STOREDIM, STOREDIM) = fp.x_16_1;
    LOCSTORE(store, 16, 2, STOREDIM, STOREDIM) = fp.x_16_2;
    LOCSTORE(store, 16, 3, STOREDIM, STOREDIM) = fp.x_16_3;
    LOCSTORE(store, 17, 1, STOREDIM, STOREDIM) = fp.x_17_1;
    LOCSTORE(store, 17, 2, STOREDIM, STOREDIM) = fp.x_17_2;
    LOCSTORE(store, 17, 3, STOREDIM, STOREDIM) = fp.x_17_3;
    LOCSTORE(store, 18, 1, STOREDIM, STOREDIM) = fp.x_18_1;
    LOCSTORE(store, 18, 2, STOREDIM, STOREDIM) = fp.x_18_2;
    LOCSTORE(store, 18, 3, STOREDIM, STOREDIM) = fp.x_18_3;
    LOCSTORE(store, 19, 1, STOREDIM, STOREDIM) = fp.x_19_1;
    LOCSTORE(store, 19, 2, STOREDIM, STOREDIM) = fp.x_19_2;
    LOCSTORE(store, 19, 3, STOREDIM, STOREDIM) = fp.x_19_3;
#endif 
#endif 

#ifdef DEBUG_OEI 
    printf("II %d JJ %d DS store[4,0] = %f \n", II, JJ, LOCSTORE(store, 4, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DS store[5,0] = %f \n", II, JJ, LOCSTORE(store, 5, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DS store[6,0] = %f \n", II, JJ, LOCSTORE(store, 6, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DS store[7,0] = %f \n", II, JJ, LOCSTORE(store, 7, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DS store[8,0] = %f \n", II, JJ, LOCSTORE(store, 8, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DS store[9,0] = %f \n", II, JJ, LOCSTORE(store, 9, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PP store[1,1] = %f \n", II, JJ, LOCSTORE(store, 1, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PP store[1,2] = %f \n", II, JJ, LOCSTORE(store, 1, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PP store[1,3] = %f \n", II, JJ, LOCSTORE(store, 1, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PP store[2,1] = %f \n", II, JJ, LOCSTORE(store, 2, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PP store[2,2] = %f \n", II, JJ, LOCSTORE(store, 2, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PP store[2,3] = %f \n", II, JJ, LOCSTORE(store, 2, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PP store[3,1] = %f \n", II, JJ, LOCSTORE(store, 3, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PP store[3,2] = %f \n", II, JJ, LOCSTORE(store, 3, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PP store[3,3] = %f \n", II, JJ, LOCSTORE(store, 3, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store4,4] = %f \n", II, JJ, LOCSTORE(store, 4, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store4,5] = %f \n", II, JJ, LOCSTORE(store, 4, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store4,6] = %f \n", II, JJ, LOCSTORE(store, 4, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store4,7] = %f \n", II, JJ, LOCSTORE(store, 4, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store4,8] = %f \n", II, JJ, LOCSTORE(store, 4, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store4,9] = %f \n", II, JJ, LOCSTORE(store, 4, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store5,4] = %f \n", II, JJ, LOCSTORE(store, 5, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store5,5] = %f \n", II, JJ, LOCSTORE(store, 5, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store5,6] = %f \n", II, JJ, LOCSTORE(store, 5, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store5,7] = %f \n", II, JJ, LOCSTORE(store, 5, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store5,8] = %f \n", II, JJ, LOCSTORE(store, 5, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store5,9] = %f \n", II, JJ, LOCSTORE(store, 5, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store6,4] = %f \n", II, JJ, LOCSTORE(store, 6, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store6,5] = %f \n", II, JJ, LOCSTORE(store, 6, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store6,6] = %f \n", II, JJ, LOCSTORE(store, 6, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store6,7] = %f \n", II, JJ, LOCSTORE(store, 6, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store6,8] = %f \n", II, JJ, LOCSTORE(store, 6, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store6,9] = %f \n", II, JJ, LOCSTORE(store, 6, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store7,4] = %f \n", II, JJ, LOCSTORE(store, 7, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store7,5] = %f \n", II, JJ, LOCSTORE(store, 7, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store7,6] = %f \n", II, JJ, LOCSTORE(store, 7, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store7,7] = %f \n", II, JJ, LOCSTORE(store, 7, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store7,8] = %f \n", II, JJ, LOCSTORE(store, 7, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store7,9] = %f \n", II, JJ, LOCSTORE(store, 7, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store8,4] = %f \n", II, JJ, LOCSTORE(store, 8, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store8,5] = %f \n", II, JJ, LOCSTORE(store, 8, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store8,6] = %f \n", II, JJ, LOCSTORE(store, 8, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store8,7] = %f \n", II, JJ, LOCSTORE(store, 8, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store8,8] = %f \n", II, JJ, LOCSTORE(store, 8, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store8,9] = %f \n", II, JJ, LOCSTORE(store, 8, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store9,4] = %f \n", II, JJ, LOCSTORE(store, 9, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store9,5] = %f \n", II, JJ, LOCSTORE(store, 9, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store9,6] = %f \n", II, JJ, LOCSTORE(store, 9, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store9,7] = %f \n", II, JJ, LOCSTORE(store, 9, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store9,8] = %f \n", II, JJ, LOCSTORE(store, 9, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store9,9] = %f \n", II, JJ, LOCSTORE(store, 9, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[10,1] = %f \n", II, JJ, LOCSTORE(store, 10, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[10,2] = %f \n", II, JJ, LOCSTORE(store, 10, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[10,3] = %f \n", II, JJ, LOCSTORE(store, 10, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[11,1] = %f \n", II, JJ, LOCSTORE(store, 11, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[11,2] = %f \n", II, JJ, LOCSTORE(store, 11, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[11,3] = %f \n", II, JJ, LOCSTORE(store, 11, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[12,1] = %f \n", II, JJ, LOCSTORE(store, 12, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[12,2] = %f \n", II, JJ, LOCSTORE(store, 12, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[12,3] = %f \n", II, JJ, LOCSTORE(store, 12, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[13,1] = %f \n", II, JJ, LOCSTORE(store, 13, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[13,2] = %f \n", II, JJ, LOCSTORE(store, 13, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[13,3] = %f \n", II, JJ, LOCSTORE(store, 13, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[14,1] = %f \n", II, JJ, LOCSTORE(store, 14, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[14,2] = %f \n", II, JJ, LOCSTORE(store, 14, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[14,3] = %f \n", II, JJ, LOCSTORE(store, 14, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[15,1] = %f \n", II, JJ, LOCSTORE(store, 15, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[15,2] = %f \n", II, JJ, LOCSTORE(store, 15, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[15,3] = %f \n", II, JJ, LOCSTORE(store, 15, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[16,1] = %f \n", II, JJ, LOCSTORE(store, 16, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[16,2] = %f \n", II, JJ, LOCSTORE(store, 16, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[16,3] = %f \n", II, JJ, LOCSTORE(store, 16, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[17,1] = %f \n", II, JJ, LOCSTORE(store, 17, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[17,2] = %f \n", II, JJ, LOCSTORE(store, 17, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[17,3] = %f \n", II, JJ, LOCSTORE(store, 17, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[18,1] = %f \n", II, JJ, LOCSTORE(store, 18, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[18,2] = %f \n", II, JJ, LOCSTORE(store, 18, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[18,3] = %f \n", II, JJ, LOCSTORE(store, 18, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[19,1] = %f \n", II, JJ, LOCSTORE(store, 19, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[19,2] = %f \n", II, JJ, LOCSTORE(store, 19, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[19,3] = %f \n", II, JJ, LOCSTORE(store, 19, 3, STOREDIM, STOREDIM)); 
#endif 

  } 

  /* DD integral gradient, m=0 */ 
  if(I == 2 && J == 2){ 
    
PDint_0 pd(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 1, 4, STOREDIM, STOREDIM) = pd.x_1_4;
    LOCSTORE(store, 2, 4, STOREDIM, STOREDIM) = pd.x_2_4;
    LOCSTORE(store, 3, 4, STOREDIM, STOREDIM) = pd.x_3_4;
    LOCSTORE(store, 1, 5, STOREDIM, STOREDIM) = pd.x_1_5;
    LOCSTORE(store, 2, 5, STOREDIM, STOREDIM) = pd.x_2_5;
    LOCSTORE(store, 3, 5, STOREDIM, STOREDIM) = pd.x_3_5;
    LOCSTORE(store, 1, 6, STOREDIM, STOREDIM) = pd.x_1_6;
    LOCSTORE(store, 2, 6, STOREDIM, STOREDIM) = pd.x_2_6;
    LOCSTORE(store, 3, 6, STOREDIM, STOREDIM) = pd.x_3_6;
    LOCSTORE(store, 1, 7, STOREDIM, STOREDIM) = pd.x_1_7;
    LOCSTORE(store, 2, 7, STOREDIM, STOREDIM) = pd.x_2_7;
    LOCSTORE(store, 3, 7, STOREDIM, STOREDIM) = pd.x_3_7;
    LOCSTORE(store, 1, 8, STOREDIM, STOREDIM) = pd.x_1_8;
    LOCSTORE(store, 2, 8, STOREDIM, STOREDIM) = pd.x_2_8;
    LOCSTORE(store, 3, 8, STOREDIM, STOREDIM) = pd.x_3_8;
    LOCSTORE(store, 1, 9, STOREDIM, STOREDIM) = pd.x_1_9;
    LOCSTORE(store, 2, 9, STOREDIM, STOREDIM) = pd.x_2_9;
    LOCSTORE(store, 3, 9, STOREDIM, STOREDIM) = pd.x_3_9;
    
DPint_0 dp(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 4, 1, STOREDIM, STOREDIM) = dp.x_4_1;
    LOCSTORE(store, 4, 2, STOREDIM, STOREDIM) = dp.x_4_2;
    LOCSTORE(store, 4, 3, STOREDIM, STOREDIM) = dp.x_4_3;
    LOCSTORE(store, 5, 1, STOREDIM, STOREDIM) = dp.x_5_1;
    LOCSTORE(store, 5, 2, STOREDIM, STOREDIM) = dp.x_5_2;
    LOCSTORE(store, 5, 3, STOREDIM, STOREDIM) = dp.x_5_3;
    LOCSTORE(store, 6, 1, STOREDIM, STOREDIM) = dp.x_6_1;
    LOCSTORE(store, 6, 2, STOREDIM, STOREDIM) = dp.x_6_2;
    LOCSTORE(store, 6, 3, STOREDIM, STOREDIM) = dp.x_6_3;
    LOCSTORE(store, 7, 1, STOREDIM, STOREDIM) = dp.x_7_1;
    LOCSTORE(store, 7, 2, STOREDIM, STOREDIM) = dp.x_7_2;
    LOCSTORE(store, 7, 3, STOREDIM, STOREDIM) = dp.x_7_3;
    LOCSTORE(store, 8, 1, STOREDIM, STOREDIM) = dp.x_8_1;
    LOCSTORE(store, 8, 2, STOREDIM, STOREDIM) = dp.x_8_2;
    LOCSTORE(store, 8, 3, STOREDIM, STOREDIM) = dp.x_8_3;
    LOCSTORE(store, 9, 1, STOREDIM, STOREDIM) = dp.x_9_1;
    LOCSTORE(store, 9, 2, STOREDIM, STOREDIM) = dp.x_9_2;
    LOCSTORE(store, 9, 3, STOREDIM, STOREDIM) = dp.x_9_3;
    
FDint_0 fd(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

#ifdef REG_FD 
    LOCSTORE(store, 10, 4, STOREDIM, STOREDIM) = fd.x_10_4;
    LOCSTORE(store, 10, 5, STOREDIM, STOREDIM) = fd.x_10_5;
    LOCSTORE(store, 10, 6, STOREDIM, STOREDIM) = fd.x_10_6;
    LOCSTORE(store, 10, 7, STOREDIM, STOREDIM) = fd.x_10_7;
    LOCSTORE(store, 10, 8, STOREDIM, STOREDIM) = fd.x_10_8;
    LOCSTORE(store, 10, 9, STOREDIM, STOREDIM) = fd.x_10_9;
    LOCSTORE(store, 11, 4, STOREDIM, STOREDIM) = fd.x_11_4;
    LOCSTORE(store, 11, 5, STOREDIM, STOREDIM) = fd.x_11_5;
    LOCSTORE(store, 11, 6, STOREDIM, STOREDIM) = fd.x_11_6;
    LOCSTORE(store, 11, 7, STOREDIM, STOREDIM) = fd.x_11_7;
    LOCSTORE(store, 11, 8, STOREDIM, STOREDIM) = fd.x_11_8;
    LOCSTORE(store, 11, 9, STOREDIM, STOREDIM) = fd.x_11_9;
    LOCSTORE(store, 12, 4, STOREDIM, STOREDIM) = fd.x_12_4;
    LOCSTORE(store, 12, 5, STOREDIM, STOREDIM) = fd.x_12_5;
    LOCSTORE(store, 12, 6, STOREDIM, STOREDIM) = fd.x_12_6;
    LOCSTORE(store, 12, 7, STOREDIM, STOREDIM) = fd.x_12_7;
    LOCSTORE(store, 12, 8, STOREDIM, STOREDIM) = fd.x_12_8;
    LOCSTORE(store, 12, 9, STOREDIM, STOREDIM) = fd.x_12_9;
    LOCSTORE(store, 13, 4, STOREDIM, STOREDIM) = fd.x_13_4;
    LOCSTORE(store, 13, 5, STOREDIM, STOREDIM) = fd.x_13_5;
    LOCSTORE(store, 13, 6, STOREDIM, STOREDIM) = fd.x_13_6;
    LOCSTORE(store, 13, 7, STOREDIM, STOREDIM) = fd.x_13_7;
    LOCSTORE(store, 13, 8, STOREDIM, STOREDIM) = fd.x_13_8;
    LOCSTORE(store, 13, 9, STOREDIM, STOREDIM) = fd.x_13_9;
    LOCSTORE(store, 14, 4, STOREDIM, STOREDIM) = fd.x_14_4;
    LOCSTORE(store, 14, 5, STOREDIM, STOREDIM) = fd.x_14_5;
    LOCSTORE(store, 14, 6, STOREDIM, STOREDIM) = fd.x_14_6;
    LOCSTORE(store, 14, 7, STOREDIM, STOREDIM) = fd.x_14_7;
    LOCSTORE(store, 14, 8, STOREDIM, STOREDIM) = fd.x_14_8;
    LOCSTORE(store, 14, 9, STOREDIM, STOREDIM) = fd.x_14_9;
    LOCSTORE(store, 15, 4, STOREDIM, STOREDIM) = fd.x_15_4;
    LOCSTORE(store, 15, 5, STOREDIM, STOREDIM) = fd.x_15_5;
    LOCSTORE(store, 15, 6, STOREDIM, STOREDIM) = fd.x_15_6;
    LOCSTORE(store, 15, 7, STOREDIM, STOREDIM) = fd.x_15_7;
    LOCSTORE(store, 15, 8, STOREDIM, STOREDIM) = fd.x_15_8;
    LOCSTORE(store, 15, 9, STOREDIM, STOREDIM) = fd.x_15_9;
    LOCSTORE(store, 16, 4, STOREDIM, STOREDIM) = fd.x_16_4;
    LOCSTORE(store, 16, 5, STOREDIM, STOREDIM) = fd.x_16_5;
    LOCSTORE(store, 16, 6, STOREDIM, STOREDIM) = fd.x_16_6;
    LOCSTORE(store, 16, 7, STOREDIM, STOREDIM) = fd.x_16_7;
    LOCSTORE(store, 16, 8, STOREDIM, STOREDIM) = fd.x_16_8;
    LOCSTORE(store, 16, 9, STOREDIM, STOREDIM) = fd.x_16_9;
    LOCSTORE(store, 17, 4, STOREDIM, STOREDIM) = fd.x_17_4;
    LOCSTORE(store, 17, 5, STOREDIM, STOREDIM) = fd.x_17_5;
    LOCSTORE(store, 17, 6, STOREDIM, STOREDIM) = fd.x_17_6;
    LOCSTORE(store, 17, 7, STOREDIM, STOREDIM) = fd.x_17_7;
    LOCSTORE(store, 17, 8, STOREDIM, STOREDIM) = fd.x_17_8;
    LOCSTORE(store, 17, 9, STOREDIM, STOREDIM) = fd.x_17_9;
    LOCSTORE(store, 18, 4, STOREDIM, STOREDIM) = fd.x_18_4;
    LOCSTORE(store, 18, 5, STOREDIM, STOREDIM) = fd.x_18_5;
    LOCSTORE(store, 18, 6, STOREDIM, STOREDIM) = fd.x_18_6;
    LOCSTORE(store, 18, 7, STOREDIM, STOREDIM) = fd.x_18_7;
    LOCSTORE(store, 18, 8, STOREDIM, STOREDIM) = fd.x_18_8;
    LOCSTORE(store, 18, 9, STOREDIM, STOREDIM) = fd.x_18_9;
    LOCSTORE(store, 19, 4, STOREDIM, STOREDIM) = fd.x_19_4;
    LOCSTORE(store, 19, 5, STOREDIM, STOREDIM) = fd.x_19_5;
    LOCSTORE(store, 19, 6, STOREDIM, STOREDIM) = fd.x_19_6;
    LOCSTORE(store, 19, 7, STOREDIM, STOREDIM) = fd.x_19_7;
    LOCSTORE(store, 19, 8, STOREDIM, STOREDIM) = fd.x_19_8;
    LOCSTORE(store, 19, 9, STOREDIM, STOREDIM) = fd.x_19_9;
#endif 
    
DFint_0 df(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

#ifdef REG_DF 
    LOCSTORE(store, 4, 10, STOREDIM, STOREDIM) = df.x_4_10;
    LOCSTORE(store, 5, 10, STOREDIM, STOREDIM) = df.x_5_10;
    LOCSTORE(store, 6, 10, STOREDIM, STOREDIM) = df.x_6_10;
    LOCSTORE(store, 7, 10, STOREDIM, STOREDIM) = df.x_7_10;
    LOCSTORE(store, 8, 10, STOREDIM, STOREDIM) = df.x_8_10;
    LOCSTORE(store, 9, 10, STOREDIM, STOREDIM) = df.x_9_10;
    LOCSTORE(store, 4, 11, STOREDIM, STOREDIM) = df.x_4_11;
    LOCSTORE(store, 5, 11, STOREDIM, STOREDIM) = df.x_5_11;
    LOCSTORE(store, 6, 11, STOREDIM, STOREDIM) = df.x_6_11;
    LOCSTORE(store, 7, 11, STOREDIM, STOREDIM) = df.x_7_11;
    LOCSTORE(store, 8, 11, STOREDIM, STOREDIM) = df.x_8_11;
    LOCSTORE(store, 9, 11, STOREDIM, STOREDIM) = df.x_9_11;
    LOCSTORE(store, 4, 12, STOREDIM, STOREDIM) = df.x_4_12;
    LOCSTORE(store, 5, 12, STOREDIM, STOREDIM) = df.x_5_12;
    LOCSTORE(store, 6, 12, STOREDIM, STOREDIM) = df.x_6_12;
    LOCSTORE(store, 7, 12, STOREDIM, STOREDIM) = df.x_7_12;
    LOCSTORE(store, 8, 12, STOREDIM, STOREDIM) = df.x_8_12;
    LOCSTORE(store, 9, 12, STOREDIM, STOREDIM) = df.x_9_12;
    LOCSTORE(store, 4, 13, STOREDIM, STOREDIM) = df.x_4_13;
    LOCSTORE(store, 5, 13, STOREDIM, STOREDIM) = df.x_5_13;
    LOCSTORE(store, 6, 13, STOREDIM, STOREDIM) = df.x_6_13;
    LOCSTORE(store, 7, 13, STOREDIM, STOREDIM) = df.x_7_13;
    LOCSTORE(store, 8, 13, STOREDIM, STOREDIM) = df.x_8_13;
    LOCSTORE(store, 9, 13, STOREDIM, STOREDIM) = df.x_9_13;
    LOCSTORE(store, 4, 14, STOREDIM, STOREDIM) = df.x_4_14;
    LOCSTORE(store, 5, 14, STOREDIM, STOREDIM) = df.x_5_14;
    LOCSTORE(store, 6, 14, STOREDIM, STOREDIM) = df.x_6_14;
    LOCSTORE(store, 7, 14, STOREDIM, STOREDIM) = df.x_7_14;
    LOCSTORE(store, 8, 14, STOREDIM, STOREDIM) = df.x_8_14;
    LOCSTORE(store, 9, 14, STOREDIM, STOREDIM) = df.x_9_14;
    LOCSTORE(store, 4, 15, STOREDIM, STOREDIM) = df.x_4_15;
    LOCSTORE(store, 5, 15, STOREDIM, STOREDIM) = df.x_5_15;
    LOCSTORE(store, 6, 15, STOREDIM, STOREDIM) = df.x_6_15;
    LOCSTORE(store, 7, 15, STOREDIM, STOREDIM) = df.x_7_15;
    LOCSTORE(store, 8, 15, STOREDIM, STOREDIM) = df.x_8_15;
    LOCSTORE(store, 9, 15, STOREDIM, STOREDIM) = df.x_9_15;
    LOCSTORE(store, 4, 16, STOREDIM, STOREDIM) = df.x_4_16;
    LOCSTORE(store, 5, 16, STOREDIM, STOREDIM) = df.x_5_16;
    LOCSTORE(store, 6, 16, STOREDIM, STOREDIM) = df.x_6_16;
    LOCSTORE(store, 7, 16, STOREDIM, STOREDIM) = df.x_7_16;
    LOCSTORE(store, 8, 16, STOREDIM, STOREDIM) = df.x_8_16;
    LOCSTORE(store, 9, 16, STOREDIM, STOREDIM) = df.x_9_16;
    LOCSTORE(store, 4, 17, STOREDIM, STOREDIM) = df.x_4_17;
    LOCSTORE(store, 5, 17, STOREDIM, STOREDIM) = df.x_5_17;
    LOCSTORE(store, 6, 17, STOREDIM, STOREDIM) = df.x_6_17;
    LOCSTORE(store, 7, 17, STOREDIM, STOREDIM) = df.x_7_17;
    LOCSTORE(store, 8, 17, STOREDIM, STOREDIM) = df.x_8_17;
    LOCSTORE(store, 9, 17, STOREDIM, STOREDIM) = df.x_9_17;
    LOCSTORE(store, 4, 18, STOREDIM, STOREDIM) = df.x_4_18;
    LOCSTORE(store, 5, 18, STOREDIM, STOREDIM) = df.x_5_18;
    LOCSTORE(store, 6, 18, STOREDIM, STOREDIM) = df.x_6_18;
    LOCSTORE(store, 7, 18, STOREDIM, STOREDIM) = df.x_7_18;
    LOCSTORE(store, 8, 18, STOREDIM, STOREDIM) = df.x_8_18;
    LOCSTORE(store, 9, 18, STOREDIM, STOREDIM) = df.x_9_18;
    LOCSTORE(store, 4, 19, STOREDIM, STOREDIM) = df.x_4_19;
    LOCSTORE(store, 5, 19, STOREDIM, STOREDIM) = df.x_5_19;
    LOCSTORE(store, 6, 19, STOREDIM, STOREDIM) = df.x_6_19;
    LOCSTORE(store, 7, 19, STOREDIM, STOREDIM) = df.x_7_19;
    LOCSTORE(store, 8, 19, STOREDIM, STOREDIM) = df.x_8_19;
    LOCSTORE(store, 9, 19, STOREDIM, STOREDIM) = df.x_9_19;
#endif 

#ifdef DEBUG_OEI 
    printf("II %d JJ %d PD store[1,4] = %f \n", II, JJ, LOCSTORE(store, 1, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[2,4] = %f \n", II, JJ, LOCSTORE(store, 2, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[3,4] = %f \n", II, JJ, LOCSTORE(store, 3, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[1,5] = %f \n", II, JJ, LOCSTORE(store, 1, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[2,5] = %f \n", II, JJ, LOCSTORE(store, 2, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[3,5] = %f \n", II, JJ, LOCSTORE(store, 3, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[1,6] = %f \n", II, JJ, LOCSTORE(store, 1, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[2,6] = %f \n", II, JJ, LOCSTORE(store, 2, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[3,6] = %f \n", II, JJ, LOCSTORE(store, 3, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[1,7] = %f \n", II, JJ, LOCSTORE(store, 1, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[2,7] = %f \n", II, JJ, LOCSTORE(store, 2, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[3,7] = %f \n", II, JJ, LOCSTORE(store, 3, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[1,8] = %f \n", II, JJ, LOCSTORE(store, 1, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[2,8] = %f \n", II, JJ, LOCSTORE(store, 2, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[3,8] = %f \n", II, JJ, LOCSTORE(store, 3, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[1,9] = %f \n", II, JJ, LOCSTORE(store, 1, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[2,9] = %f \n", II, JJ, LOCSTORE(store, 2, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d PD store[3,9] = %f \n", II, JJ, LOCSTORE(store, 3, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[4,1] = %f \n", II, JJ, LOCSTORE(store, 4, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[4,2] = %f \n", II, JJ, LOCSTORE(store, 4, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[4,3] = %f \n", II, JJ, LOCSTORE(store, 4, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[5,1] = %f \n", II, JJ, LOCSTORE(store, 5, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[5,2] = %f \n", II, JJ, LOCSTORE(store, 5, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[5,3] = %f \n", II, JJ, LOCSTORE(store, 5, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[6,1] = %f \n", II, JJ, LOCSTORE(store, 6, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[6,2] = %f \n", II, JJ, LOCSTORE(store, 6, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[6,3] = %f \n", II, JJ, LOCSTORE(store, 6, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[7,1] = %f \n", II, JJ, LOCSTORE(store, 7, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[7,2] = %f \n", II, JJ, LOCSTORE(store, 7, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[7,3] = %f \n", II, JJ, LOCSTORE(store, 7, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[8,1] = %f \n", II, JJ, LOCSTORE(store, 8, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[8,2] = %f \n", II, JJ, LOCSTORE(store, 8, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[8,3] = %f \n", II, JJ, LOCSTORE(store, 8, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[9,1] = %f \n", II, JJ, LOCSTORE(store, 9, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[9,2] = %f \n", II, JJ, LOCSTORE(store, 9, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[9,3] = %f \n", II, JJ, LOCSTORE(store, 9, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[10,4] = %f \n", II, JJ, LOCSTORE(store, 10, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[10,5] = %f \n", II, JJ, LOCSTORE(store, 10, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[10,6] = %f \n", II, JJ, LOCSTORE(store, 10, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[10,7] = %f \n", II, JJ, LOCSTORE(store, 10, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[10,8] = %f \n", II, JJ, LOCSTORE(store, 10, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[10,9] = %f \n", II, JJ, LOCSTORE(store, 10, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[11,4] = %f \n", II, JJ, LOCSTORE(store, 11, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[11,5] = %f \n", II, JJ, LOCSTORE(store, 11, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[11,6] = %f \n", II, JJ, LOCSTORE(store, 11, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[11,7] = %f \n", II, JJ, LOCSTORE(store, 11, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[11,8] = %f \n", II, JJ, LOCSTORE(store, 11, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[11,9] = %f \n", II, JJ, LOCSTORE(store, 11, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[12,4] = %f \n", II, JJ, LOCSTORE(store, 12, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[12,5] = %f \n", II, JJ, LOCSTORE(store, 12, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[12,6] = %f \n", II, JJ, LOCSTORE(store, 12, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[12,7] = %f \n", II, JJ, LOCSTORE(store, 12, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[12,8] = %f \n", II, JJ, LOCSTORE(store, 12, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[12,9] = %f \n", II, JJ, LOCSTORE(store, 12, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[13,4] = %f \n", II, JJ, LOCSTORE(store, 13, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[13,5] = %f \n", II, JJ, LOCSTORE(store, 13, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[13,6] = %f \n", II, JJ, LOCSTORE(store, 13, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[13,7] = %f \n", II, JJ, LOCSTORE(store, 13, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[13,8] = %f \n", II, JJ, LOCSTORE(store, 13, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[13,9] = %f \n", II, JJ, LOCSTORE(store, 13, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[14,4] = %f \n", II, JJ, LOCSTORE(store, 14, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[14,5] = %f \n", II, JJ, LOCSTORE(store, 14, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[14,6] = %f \n", II, JJ, LOCSTORE(store, 14, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[14,7] = %f \n", II, JJ, LOCSTORE(store, 14, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[14,8] = %f \n", II, JJ, LOCSTORE(store, 14, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[14,9] = %f \n", II, JJ, LOCSTORE(store, 14, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[15,4] = %f \n", II, JJ, LOCSTORE(store, 15, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[15,5] = %f \n", II, JJ, LOCSTORE(store, 15, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[15,6] = %f \n", II, JJ, LOCSTORE(store, 15, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[15,7] = %f \n", II, JJ, LOCSTORE(store, 15, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[15,8] = %f \n", II, JJ, LOCSTORE(store, 15, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[15,9] = %f \n", II, JJ, LOCSTORE(store, 15, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[16,4] = %f \n", II, JJ, LOCSTORE(store, 16, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[16,5] = %f \n", II, JJ, LOCSTORE(store, 16, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[16,6] = %f \n", II, JJ, LOCSTORE(store, 16, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[16,7] = %f \n", II, JJ, LOCSTORE(store, 16, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[16,8] = %f \n", II, JJ, LOCSTORE(store, 16, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[16,9] = %f \n", II, JJ, LOCSTORE(store, 16, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[17,4] = %f \n", II, JJ, LOCSTORE(store, 17, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[17,5] = %f \n", II, JJ, LOCSTORE(store, 17, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[17,6] = %f \n", II, JJ, LOCSTORE(store, 17, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[17,7] = %f \n", II, JJ, LOCSTORE(store, 17, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[17,8] = %f \n", II, JJ, LOCSTORE(store, 17, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[17,9] = %f \n", II, JJ, LOCSTORE(store, 17, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[18,4] = %f \n", II, JJ, LOCSTORE(store, 18, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[18,5] = %f \n", II, JJ, LOCSTORE(store, 18, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[18,6] = %f \n", II, JJ, LOCSTORE(store, 18, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[18,7] = %f \n", II, JJ, LOCSTORE(store, 18, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[18,8] = %f \n", II, JJ, LOCSTORE(store, 18, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[18,9] = %f \n", II, JJ, LOCSTORE(store, 18, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[19,4] = %f \n", II, JJ, LOCSTORE(store, 19, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[19,5] = %f \n", II, JJ, LOCSTORE(store, 19, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[19,6] = %f \n", II, JJ, LOCSTORE(store, 19, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[19,7] = %f \n", II, JJ, LOCSTORE(store, 19, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[19,8] = %f \n", II, JJ, LOCSTORE(store, 19, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[19,9] = %f \n", II, JJ, LOCSTORE(store, 19, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[24,10] = %f \n", II, JJ, LOCSTORE(store, 4, 10, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[25,10] = %f \n", II, JJ, LOCSTORE(store, 5, 10, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[26,10] = %f \n", II, JJ, LOCSTORE(store, 6, 10, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[27,10] = %f \n", II, JJ, LOCSTORE(store, 7, 10, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[28,10] = %f \n", II, JJ, LOCSTORE(store, 8, 10, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[29,10] = %f \n", II, JJ, LOCSTORE(store, 9, 10, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[24,11] = %f \n", II, JJ, LOCSTORE(store, 4, 11, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[25,11] = %f \n", II, JJ, LOCSTORE(store, 5, 11, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[26,11] = %f \n", II, JJ, LOCSTORE(store, 6, 11, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[27,11] = %f \n", II, JJ, LOCSTORE(store, 7, 11, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[28,11] = %f \n", II, JJ, LOCSTORE(store, 8, 11, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[29,11] = %f \n", II, JJ, LOCSTORE(store, 9, 11, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[24,12] = %f \n", II, JJ, LOCSTORE(store, 4, 12, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[25,12] = %f \n", II, JJ, LOCSTORE(store, 5, 12, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[26,12] = %f \n", II, JJ, LOCSTORE(store, 6, 12, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[27,12] = %f \n", II, JJ, LOCSTORE(store, 7, 12, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[28,12] = %f \n", II, JJ, LOCSTORE(store, 8, 12, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[29,12] = %f \n", II, JJ, LOCSTORE(store, 9, 12, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[24,13] = %f \n", II, JJ, LOCSTORE(store, 4, 13, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[25,13] = %f \n", II, JJ, LOCSTORE(store, 5, 13, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[26,13] = %f \n", II, JJ, LOCSTORE(store, 6, 13, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[27,13] = %f \n", II, JJ, LOCSTORE(store, 7, 13, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[28,13] = %f \n", II, JJ, LOCSTORE(store, 8, 13, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[29,13] = %f \n", II, JJ, LOCSTORE(store, 9, 13, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[24,14] = %f \n", II, JJ, LOCSTORE(store, 4, 14, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[25,14] = %f \n", II, JJ, LOCSTORE(store, 5, 14, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[26,14] = %f \n", II, JJ, LOCSTORE(store, 6, 14, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[27,14] = %f \n", II, JJ, LOCSTORE(store, 7, 14, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[28,14] = %f \n", II, JJ, LOCSTORE(store, 8, 14, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[29,14] = %f \n", II, JJ, LOCSTORE(store, 9, 14, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[24,15] = %f \n", II, JJ, LOCSTORE(store, 4, 15, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[25,15] = %f \n", II, JJ, LOCSTORE(store, 5, 15, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[26,15] = %f \n", II, JJ, LOCSTORE(store, 6, 15, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[27,15] = %f \n", II, JJ, LOCSTORE(store, 7, 15, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[28,15] = %f \n", II, JJ, LOCSTORE(store, 8, 15, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[29,15] = %f \n", II, JJ, LOCSTORE(store, 9, 15, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[24,16] = %f \n", II, JJ, LOCSTORE(store, 4, 16, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[25,16] = %f \n", II, JJ, LOCSTORE(store, 5, 16, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[26,16] = %f \n", II, JJ, LOCSTORE(store, 6, 16, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[27,16] = %f \n", II, JJ, LOCSTORE(store, 7, 16, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[28,16] = %f \n", II, JJ, LOCSTORE(store, 8, 16, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[29,16] = %f \n", II, JJ, LOCSTORE(store, 9, 16, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[24,17] = %f \n", II, JJ, LOCSTORE(store, 4, 17, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[25,17] = %f \n", II, JJ, LOCSTORE(store, 5, 17, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[26,17] = %f \n", II, JJ, LOCSTORE(store, 6, 17, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[27,17] = %f \n", II, JJ, LOCSTORE(store, 7, 17, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[28,17] = %f \n", II, JJ, LOCSTORE(store, 8, 17, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[29,17] = %f \n", II, JJ, LOCSTORE(store, 9, 17, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[24,18] = %f \n", II, JJ, LOCSTORE(store, 4, 18, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[25,18] = %f \n", II, JJ, LOCSTORE(store, 5, 18, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[26,18] = %f \n", II, JJ, LOCSTORE(store, 6, 18, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[27,18] = %f \n", II, JJ, LOCSTORE(store, 7, 18, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[28,18] = %f \n", II, JJ, LOCSTORE(store, 8, 18, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[29,18] = %f \n", II, JJ, LOCSTORE(store, 9, 18, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[24,19] = %f \n", II, JJ, LOCSTORE(store, 4, 19, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[25,19] = %f \n", II, JJ, LOCSTORE(store, 5, 19, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[26,19] = %f \n", II, JJ, LOCSTORE(store, 6, 19, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[27,19] = %f \n", II, JJ, LOCSTORE(store, 7, 19, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[28,19] = %f \n", II, JJ, LOCSTORE(store, 8, 19, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[29,19] = %f \n", II, JJ, LOCSTORE(store, 9, 19, STOREDIM, STOREDIM)); 
#endif 

  } 

  /* FS integral gradient, m=0 */ 
  if(I == 3 && J == 0){ 
    
DSint_0 ds(PAx, PAy, PAz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 4, 0, STOREDIM, STOREDIM) = ds.x_4_0;
    LOCSTORE(store, 5, 0, STOREDIM, STOREDIM) = ds.x_5_0;
    LOCSTORE(store, 6, 0, STOREDIM, STOREDIM) = ds.x_6_0;
    LOCSTORE(store, 7, 0, STOREDIM, STOREDIM) = ds.x_7_0;
    LOCSTORE(store, 8, 0, STOREDIM, STOREDIM) = ds.x_8_0;
    LOCSTORE(store, 9, 0, STOREDIM, STOREDIM) = ds.x_9_0;
    
FPint_0 fp(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 10, 1, STOREDIM, STOREDIM) = fp.x_10_1;
    LOCSTORE(store, 10, 2, STOREDIM, STOREDIM) = fp.x_10_2;
    LOCSTORE(store, 10, 3, STOREDIM, STOREDIM) = fp.x_10_3;
    LOCSTORE(store, 11, 1, STOREDIM, STOREDIM) = fp.x_11_1;
    LOCSTORE(store, 11, 2, STOREDIM, STOREDIM) = fp.x_11_2;
    LOCSTORE(store, 11, 3, STOREDIM, STOREDIM) = fp.x_11_3;
    LOCSTORE(store, 12, 1, STOREDIM, STOREDIM) = fp.x_12_1;
    LOCSTORE(store, 12, 2, STOREDIM, STOREDIM) = fp.x_12_2;
    LOCSTORE(store, 12, 3, STOREDIM, STOREDIM) = fp.x_12_3;
    LOCSTORE(store, 13, 1, STOREDIM, STOREDIM) = fp.x_13_1;
    LOCSTORE(store, 13, 2, STOREDIM, STOREDIM) = fp.x_13_2;
    LOCSTORE(store, 13, 3, STOREDIM, STOREDIM) = fp.x_13_3;
    LOCSTORE(store, 14, 1, STOREDIM, STOREDIM) = fp.x_14_1;
    LOCSTORE(store, 14, 2, STOREDIM, STOREDIM) = fp.x_14_2;
    LOCSTORE(store, 14, 3, STOREDIM, STOREDIM) = fp.x_14_3;
    LOCSTORE(store, 15, 1, STOREDIM, STOREDIM) = fp.x_15_1;
    LOCSTORE(store, 15, 2, STOREDIM, STOREDIM) = fp.x_15_2;
    LOCSTORE(store, 15, 3, STOREDIM, STOREDIM) = fp.x_15_3;
    LOCSTORE(store, 16, 1, STOREDIM, STOREDIM) = fp.x_16_1;
    LOCSTORE(store, 16, 2, STOREDIM, STOREDIM) = fp.x_16_2;
    LOCSTORE(store, 16, 3, STOREDIM, STOREDIM) = fp.x_16_3;
    LOCSTORE(store, 17, 1, STOREDIM, STOREDIM) = fp.x_17_1;
    LOCSTORE(store, 17, 2, STOREDIM, STOREDIM) = fp.x_17_2;
    LOCSTORE(store, 17, 3, STOREDIM, STOREDIM) = fp.x_17_3;
    LOCSTORE(store, 18, 1, STOREDIM, STOREDIM) = fp.x_18_1;
    LOCSTORE(store, 18, 2, STOREDIM, STOREDIM) = fp.x_18_2;
    LOCSTORE(store, 18, 3, STOREDIM, STOREDIM) = fp.x_18_3;
    LOCSTORE(store, 19, 1, STOREDIM, STOREDIM) = fp.x_19_1;
    LOCSTORE(store, 19, 2, STOREDIM, STOREDIM) = fp.x_19_2;
    LOCSTORE(store, 19, 3, STOREDIM, STOREDIM) = fp.x_19_3;
    
GSint_0 gs(PAx, PAy, PAz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 20, 0, STOREDIM, STOREDIM) = gs.x_20_0;
    LOCSTORE(store, 21, 0, STOREDIM, STOREDIM) = gs.x_21_0;
    LOCSTORE(store, 22, 0, STOREDIM, STOREDIM) = gs.x_22_0;
    LOCSTORE(store, 23, 0, STOREDIM, STOREDIM) = gs.x_23_0;
    LOCSTORE(store, 24, 0, STOREDIM, STOREDIM) = gs.x_24_0;
    LOCSTORE(store, 25, 0, STOREDIM, STOREDIM) = gs.x_25_0;
    LOCSTORE(store, 26, 0, STOREDIM, STOREDIM) = gs.x_26_0;
    LOCSTORE(store, 27, 0, STOREDIM, STOREDIM) = gs.x_27_0;
    LOCSTORE(store, 28, 0, STOREDIM, STOREDIM) = gs.x_28_0;
    LOCSTORE(store, 29, 0, STOREDIM, STOREDIM) = gs.x_29_0;
    LOCSTORE(store, 30, 0, STOREDIM, STOREDIM) = gs.x_30_0;
    LOCSTORE(store, 31, 0, STOREDIM, STOREDIM) = gs.x_31_0;
    LOCSTORE(store, 32, 0, STOREDIM, STOREDIM) = gs.x_32_0;
    LOCSTORE(store, 33, 0, STOREDIM, STOREDIM) = gs.x_33_0;
    LOCSTORE(store, 34, 0, STOREDIM, STOREDIM) = gs.x_34_0;

#ifdef DEBUG_OEI 
    printf("II %d JJ %d DS store[4,0] = %f \n", II, JJ, LOCSTORE(store, 4, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DS store[5,0] = %f \n", II, JJ, LOCSTORE(store, 5, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DS store[6,0] = %f \n", II, JJ, LOCSTORE(store, 6, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DS store[7,0] = %f \n", II, JJ, LOCSTORE(store, 7, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DS store[8,0] = %f \n", II, JJ, LOCSTORE(store, 8, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DS store[9,0] = %f \n", II, JJ, LOCSTORE(store, 9, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[10,1] = %f \n", II, JJ, LOCSTORE(store, 10, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[10,2] = %f \n", II, JJ, LOCSTORE(store, 10, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[10,3] = %f \n", II, JJ, LOCSTORE(store, 10, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[11,1] = %f \n", II, JJ, LOCSTORE(store, 11, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[11,2] = %f \n", II, JJ, LOCSTORE(store, 11, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[11,3] = %f \n", II, JJ, LOCSTORE(store, 11, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[12,1] = %f \n", II, JJ, LOCSTORE(store, 12, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[12,2] = %f \n", II, JJ, LOCSTORE(store, 12, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[12,3] = %f \n", II, JJ, LOCSTORE(store, 12, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[13,1] = %f \n", II, JJ, LOCSTORE(store, 13, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[13,2] = %f \n", II, JJ, LOCSTORE(store, 13, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[13,3] = %f \n", II, JJ, LOCSTORE(store, 13, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[14,1] = %f \n", II, JJ, LOCSTORE(store, 14, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[14,2] = %f \n", II, JJ, LOCSTORE(store, 14, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[14,3] = %f \n", II, JJ, LOCSTORE(store, 14, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[15,1] = %f \n", II, JJ, LOCSTORE(store, 15, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[15,2] = %f \n", II, JJ, LOCSTORE(store, 15, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[15,3] = %f \n", II, JJ, LOCSTORE(store, 15, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[16,1] = %f \n", II, JJ, LOCSTORE(store, 16, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[16,2] = %f \n", II, JJ, LOCSTORE(store, 16, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[16,3] = %f \n", II, JJ, LOCSTORE(store, 16, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[17,1] = %f \n", II, JJ, LOCSTORE(store, 17, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[17,2] = %f \n", II, JJ, LOCSTORE(store, 17, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[17,3] = %f \n", II, JJ, LOCSTORE(store, 17, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[18,1] = %f \n", II, JJ, LOCSTORE(store, 18, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[18,2] = %f \n", II, JJ, LOCSTORE(store, 18, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[18,3] = %f \n", II, JJ, LOCSTORE(store, 18, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[19,1] = %f \n", II, JJ, LOCSTORE(store, 19, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[19,2] = %f \n", II, JJ, LOCSTORE(store, 19, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[19,3] = %f \n", II, JJ, LOCSTORE(store, 19, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GS store[20,0] = %f \n", II, JJ, LOCSTORE(store, 20, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GS store[21,0] = %f \n", II, JJ, LOCSTORE(store, 21, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GS store[22,0] = %f \n", II, JJ, LOCSTORE(store, 22, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GS store[23,0] = %f \n", II, JJ, LOCSTORE(store, 23, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GS store[24,0] = %f \n", II, JJ, LOCSTORE(store, 24, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GS store[25,0] = %f \n", II, JJ, LOCSTORE(store, 25, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GS store[26,0] = %f \n", II, JJ, LOCSTORE(store, 26, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GS store[27,0] = %f \n", II, JJ, LOCSTORE(store, 27, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GS store[28,0] = %f \n", II, JJ, LOCSTORE(store, 28, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GS store[29,0] = %f \n", II, JJ, LOCSTORE(store, 29, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GS store[30,0] = %f \n", II, JJ, LOCSTORE(store, 30, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GS store[31,0] = %f \n", II, JJ, LOCSTORE(store, 31, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GS store[32,0] = %f \n", II, JJ, LOCSTORE(store, 32, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GS store[33,0] = %f \n", II, JJ, LOCSTORE(store, 33, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GS store[34,0] = %f \n", II, JJ, LOCSTORE(store, 34, 0, STOREDIM, STOREDIM)); 
#endif 

  } 

  /* FP integral gradient, m=0 */ 
  if(I == 3 && J == 1){ 
    
FSint_0 fs(PAx, PAy, PAz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 10, 0, STOREDIM, STOREDIM) = fs.x_10_0;
    LOCSTORE(store, 11, 0, STOREDIM, STOREDIM) = fs.x_11_0;
    LOCSTORE(store, 12, 0, STOREDIM, STOREDIM) = fs.x_12_0;
    LOCSTORE(store, 13, 0, STOREDIM, STOREDIM) = fs.x_13_0;
    LOCSTORE(store, 14, 0, STOREDIM, STOREDIM) = fs.x_14_0;
    LOCSTORE(store, 15, 0, STOREDIM, STOREDIM) = fs.x_15_0;
    LOCSTORE(store, 16, 0, STOREDIM, STOREDIM) = fs.x_16_0;
    LOCSTORE(store, 17, 0, STOREDIM, STOREDIM) = fs.x_17_0;
    LOCSTORE(store, 18, 0, STOREDIM, STOREDIM) = fs.x_18_0;
    LOCSTORE(store, 19, 0, STOREDIM, STOREDIM) = fs.x_19_0;
    
DPint_0 dp(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 4, 1, STOREDIM, STOREDIM) = dp.x_4_1;
    LOCSTORE(store, 4, 2, STOREDIM, STOREDIM) = dp.x_4_2;
    LOCSTORE(store, 4, 3, STOREDIM, STOREDIM) = dp.x_4_3;
    LOCSTORE(store, 5, 1, STOREDIM, STOREDIM) = dp.x_5_1;
    LOCSTORE(store, 5, 2, STOREDIM, STOREDIM) = dp.x_5_2;
    LOCSTORE(store, 5, 3, STOREDIM, STOREDIM) = dp.x_5_3;
    LOCSTORE(store, 6, 1, STOREDIM, STOREDIM) = dp.x_6_1;
    LOCSTORE(store, 6, 2, STOREDIM, STOREDIM) = dp.x_6_2;
    LOCSTORE(store, 6, 3, STOREDIM, STOREDIM) = dp.x_6_3;
    LOCSTORE(store, 7, 1, STOREDIM, STOREDIM) = dp.x_7_1;
    LOCSTORE(store, 7, 2, STOREDIM, STOREDIM) = dp.x_7_2;
    LOCSTORE(store, 7, 3, STOREDIM, STOREDIM) = dp.x_7_3;
    LOCSTORE(store, 8, 1, STOREDIM, STOREDIM) = dp.x_8_1;
    LOCSTORE(store, 8, 2, STOREDIM, STOREDIM) = dp.x_8_2;
    LOCSTORE(store, 8, 3, STOREDIM, STOREDIM) = dp.x_8_3;
    LOCSTORE(store, 9, 1, STOREDIM, STOREDIM) = dp.x_9_1;
    LOCSTORE(store, 9, 2, STOREDIM, STOREDIM) = dp.x_9_2;
    LOCSTORE(store, 9, 3, STOREDIM, STOREDIM) = dp.x_9_3;
    
FDint_0 fd(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

#ifdef REG_FD 
    LOCSTORE(store, 10, 4, STOREDIM, STOREDIM) = fd.x_10_4;
    LOCSTORE(store, 10, 5, STOREDIM, STOREDIM) = fd.x_10_5;
    LOCSTORE(store, 10, 6, STOREDIM, STOREDIM) = fd.x_10_6;
    LOCSTORE(store, 10, 7, STOREDIM, STOREDIM) = fd.x_10_7;
    LOCSTORE(store, 10, 8, STOREDIM, STOREDIM) = fd.x_10_8;
    LOCSTORE(store, 10, 9, STOREDIM, STOREDIM) = fd.x_10_9;
    LOCSTORE(store, 11, 4, STOREDIM, STOREDIM) = fd.x_11_4;
    LOCSTORE(store, 11, 5, STOREDIM, STOREDIM) = fd.x_11_5;
    LOCSTORE(store, 11, 6, STOREDIM, STOREDIM) = fd.x_11_6;
    LOCSTORE(store, 11, 7, STOREDIM, STOREDIM) = fd.x_11_7;
    LOCSTORE(store, 11, 8, STOREDIM, STOREDIM) = fd.x_11_8;
    LOCSTORE(store, 11, 9, STOREDIM, STOREDIM) = fd.x_11_9;
    LOCSTORE(store, 12, 4, STOREDIM, STOREDIM) = fd.x_12_4;
    LOCSTORE(store, 12, 5, STOREDIM, STOREDIM) = fd.x_12_5;
    LOCSTORE(store, 12, 6, STOREDIM, STOREDIM) = fd.x_12_6;
    LOCSTORE(store, 12, 7, STOREDIM, STOREDIM) = fd.x_12_7;
    LOCSTORE(store, 12, 8, STOREDIM, STOREDIM) = fd.x_12_8;
    LOCSTORE(store, 12, 9, STOREDIM, STOREDIM) = fd.x_12_9;
    LOCSTORE(store, 13, 4, STOREDIM, STOREDIM) = fd.x_13_4;
    LOCSTORE(store, 13, 5, STOREDIM, STOREDIM) = fd.x_13_5;
    LOCSTORE(store, 13, 6, STOREDIM, STOREDIM) = fd.x_13_6;
    LOCSTORE(store, 13, 7, STOREDIM, STOREDIM) = fd.x_13_7;
    LOCSTORE(store, 13, 8, STOREDIM, STOREDIM) = fd.x_13_8;
    LOCSTORE(store, 13, 9, STOREDIM, STOREDIM) = fd.x_13_9;
    LOCSTORE(store, 14, 4, STOREDIM, STOREDIM) = fd.x_14_4;
    LOCSTORE(store, 14, 5, STOREDIM, STOREDIM) = fd.x_14_5;
    LOCSTORE(store, 14, 6, STOREDIM, STOREDIM) = fd.x_14_6;
    LOCSTORE(store, 14, 7, STOREDIM, STOREDIM) = fd.x_14_7;
    LOCSTORE(store, 14, 8, STOREDIM, STOREDIM) = fd.x_14_8;
    LOCSTORE(store, 14, 9, STOREDIM, STOREDIM) = fd.x_14_9;
    LOCSTORE(store, 15, 4, STOREDIM, STOREDIM) = fd.x_15_4;
    LOCSTORE(store, 15, 5, STOREDIM, STOREDIM) = fd.x_15_5;
    LOCSTORE(store, 15, 6, STOREDIM, STOREDIM) = fd.x_15_6;
    LOCSTORE(store, 15, 7, STOREDIM, STOREDIM) = fd.x_15_7;
    LOCSTORE(store, 15, 8, STOREDIM, STOREDIM) = fd.x_15_8;
    LOCSTORE(store, 15, 9, STOREDIM, STOREDIM) = fd.x_15_9;
    LOCSTORE(store, 16, 4, STOREDIM, STOREDIM) = fd.x_16_4;
    LOCSTORE(store, 16, 5, STOREDIM, STOREDIM) = fd.x_16_5;
    LOCSTORE(store, 16, 6, STOREDIM, STOREDIM) = fd.x_16_6;
    LOCSTORE(store, 16, 7, STOREDIM, STOREDIM) = fd.x_16_7;
    LOCSTORE(store, 16, 8, STOREDIM, STOREDIM) = fd.x_16_8;
    LOCSTORE(store, 16, 9, STOREDIM, STOREDIM) = fd.x_16_9;
    LOCSTORE(store, 17, 4, STOREDIM, STOREDIM) = fd.x_17_4;
    LOCSTORE(store, 17, 5, STOREDIM, STOREDIM) = fd.x_17_5;
    LOCSTORE(store, 17, 6, STOREDIM, STOREDIM) = fd.x_17_6;
    LOCSTORE(store, 17, 7, STOREDIM, STOREDIM) = fd.x_17_7;
    LOCSTORE(store, 17, 8, STOREDIM, STOREDIM) = fd.x_17_8;
    LOCSTORE(store, 17, 9, STOREDIM, STOREDIM) = fd.x_17_9;
    LOCSTORE(store, 18, 4, STOREDIM, STOREDIM) = fd.x_18_4;
    LOCSTORE(store, 18, 5, STOREDIM, STOREDIM) = fd.x_18_5;
    LOCSTORE(store, 18, 6, STOREDIM, STOREDIM) = fd.x_18_6;
    LOCSTORE(store, 18, 7, STOREDIM, STOREDIM) = fd.x_18_7;
    LOCSTORE(store, 18, 8, STOREDIM, STOREDIM) = fd.x_18_8;
    LOCSTORE(store, 18, 9, STOREDIM, STOREDIM) = fd.x_18_9;
    LOCSTORE(store, 19, 4, STOREDIM, STOREDIM) = fd.x_19_4;
    LOCSTORE(store, 19, 5, STOREDIM, STOREDIM) = fd.x_19_5;
    LOCSTORE(store, 19, 6, STOREDIM, STOREDIM) = fd.x_19_6;
    LOCSTORE(store, 19, 7, STOREDIM, STOREDIM) = fd.x_19_7;
    LOCSTORE(store, 19, 8, STOREDIM, STOREDIM) = fd.x_19_8;
    LOCSTORE(store, 19, 9, STOREDIM, STOREDIM) = fd.x_19_9;
#endif 
    
GPint_0 gp(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 20, 1, STOREDIM, STOREDIM) = gp.x_20_1;
    LOCSTORE(store, 20, 2, STOREDIM, STOREDIM) = gp.x_20_2;
    LOCSTORE(store, 20, 3, STOREDIM, STOREDIM) = gp.x_20_3;
    LOCSTORE(store, 21, 1, STOREDIM, STOREDIM) = gp.x_21_1;
    LOCSTORE(store, 21, 2, STOREDIM, STOREDIM) = gp.x_21_2;
    LOCSTORE(store, 21, 3, STOREDIM, STOREDIM) = gp.x_21_3;
    LOCSTORE(store, 22, 1, STOREDIM, STOREDIM) = gp.x_22_1;
    LOCSTORE(store, 22, 2, STOREDIM, STOREDIM) = gp.x_22_2;
    LOCSTORE(store, 22, 3, STOREDIM, STOREDIM) = gp.x_22_3;
    LOCSTORE(store, 23, 1, STOREDIM, STOREDIM) = gp.x_23_1;
    LOCSTORE(store, 23, 2, STOREDIM, STOREDIM) = gp.x_23_2;
    LOCSTORE(store, 23, 3, STOREDIM, STOREDIM) = gp.x_23_3;
    LOCSTORE(store, 24, 1, STOREDIM, STOREDIM) = gp.x_24_1;
    LOCSTORE(store, 24, 2, STOREDIM, STOREDIM) = gp.x_24_2;
    LOCSTORE(store, 24, 3, STOREDIM, STOREDIM) = gp.x_24_3;
    LOCSTORE(store, 25, 1, STOREDIM, STOREDIM) = gp.x_25_1;
    LOCSTORE(store, 25, 2, STOREDIM, STOREDIM) = gp.x_25_2;
    LOCSTORE(store, 25, 3, STOREDIM, STOREDIM) = gp.x_25_3;
    LOCSTORE(store, 26, 1, STOREDIM, STOREDIM) = gp.x_26_1;
    LOCSTORE(store, 26, 2, STOREDIM, STOREDIM) = gp.x_26_2;
    LOCSTORE(store, 26, 3, STOREDIM, STOREDIM) = gp.x_26_3;
    LOCSTORE(store, 27, 1, STOREDIM, STOREDIM) = gp.x_27_1;
    LOCSTORE(store, 27, 2, STOREDIM, STOREDIM) = gp.x_27_2;
    LOCSTORE(store, 27, 3, STOREDIM, STOREDIM) = gp.x_27_3;
    LOCSTORE(store, 28, 1, STOREDIM, STOREDIM) = gp.x_28_1;
    LOCSTORE(store, 28, 2, STOREDIM, STOREDIM) = gp.x_28_2;
    LOCSTORE(store, 28, 3, STOREDIM, STOREDIM) = gp.x_28_3;
    LOCSTORE(store, 29, 1, STOREDIM, STOREDIM) = gp.x_29_1;
    LOCSTORE(store, 29, 2, STOREDIM, STOREDIM) = gp.x_29_2;
    LOCSTORE(store, 29, 3, STOREDIM, STOREDIM) = gp.x_29_3;
    LOCSTORE(store, 30, 1, STOREDIM, STOREDIM) = gp.x_30_1;
    LOCSTORE(store, 30, 2, STOREDIM, STOREDIM) = gp.x_30_2;
    LOCSTORE(store, 30, 3, STOREDIM, STOREDIM) = gp.x_30_3;
    LOCSTORE(store, 31, 1, STOREDIM, STOREDIM) = gp.x_31_1;
    LOCSTORE(store, 31, 2, STOREDIM, STOREDIM) = gp.x_31_2;
    LOCSTORE(store, 31, 3, STOREDIM, STOREDIM) = gp.x_31_3;
    LOCSTORE(store, 32, 1, STOREDIM, STOREDIM) = gp.x_32_1;
    LOCSTORE(store, 32, 2, STOREDIM, STOREDIM) = gp.x_32_2;
    LOCSTORE(store, 32, 3, STOREDIM, STOREDIM) = gp.x_32_3;
    LOCSTORE(store, 33, 1, STOREDIM, STOREDIM) = gp.x_33_1;
    LOCSTORE(store, 33, 2, STOREDIM, STOREDIM) = gp.x_33_2;
    LOCSTORE(store, 33, 3, STOREDIM, STOREDIM) = gp.x_33_3;
    LOCSTORE(store, 34, 1, STOREDIM, STOREDIM) = gp.x_34_1;
    LOCSTORE(store, 34, 2, STOREDIM, STOREDIM) = gp.x_34_2;
    LOCSTORE(store, 34, 3, STOREDIM, STOREDIM) = gp.x_34_3;

#ifdef DEBUG_OEI 
    printf("II %d JJ %d FS store[4,0] = %f \n", II, JJ, LOCSTORE(store, 4, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FS store[5,0] = %f \n", II, JJ, LOCSTORE(store, 5, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FS store[6,0] = %f \n", II, JJ, LOCSTORE(store, 6, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FS store[7,0] = %f \n", II, JJ, LOCSTORE(store, 7, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FS store[8,0] = %f \n", II, JJ, LOCSTORE(store, 8, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FS store[9,0] = %f \n", II, JJ, LOCSTORE(store, 9, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FS store[10,0] = %f \n", II, JJ, LOCSTORE(store, 10, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FS store[11,0] = %f \n", II, JJ, LOCSTORE(store, 11, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FS store[12,0] = %f \n", II, JJ, LOCSTORE(store, 12, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FS store[13,0] = %f \n", II, JJ, LOCSTORE(store, 13, 0, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[1,1] = %f \n", II, JJ, LOCSTORE(store, 1, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[1,2] = %f \n", II, JJ, LOCSTORE(store, 1, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[1,3] = %f \n", II, JJ, LOCSTORE(store, 1, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[2,1] = %f \n", II, JJ, LOCSTORE(store, 2, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[2,2] = %f \n", II, JJ, LOCSTORE(store, 2, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[2,3] = %f \n", II, JJ, LOCSTORE(store, 2, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[3,1] = %f \n", II, JJ, LOCSTORE(store, 3, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[3,2] = %f \n", II, JJ, LOCSTORE(store, 3, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[3,3] = %f \n", II, JJ, LOCSTORE(store, 3, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[4,1] = %f \n", II, JJ, LOCSTORE(store, 4, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[4,2] = %f \n", II, JJ, LOCSTORE(store, 4, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[4,3] = %f \n", II, JJ, LOCSTORE(store, 4, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[5,1] = %f \n", II, JJ, LOCSTORE(store, 5, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[5,2] = %f \n", II, JJ, LOCSTORE(store, 5, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[5,3] = %f \n", II, JJ, LOCSTORE(store, 5, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[6,1] = %f \n", II, JJ, LOCSTORE(store, 6, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[6,2] = %f \n", II, JJ, LOCSTORE(store, 6, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DP store[6,3] = %f \n", II, JJ, LOCSTORE(store, 6, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store10,4] = %f \n", II, JJ, LOCSTORE(store, 10, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store10,5] = %f \n", II, JJ, LOCSTORE(store, 10, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store10,6] = %f \n", II, JJ, LOCSTORE(store, 10, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store10,7] = %f \n", II, JJ, LOCSTORE(store, 10, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store10,8] = %f \n", II, JJ, LOCSTORE(store, 10, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store10,9] = %f \n", II, JJ, LOCSTORE(store, 10, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store11,4] = %f \n", II, JJ, LOCSTORE(store, 11, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store11,5] = %f \n", II, JJ, LOCSTORE(store, 11, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store11,6] = %f \n", II, JJ, LOCSTORE(store, 11, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store11,7] = %f \n", II, JJ, LOCSTORE(store, 11, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store11,8] = %f \n", II, JJ, LOCSTORE(store, 11, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store11,9] = %f \n", II, JJ, LOCSTORE(store, 11, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store12,4] = %f \n", II, JJ, LOCSTORE(store, 12, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store12,5] = %f \n", II, JJ, LOCSTORE(store, 12, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store12,6] = %f \n", II, JJ, LOCSTORE(store, 12, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store12,7] = %f \n", II, JJ, LOCSTORE(store, 12, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store12,8] = %f \n", II, JJ, LOCSTORE(store, 12, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store12,9] = %f \n", II, JJ, LOCSTORE(store, 12, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store13,4] = %f \n", II, JJ, LOCSTORE(store, 13, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store13,5] = %f \n", II, JJ, LOCSTORE(store, 13, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store13,6] = %f \n", II, JJ, LOCSTORE(store, 13, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store13,7] = %f \n", II, JJ, LOCSTORE(store, 13, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store13,8] = %f \n", II, JJ, LOCSTORE(store, 13, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store13,9] = %f \n", II, JJ, LOCSTORE(store, 13, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store14,4] = %f \n", II, JJ, LOCSTORE(store, 14, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store14,5] = %f \n", II, JJ, LOCSTORE(store, 14, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store14,6] = %f \n", II, JJ, LOCSTORE(store, 14, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store14,7] = %f \n", II, JJ, LOCSTORE(store, 14, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store14,8] = %f \n", II, JJ, LOCSTORE(store, 14, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store14,9] = %f \n", II, JJ, LOCSTORE(store, 14, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store15,4] = %f \n", II, JJ, LOCSTORE(store, 15, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store15,5] = %f \n", II, JJ, LOCSTORE(store, 15, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store15,6] = %f \n", II, JJ, LOCSTORE(store, 15, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store15,7] = %f \n", II, JJ, LOCSTORE(store, 15, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store15,8] = %f \n", II, JJ, LOCSTORE(store, 15, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store15,9] = %f \n", II, JJ, LOCSTORE(store, 15, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store16,4] = %f \n", II, JJ, LOCSTORE(store, 16, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store16,5] = %f \n", II, JJ, LOCSTORE(store, 16, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store16,6] = %f \n", II, JJ, LOCSTORE(store, 16, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store16,7] = %f \n", II, JJ, LOCSTORE(store, 16, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store16,8] = %f \n", II, JJ, LOCSTORE(store, 16, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store16,9] = %f \n", II, JJ, LOCSTORE(store, 16, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store17,4] = %f \n", II, JJ, LOCSTORE(store, 17, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store17,5] = %f \n", II, JJ, LOCSTORE(store, 17, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store17,6] = %f \n", II, JJ, LOCSTORE(store, 17, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store17,7] = %f \n", II, JJ, LOCSTORE(store, 17, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store17,8] = %f \n", II, JJ, LOCSTORE(store, 17, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store17,9] = %f \n", II, JJ, LOCSTORE(store, 17, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store18,4] = %f \n", II, JJ, LOCSTORE(store, 18, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store18,5] = %f \n", II, JJ, LOCSTORE(store, 18, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store18,6] = %f \n", II, JJ, LOCSTORE(store, 18, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store18,7] = %f \n", II, JJ, LOCSTORE(store, 18, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store18,8] = %f \n", II, JJ, LOCSTORE(store, 18, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store18,9] = %f \n", II, JJ, LOCSTORE(store, 18, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store19,4] = %f \n", II, JJ, LOCSTORE(store, 19, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store19,5] = %f \n", II, JJ, LOCSTORE(store, 19, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store19,6] = %f \n", II, JJ, LOCSTORE(store, 19, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store19,7] = %f \n", II, JJ, LOCSTORE(store, 19, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store19,8] = %f \n", II, JJ, LOCSTORE(store, 19, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store19,9] = %f \n", II, JJ, LOCSTORE(store, 19, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[20,1] = %f \n", II, JJ, LOCSTORE(store, 20, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[20,2] = %f \n", II, JJ, LOCSTORE(store, 20, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[20,3] = %f \n", II, JJ, LOCSTORE(store, 20, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[21,1] = %f \n", II, JJ, LOCSTORE(store, 21, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[21,2] = %f \n", II, JJ, LOCSTORE(store, 21, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[21,3] = %f \n", II, JJ, LOCSTORE(store, 21, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[22,1] = %f \n", II, JJ, LOCSTORE(store, 22, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[22,2] = %f \n", II, JJ, LOCSTORE(store, 22, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[22,3] = %f \n", II, JJ, LOCSTORE(store, 22, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[23,1] = %f \n", II, JJ, LOCSTORE(store, 23, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[23,2] = %f \n", II, JJ, LOCSTORE(store, 23, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[23,3] = %f \n", II, JJ, LOCSTORE(store, 23, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[24,1] = %f \n", II, JJ, LOCSTORE(store, 24, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[24,2] = %f \n", II, JJ, LOCSTORE(store, 24, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[24,3] = %f \n", II, JJ, LOCSTORE(store, 24, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[25,1] = %f \n", II, JJ, LOCSTORE(store, 25, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[25,2] = %f \n", II, JJ, LOCSTORE(store, 25, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[25,3] = %f \n", II, JJ, LOCSTORE(store, 25, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[26,1] = %f \n", II, JJ, LOCSTORE(store, 26, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[26,2] = %f \n", II, JJ, LOCSTORE(store, 26, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[26,3] = %f \n", II, JJ, LOCSTORE(store, 26, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[27,1] = %f \n", II, JJ, LOCSTORE(store, 27, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[27,2] = %f \n", II, JJ, LOCSTORE(store, 27, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[27,3] = %f \n", II, JJ, LOCSTORE(store, 27, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[28,1] = %f \n", II, JJ, LOCSTORE(store, 28, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[28,2] = %f \n", II, JJ, LOCSTORE(store, 28, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[28,3] = %f \n", II, JJ, LOCSTORE(store, 28, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[29,1] = %f \n", II, JJ, LOCSTORE(store, 29, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[29,2] = %f \n", II, JJ, LOCSTORE(store, 29, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[29,3] = %f \n", II, JJ, LOCSTORE(store, 29, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[30,1] = %f \n", II, JJ, LOCSTORE(store, 30, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[30,2] = %f \n", II, JJ, LOCSTORE(store, 30, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[30,3] = %f \n", II, JJ, LOCSTORE(store, 30, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[31,1] = %f \n", II, JJ, LOCSTORE(store, 31, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[31,2] = %f \n", II, JJ, LOCSTORE(store, 31, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[31,3] = %f \n", II, JJ, LOCSTORE(store, 31, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[32,1] = %f \n", II, JJ, LOCSTORE(store, 32, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[32,2] = %f \n", II, JJ, LOCSTORE(store, 32, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[32,3] = %f \n", II, JJ, LOCSTORE(store, 32, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[33,1] = %f \n", II, JJ, LOCSTORE(store, 33, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[33,2] = %f \n", II, JJ, LOCSTORE(store, 33, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[33,3] = %f \n", II, JJ, LOCSTORE(store, 33, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[34,1] = %f \n", II, JJ, LOCSTORE(store, 34, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[34,2] = %f \n", II, JJ, LOCSTORE(store, 34, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GP store[34,3] = %f \n", II, JJ, LOCSTORE(store, 34, 3, STOREDIM, STOREDIM)); 
#endif 

  } 

  /* FD integral gradient, m=0 */ 
  if(I == 3 && J == 2){ 
    
DDint_0 dd(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

#ifdef REG_DD 
    LOCSTORE(store, 4, 4, STOREDIM, STOREDIM) = dd.x_4_4;
    LOCSTORE(store, 5, 4, STOREDIM, STOREDIM) = dd.x_5_4;
    LOCSTORE(store, 6, 4, STOREDIM, STOREDIM) = dd.x_6_4;
    LOCSTORE(store, 7, 4, STOREDIM, STOREDIM) = dd.x_7_4;
    LOCSTORE(store, 8, 4, STOREDIM, STOREDIM) = dd.x_8_4;
    LOCSTORE(store, 9, 4, STOREDIM, STOREDIM) = dd.x_9_4;
    LOCSTORE(store, 4, 5, STOREDIM, STOREDIM) = dd.x_4_5;
    LOCSTORE(store, 5, 5, STOREDIM, STOREDIM) = dd.x_5_5;
    LOCSTORE(store, 6, 5, STOREDIM, STOREDIM) = dd.x_6_5;
    LOCSTORE(store, 7, 5, STOREDIM, STOREDIM) = dd.x_7_5;
    LOCSTORE(store, 8, 5, STOREDIM, STOREDIM) = dd.x_8_5;
    LOCSTORE(store, 9, 5, STOREDIM, STOREDIM) = dd.x_9_5;
    LOCSTORE(store, 4, 6, STOREDIM, STOREDIM) = dd.x_4_6;
    LOCSTORE(store, 5, 6, STOREDIM, STOREDIM) = dd.x_5_6;
    LOCSTORE(store, 6, 6, STOREDIM, STOREDIM) = dd.x_6_6;
    LOCSTORE(store, 7, 6, STOREDIM, STOREDIM) = dd.x_7_6;
    LOCSTORE(store, 8, 6, STOREDIM, STOREDIM) = dd.x_8_6;
    LOCSTORE(store, 9, 6, STOREDIM, STOREDIM) = dd.x_9_6;
    LOCSTORE(store, 4, 7, STOREDIM, STOREDIM) = dd.x_4_7;
    LOCSTORE(store, 5, 7, STOREDIM, STOREDIM) = dd.x_5_7;
    LOCSTORE(store, 6, 7, STOREDIM, STOREDIM) = dd.x_6_7;
    LOCSTORE(store, 7, 7, STOREDIM, STOREDIM) = dd.x_7_7;
    LOCSTORE(store, 8, 7, STOREDIM, STOREDIM) = dd.x_8_7;
    LOCSTORE(store, 9, 7, STOREDIM, STOREDIM) = dd.x_9_7;
    LOCSTORE(store, 4, 8, STOREDIM, STOREDIM) = dd.x_4_8;
    LOCSTORE(store, 5, 8, STOREDIM, STOREDIM) = dd.x_5_8;
    LOCSTORE(store, 6, 8, STOREDIM, STOREDIM) = dd.x_6_8;
    LOCSTORE(store, 7, 8, STOREDIM, STOREDIM) = dd.x_7_8;
    LOCSTORE(store, 8, 8, STOREDIM, STOREDIM) = dd.x_8_8;
    LOCSTORE(store, 9, 8, STOREDIM, STOREDIM) = dd.x_9_8;
    LOCSTORE(store, 4, 9, STOREDIM, STOREDIM) = dd.x_4_9;
    LOCSTORE(store, 5, 9, STOREDIM, STOREDIM) = dd.x_5_9;
    LOCSTORE(store, 6, 9, STOREDIM, STOREDIM) = dd.x_6_9;
    LOCSTORE(store, 7, 9, STOREDIM, STOREDIM) = dd.x_7_9;
    LOCSTORE(store, 8, 9, STOREDIM, STOREDIM) = dd.x_8_9;
    LOCSTORE(store, 9, 9, STOREDIM, STOREDIM) = dd.x_9_9;
#endif 
    
FPint_0 fp(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

#ifdef REG_FP 
    LOCSTORE(store, 10, 1, STOREDIM, STOREDIM) = fp.x_10_1;
    LOCSTORE(store, 10, 2, STOREDIM, STOREDIM) = fp.x_10_2;
    LOCSTORE(store, 10, 3, STOREDIM, STOREDIM) = fp.x_10_3;
    LOCSTORE(store, 11, 1, STOREDIM, STOREDIM) = fp.x_11_1;
    LOCSTORE(store, 11, 2, STOREDIM, STOREDIM) = fp.x_11_2;
    LOCSTORE(store, 11, 3, STOREDIM, STOREDIM) = fp.x_11_3;
    LOCSTORE(store, 12, 1, STOREDIM, STOREDIM) = fp.x_12_1;
    LOCSTORE(store, 12, 2, STOREDIM, STOREDIM) = fp.x_12_2;
    LOCSTORE(store, 12, 3, STOREDIM, STOREDIM) = fp.x_12_3;
    LOCSTORE(store, 13, 1, STOREDIM, STOREDIM) = fp.x_13_1;
    LOCSTORE(store, 13, 2, STOREDIM, STOREDIM) = fp.x_13_2;
    LOCSTORE(store, 13, 3, STOREDIM, STOREDIM) = fp.x_13_3;
    LOCSTORE(store, 14, 1, STOREDIM, STOREDIM) = fp.x_14_1;
    LOCSTORE(store, 14, 2, STOREDIM, STOREDIM) = fp.x_14_2;
    LOCSTORE(store, 14, 3, STOREDIM, STOREDIM) = fp.x_14_3;
    LOCSTORE(store, 15, 1, STOREDIM, STOREDIM) = fp.x_15_1;
    LOCSTORE(store, 15, 2, STOREDIM, STOREDIM) = fp.x_15_2;
    LOCSTORE(store, 15, 3, STOREDIM, STOREDIM) = fp.x_15_3;
    LOCSTORE(store, 16, 1, STOREDIM, STOREDIM) = fp.x_16_1;
    LOCSTORE(store, 16, 2, STOREDIM, STOREDIM) = fp.x_16_2;
    LOCSTORE(store, 16, 3, STOREDIM, STOREDIM) = fp.x_16_3;
    LOCSTORE(store, 17, 1, STOREDIM, STOREDIM) = fp.x_17_1;
    LOCSTORE(store, 17, 2, STOREDIM, STOREDIM) = fp.x_17_2;
    LOCSTORE(store, 17, 3, STOREDIM, STOREDIM) = fp.x_17_3;
    LOCSTORE(store, 18, 1, STOREDIM, STOREDIM) = fp.x_18_1;
    LOCSTORE(store, 18, 2, STOREDIM, STOREDIM) = fp.x_18_2;
    LOCSTORE(store, 18, 3, STOREDIM, STOREDIM) = fp.x_18_3;
    LOCSTORE(store, 19, 1, STOREDIM, STOREDIM) = fp.x_19_1;
    LOCSTORE(store, 19, 2, STOREDIM, STOREDIM) = fp.x_19_2;
    LOCSTORE(store, 19, 3, STOREDIM, STOREDIM) = fp.x_19_3;
#endif 
    
GDint_0 gd(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 20, 4, STOREDIM, STOREDIM) = gd.x_20_4;
    LOCSTORE(store, 20, 5, STOREDIM, STOREDIM) = gd.x_20_5;
    LOCSTORE(store, 20, 6, STOREDIM, STOREDIM) = gd.x_20_6;
    LOCSTORE(store, 20, 7, STOREDIM, STOREDIM) = gd.x_20_7;
    LOCSTORE(store, 20, 8, STOREDIM, STOREDIM) = gd.x_20_8;
    LOCSTORE(store, 20, 9, STOREDIM, STOREDIM) = gd.x_20_9;
    LOCSTORE(store, 21, 4, STOREDIM, STOREDIM) = gd.x_21_4;
    LOCSTORE(store, 21, 5, STOREDIM, STOREDIM) = gd.x_21_5;
    LOCSTORE(store, 21, 6, STOREDIM, STOREDIM) = gd.x_21_6;
    LOCSTORE(store, 21, 7, STOREDIM, STOREDIM) = gd.x_21_7;
    LOCSTORE(store, 21, 8, STOREDIM, STOREDIM) = gd.x_21_8;
    LOCSTORE(store, 21, 9, STOREDIM, STOREDIM) = gd.x_21_9;
    LOCSTORE(store, 22, 4, STOREDIM, STOREDIM) = gd.x_22_4;
    LOCSTORE(store, 22, 5, STOREDIM, STOREDIM) = gd.x_22_5;
    LOCSTORE(store, 22, 6, STOREDIM, STOREDIM) = gd.x_22_6;
    LOCSTORE(store, 22, 7, STOREDIM, STOREDIM) = gd.x_22_7;
    LOCSTORE(store, 22, 8, STOREDIM, STOREDIM) = gd.x_22_8;
    LOCSTORE(store, 22, 9, STOREDIM, STOREDIM) = gd.x_22_9;
    LOCSTORE(store, 23, 4, STOREDIM, STOREDIM) = gd.x_23_4;
    LOCSTORE(store, 23, 5, STOREDIM, STOREDIM) = gd.x_23_5;
    LOCSTORE(store, 23, 6, STOREDIM, STOREDIM) = gd.x_23_6;
    LOCSTORE(store, 23, 7, STOREDIM, STOREDIM) = gd.x_23_7;
    LOCSTORE(store, 23, 8, STOREDIM, STOREDIM) = gd.x_23_8;
    LOCSTORE(store, 23, 9, STOREDIM, STOREDIM) = gd.x_23_9;
    LOCSTORE(store, 24, 4, STOREDIM, STOREDIM) = gd.x_24_4;
    LOCSTORE(store, 24, 5, STOREDIM, STOREDIM) = gd.x_24_5;
    LOCSTORE(store, 24, 6, STOREDIM, STOREDIM) = gd.x_24_6;
    LOCSTORE(store, 24, 7, STOREDIM, STOREDIM) = gd.x_24_7;
    LOCSTORE(store, 24, 8, STOREDIM, STOREDIM) = gd.x_24_8;
    LOCSTORE(store, 24, 9, STOREDIM, STOREDIM) = gd.x_24_9;
    LOCSTORE(store, 25, 4, STOREDIM, STOREDIM) = gd.x_25_4;
    LOCSTORE(store, 25, 5, STOREDIM, STOREDIM) = gd.x_25_5;
    LOCSTORE(store, 25, 6, STOREDIM, STOREDIM) = gd.x_25_6;
    LOCSTORE(store, 25, 7, STOREDIM, STOREDIM) = gd.x_25_7;
    LOCSTORE(store, 25, 8, STOREDIM, STOREDIM) = gd.x_25_8;
    LOCSTORE(store, 25, 9, STOREDIM, STOREDIM) = gd.x_25_9;
    LOCSTORE(store, 26, 4, STOREDIM, STOREDIM) = gd.x_26_4;
    LOCSTORE(store, 26, 5, STOREDIM, STOREDIM) = gd.x_26_5;
    LOCSTORE(store, 26, 6, STOREDIM, STOREDIM) = gd.x_26_6;
    LOCSTORE(store, 26, 7, STOREDIM, STOREDIM) = gd.x_26_7;
    LOCSTORE(store, 26, 8, STOREDIM, STOREDIM) = gd.x_26_8;
    LOCSTORE(store, 26, 9, STOREDIM, STOREDIM) = gd.x_26_9;
    LOCSTORE(store, 27, 4, STOREDIM, STOREDIM) = gd.x_27_4;
    LOCSTORE(store, 27, 5, STOREDIM, STOREDIM) = gd.x_27_5;
    LOCSTORE(store, 27, 6, STOREDIM, STOREDIM) = gd.x_27_6;
    LOCSTORE(store, 27, 7, STOREDIM, STOREDIM) = gd.x_27_7;
    LOCSTORE(store, 27, 8, STOREDIM, STOREDIM) = gd.x_27_8;
    LOCSTORE(store, 27, 9, STOREDIM, STOREDIM) = gd.x_27_9;
    LOCSTORE(store, 28, 4, STOREDIM, STOREDIM) = gd.x_28_4;
    LOCSTORE(store, 28, 5, STOREDIM, STOREDIM) = gd.x_28_5;
    LOCSTORE(store, 28, 6, STOREDIM, STOREDIM) = gd.x_28_6;
    LOCSTORE(store, 28, 7, STOREDIM, STOREDIM) = gd.x_28_7;
    LOCSTORE(store, 28, 8, STOREDIM, STOREDIM) = gd.x_28_8;
    LOCSTORE(store, 28, 9, STOREDIM, STOREDIM) = gd.x_28_9;
    LOCSTORE(store, 29, 4, STOREDIM, STOREDIM) = gd.x_29_4;
    LOCSTORE(store, 29, 5, STOREDIM, STOREDIM) = gd.x_29_5;
    LOCSTORE(store, 29, 6, STOREDIM, STOREDIM) = gd.x_29_6;
    LOCSTORE(store, 29, 7, STOREDIM, STOREDIM) = gd.x_29_7;
    LOCSTORE(store, 29, 8, STOREDIM, STOREDIM) = gd.x_29_8;
    LOCSTORE(store, 29, 9, STOREDIM, STOREDIM) = gd.x_29_9;
    LOCSTORE(store, 30, 4, STOREDIM, STOREDIM) = gd.x_30_4;
    LOCSTORE(store, 30, 5, STOREDIM, STOREDIM) = gd.x_30_5;
    LOCSTORE(store, 30, 6, STOREDIM, STOREDIM) = gd.x_30_6;
    LOCSTORE(store, 30, 7, STOREDIM, STOREDIM) = gd.x_30_7;
    LOCSTORE(store, 30, 8, STOREDIM, STOREDIM) = gd.x_30_8;
    LOCSTORE(store, 30, 9, STOREDIM, STOREDIM) = gd.x_30_9;
    LOCSTORE(store, 31, 4, STOREDIM, STOREDIM) = gd.x_31_4;
    LOCSTORE(store, 31, 5, STOREDIM, STOREDIM) = gd.x_31_5;
    LOCSTORE(store, 31, 6, STOREDIM, STOREDIM) = gd.x_31_6;
    LOCSTORE(store, 31, 7, STOREDIM, STOREDIM) = gd.x_31_7;
    LOCSTORE(store, 31, 8, STOREDIM, STOREDIM) = gd.x_31_8;
    LOCSTORE(store, 31, 9, STOREDIM, STOREDIM) = gd.x_31_9;
    LOCSTORE(store, 32, 4, STOREDIM, STOREDIM) = gd.x_32_4;
    LOCSTORE(store, 32, 5, STOREDIM, STOREDIM) = gd.x_32_5;
    LOCSTORE(store, 32, 6, STOREDIM, STOREDIM) = gd.x_32_6;
    LOCSTORE(store, 32, 7, STOREDIM, STOREDIM) = gd.x_32_7;
    LOCSTORE(store, 32, 8, STOREDIM, STOREDIM) = gd.x_32_8;
    LOCSTORE(store, 32, 9, STOREDIM, STOREDIM) = gd.x_32_9;
    LOCSTORE(store, 33, 4, STOREDIM, STOREDIM) = gd.x_33_4;
    LOCSTORE(store, 33, 5, STOREDIM, STOREDIM) = gd.x_33_5;
    LOCSTORE(store, 33, 6, STOREDIM, STOREDIM) = gd.x_33_6;
    LOCSTORE(store, 33, 7, STOREDIM, STOREDIM) = gd.x_33_7;
    LOCSTORE(store, 33, 8, STOREDIM, STOREDIM) = gd.x_33_8;
    LOCSTORE(store, 33, 9, STOREDIM, STOREDIM) = gd.x_33_9;
    LOCSTORE(store, 34, 4, STOREDIM, STOREDIM) = gd.x_34_4;
    LOCSTORE(store, 34, 5, STOREDIM, STOREDIM) = gd.x_34_5;
    LOCSTORE(store, 34, 6, STOREDIM, STOREDIM) = gd.x_34_6;
    LOCSTORE(store, 34, 7, STOREDIM, STOREDIM) = gd.x_34_7;
    LOCSTORE(store, 34, 8, STOREDIM, STOREDIM) = gd.x_34_8;
    LOCSTORE(store, 34, 9, STOREDIM, STOREDIM) = gd.x_34_9;
    
FFint_0 ff(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 10, 10, STOREDIM, STOREDIM) = ff.x_10_10;
    LOCSTORE(store, 11, 10, STOREDIM, STOREDIM) = ff.x_11_10;
    LOCSTORE(store, 12, 10, STOREDIM, STOREDIM) = ff.x_12_10;
    LOCSTORE(store, 13, 10, STOREDIM, STOREDIM) = ff.x_13_10;
    LOCSTORE(store, 14, 10, STOREDIM, STOREDIM) = ff.x_14_10;
    LOCSTORE(store, 15, 10, STOREDIM, STOREDIM) = ff.x_15_10;
    LOCSTORE(store, 16, 10, STOREDIM, STOREDIM) = ff.x_16_10;
    LOCSTORE(store, 17, 10, STOREDIM, STOREDIM) = ff.x_17_10;
    LOCSTORE(store, 18, 10, STOREDIM, STOREDIM) = ff.x_18_10;
    LOCSTORE(store, 19, 10, STOREDIM, STOREDIM) = ff.x_19_10;
    LOCSTORE(store, 10, 11, STOREDIM, STOREDIM) = ff.x_10_11;
    LOCSTORE(store, 11, 11, STOREDIM, STOREDIM) = ff.x_11_11;
    LOCSTORE(store, 12, 11, STOREDIM, STOREDIM) = ff.x_12_11;
    LOCSTORE(store, 13, 11, STOREDIM, STOREDIM) = ff.x_13_11;
    LOCSTORE(store, 14, 11, STOREDIM, STOREDIM) = ff.x_14_11;
    LOCSTORE(store, 15, 11, STOREDIM, STOREDIM) = ff.x_15_11;
    LOCSTORE(store, 16, 11, STOREDIM, STOREDIM) = ff.x_16_11;
    LOCSTORE(store, 17, 11, STOREDIM, STOREDIM) = ff.x_17_11;
    LOCSTORE(store, 18, 11, STOREDIM, STOREDIM) = ff.x_18_11;
    LOCSTORE(store, 19, 11, STOREDIM, STOREDIM) = ff.x_19_11;
    LOCSTORE(store, 10, 12, STOREDIM, STOREDIM) = ff.x_10_12;
    LOCSTORE(store, 11, 12, STOREDIM, STOREDIM) = ff.x_11_12;
    LOCSTORE(store, 12, 12, STOREDIM, STOREDIM) = ff.x_12_12;
    LOCSTORE(store, 13, 12, STOREDIM, STOREDIM) = ff.x_13_12;
    LOCSTORE(store, 14, 12, STOREDIM, STOREDIM) = ff.x_14_12;
    LOCSTORE(store, 15, 12, STOREDIM, STOREDIM) = ff.x_15_12;
    LOCSTORE(store, 16, 12, STOREDIM, STOREDIM) = ff.x_16_12;
    LOCSTORE(store, 17, 12, STOREDIM, STOREDIM) = ff.x_17_12;
    LOCSTORE(store, 18, 12, STOREDIM, STOREDIM) = ff.x_18_12;
    LOCSTORE(store, 19, 12, STOREDIM, STOREDIM) = ff.x_19_12;
    LOCSTORE(store, 10, 13, STOREDIM, STOREDIM) = ff.x_10_13;
    LOCSTORE(store, 11, 13, STOREDIM, STOREDIM) = ff.x_11_13;
    LOCSTORE(store, 12, 13, STOREDIM, STOREDIM) = ff.x_12_13;
    LOCSTORE(store, 13, 13, STOREDIM, STOREDIM) = ff.x_13_13;
    LOCSTORE(store, 14, 13, STOREDIM, STOREDIM) = ff.x_14_13;
    LOCSTORE(store, 15, 13, STOREDIM, STOREDIM) = ff.x_15_13;
    LOCSTORE(store, 16, 13, STOREDIM, STOREDIM) = ff.x_16_13;
    LOCSTORE(store, 17, 13, STOREDIM, STOREDIM) = ff.x_17_13;
    LOCSTORE(store, 18, 13, STOREDIM, STOREDIM) = ff.x_18_13;
    LOCSTORE(store, 19, 13, STOREDIM, STOREDIM) = ff.x_19_13;
    LOCSTORE(store, 10, 14, STOREDIM, STOREDIM) = ff.x_10_14;
    LOCSTORE(store, 11, 14, STOREDIM, STOREDIM) = ff.x_11_14;
    LOCSTORE(store, 12, 14, STOREDIM, STOREDIM) = ff.x_12_14;
    LOCSTORE(store, 13, 14, STOREDIM, STOREDIM) = ff.x_13_14;
    LOCSTORE(store, 14, 14, STOREDIM, STOREDIM) = ff.x_14_14;
    LOCSTORE(store, 15, 14, STOREDIM, STOREDIM) = ff.x_15_14;
    LOCSTORE(store, 16, 14, STOREDIM, STOREDIM) = ff.x_16_14;
    LOCSTORE(store, 17, 14, STOREDIM, STOREDIM) = ff.x_17_14;
    LOCSTORE(store, 18, 14, STOREDIM, STOREDIM) = ff.x_18_14;
    LOCSTORE(store, 19, 14, STOREDIM, STOREDIM) = ff.x_19_14;
    LOCSTORE(store, 10, 15, STOREDIM, STOREDIM) = ff.x_10_15;
    LOCSTORE(store, 11, 15, STOREDIM, STOREDIM) = ff.x_11_15;
    LOCSTORE(store, 12, 15, STOREDIM, STOREDIM) = ff.x_12_15;
    LOCSTORE(store, 13, 15, STOREDIM, STOREDIM) = ff.x_13_15;
    LOCSTORE(store, 14, 15, STOREDIM, STOREDIM) = ff.x_14_15;
    LOCSTORE(store, 15, 15, STOREDIM, STOREDIM) = ff.x_15_15;
    LOCSTORE(store, 16, 15, STOREDIM, STOREDIM) = ff.x_16_15;
    LOCSTORE(store, 17, 15, STOREDIM, STOREDIM) = ff.x_17_15;
    LOCSTORE(store, 18, 15, STOREDIM, STOREDIM) = ff.x_18_15;
    LOCSTORE(store, 19, 15, STOREDIM, STOREDIM) = ff.x_19_15;
    LOCSTORE(store, 10, 16, STOREDIM, STOREDIM) = ff.x_10_16;
    LOCSTORE(store, 11, 16, STOREDIM, STOREDIM) = ff.x_11_16;
    LOCSTORE(store, 12, 16, STOREDIM, STOREDIM) = ff.x_12_16;
    LOCSTORE(store, 13, 16, STOREDIM, STOREDIM) = ff.x_13_16;
    LOCSTORE(store, 14, 16, STOREDIM, STOREDIM) = ff.x_14_16;
    LOCSTORE(store, 15, 16, STOREDIM, STOREDIM) = ff.x_15_16;
    LOCSTORE(store, 16, 16, STOREDIM, STOREDIM) = ff.x_16_16;
    LOCSTORE(store, 17, 16, STOREDIM, STOREDIM) = ff.x_17_16;
    LOCSTORE(store, 18, 16, STOREDIM, STOREDIM) = ff.x_18_16;
    LOCSTORE(store, 19, 16, STOREDIM, STOREDIM) = ff.x_19_16;
    LOCSTORE(store, 10, 17, STOREDIM, STOREDIM) = ff.x_10_17;
    LOCSTORE(store, 11, 17, STOREDIM, STOREDIM) = ff.x_11_17;
    LOCSTORE(store, 12, 17, STOREDIM, STOREDIM) = ff.x_12_17;
    LOCSTORE(store, 13, 17, STOREDIM, STOREDIM) = ff.x_13_17;
    LOCSTORE(store, 14, 17, STOREDIM, STOREDIM) = ff.x_14_17;
    LOCSTORE(store, 15, 17, STOREDIM, STOREDIM) = ff.x_15_17;
    LOCSTORE(store, 16, 17, STOREDIM, STOREDIM) = ff.x_16_17;
    LOCSTORE(store, 17, 17, STOREDIM, STOREDIM) = ff.x_17_17;
    LOCSTORE(store, 18, 17, STOREDIM, STOREDIM) = ff.x_18_17;
    LOCSTORE(store, 19, 17, STOREDIM, STOREDIM) = ff.x_19_17;
    LOCSTORE(store, 10, 18, STOREDIM, STOREDIM) = ff.x_10_18;
    LOCSTORE(store, 11, 18, STOREDIM, STOREDIM) = ff.x_11_18;
    LOCSTORE(store, 12, 18, STOREDIM, STOREDIM) = ff.x_12_18;
    LOCSTORE(store, 13, 18, STOREDIM, STOREDIM) = ff.x_13_18;
    LOCSTORE(store, 14, 18, STOREDIM, STOREDIM) = ff.x_14_18;
    LOCSTORE(store, 15, 18, STOREDIM, STOREDIM) = ff.x_15_18;
    LOCSTORE(store, 16, 18, STOREDIM, STOREDIM) = ff.x_16_18;
    LOCSTORE(store, 17, 18, STOREDIM, STOREDIM) = ff.x_17_18;
    LOCSTORE(store, 18, 18, STOREDIM, STOREDIM) = ff.x_18_18;
    LOCSTORE(store, 19, 18, STOREDIM, STOREDIM) = ff.x_19_18;
    LOCSTORE(store, 10, 19, STOREDIM, STOREDIM) = ff.x_10_19;
    LOCSTORE(store, 11, 19, STOREDIM, STOREDIM) = ff.x_11_19;
    LOCSTORE(store, 12, 19, STOREDIM, STOREDIM) = ff.x_12_19;
    LOCSTORE(store, 13, 19, STOREDIM, STOREDIM) = ff.x_13_19;
    LOCSTORE(store, 14, 19, STOREDIM, STOREDIM) = ff.x_14_19;
    LOCSTORE(store, 15, 19, STOREDIM, STOREDIM) = ff.x_15_19;
    LOCSTORE(store, 16, 19, STOREDIM, STOREDIM) = ff.x_16_19;
    LOCSTORE(store, 17, 19, STOREDIM, STOREDIM) = ff.x_17_19;
    LOCSTORE(store, 18, 19, STOREDIM, STOREDIM) = ff.x_18_19;
    LOCSTORE(store, 19, 19, STOREDIM, STOREDIM) = ff.x_19_19;

#ifdef DEBUG_OEI 
    printf("II %d JJ %d DD store[4,4] = %f \n", II, JJ, LOCSTORE(store, 4, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[5,4] = %f \n", II, JJ, LOCSTORE(store, 5, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[6,4] = %f \n", II, JJ, LOCSTORE(store, 6, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[7,4] = %f \n", II, JJ, LOCSTORE(store, 7, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[8,4] = %f \n", II, JJ, LOCSTORE(store, 8, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[9,4] = %f \n", II, JJ, LOCSTORE(store, 9, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[4,5] = %f \n", II, JJ, LOCSTORE(store, 4, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[5,5] = %f \n", II, JJ, LOCSTORE(store, 5, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[6,5] = %f \n", II, JJ, LOCSTORE(store, 6, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[7,5] = %f \n", II, JJ, LOCSTORE(store, 7, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[8,5] = %f \n", II, JJ, LOCSTORE(store, 8, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[9,5] = %f \n", II, JJ, LOCSTORE(store, 9, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[4,6] = %f \n", II, JJ, LOCSTORE(store, 4, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[5,6] = %f \n", II, JJ, LOCSTORE(store, 5, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[6,6] = %f \n", II, JJ, LOCSTORE(store, 6, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[7,6] = %f \n", II, JJ, LOCSTORE(store, 7, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[8,6] = %f \n", II, JJ, LOCSTORE(store, 8, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[9,6] = %f \n", II, JJ, LOCSTORE(store, 9, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[4,7] = %f \n", II, JJ, LOCSTORE(store, 4, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[5,7] = %f \n", II, JJ, LOCSTORE(store, 5, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[6,7] = %f \n", II, JJ, LOCSTORE(store, 6, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[7,7] = %f \n", II, JJ, LOCSTORE(store, 7, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[8,7] = %f \n", II, JJ, LOCSTORE(store, 8, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[9,7] = %f \n", II, JJ, LOCSTORE(store, 9, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[4,8] = %f \n", II, JJ, LOCSTORE(store, 4, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[5,8] = %f \n", II, JJ, LOCSTORE(store, 5, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[6,8] = %f \n", II, JJ, LOCSTORE(store, 6, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[7,8] = %f \n", II, JJ, LOCSTORE(store, 7, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[8,8] = %f \n", II, JJ, LOCSTORE(store, 8, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[9,8] = %f \n", II, JJ, LOCSTORE(store, 9, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[4,9] = %f \n", II, JJ, LOCSTORE(store, 4, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[5,9] = %f \n", II, JJ, LOCSTORE(store, 5, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[6,9] = %f \n", II, JJ, LOCSTORE(store, 6, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[7,9] = %f \n", II, JJ, LOCSTORE(store, 7, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[8,9] = %f \n", II, JJ, LOCSTORE(store, 8, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DD store[9,9] = %f \n", II, JJ, LOCSTORE(store, 9, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[10,1] = %f \n", II, JJ, LOCSTORE(store, 10, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[10,2] = %f \n", II, JJ, LOCSTORE(store, 10, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[10,3] = %f \n", II, JJ, LOCSTORE(store, 10, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[11,1] = %f \n", II, JJ, LOCSTORE(store, 11, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[11,2] = %f \n", II, JJ, LOCSTORE(store, 11, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[11,3] = %f \n", II, JJ, LOCSTORE(store, 11, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[12,1] = %f \n", II, JJ, LOCSTORE(store, 12, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[12,2] = %f \n", II, JJ, LOCSTORE(store, 12, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[12,3] = %f \n", II, JJ, LOCSTORE(store, 12, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[13,1] = %f \n", II, JJ, LOCSTORE(store, 13, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[13,2] = %f \n", II, JJ, LOCSTORE(store, 13, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[13,3] = %f \n", II, JJ, LOCSTORE(store, 13, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[14,1] = %f \n", II, JJ, LOCSTORE(store, 14, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[14,2] = %f \n", II, JJ, LOCSTORE(store, 14, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[14,3] = %f \n", II, JJ, LOCSTORE(store, 14, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[15,1] = %f \n", II, JJ, LOCSTORE(store, 15, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[15,2] = %f \n", II, JJ, LOCSTORE(store, 15, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[15,3] = %f \n", II, JJ, LOCSTORE(store, 15, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[16,1] = %f \n", II, JJ, LOCSTORE(store, 16, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[16,2] = %f \n", II, JJ, LOCSTORE(store, 16, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[16,3] = %f \n", II, JJ, LOCSTORE(store, 16, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[17,1] = %f \n", II, JJ, LOCSTORE(store, 17, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[17,2] = %f \n", II, JJ, LOCSTORE(store, 17, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[17,3] = %f \n", II, JJ, LOCSTORE(store, 17, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[18,1] = %f \n", II, JJ, LOCSTORE(store, 18, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[18,2] = %f \n", II, JJ, LOCSTORE(store, 18, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[18,3] = %f \n", II, JJ, LOCSTORE(store, 18, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[19,1] = %f \n", II, JJ, LOCSTORE(store, 19, 1, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[19,2] = %f \n", II, JJ, LOCSTORE(store, 19, 2, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FP store[19,3] = %f \n", II, JJ, LOCSTORE(store, 19, 3, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[20,4] = %f \n", II, JJ, LOCSTORE(store, 20, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[20,5] = %f \n", II, JJ, LOCSTORE(store, 20, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[20,6] = %f \n", II, JJ, LOCSTORE(store, 20, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[20,7] = %f \n", II, JJ, LOCSTORE(store, 20, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[20,8] = %f \n", II, JJ, LOCSTORE(store, 20, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[20,9] = %f \n", II, JJ, LOCSTORE(store, 20, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[21,4] = %f \n", II, JJ, LOCSTORE(store, 21, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[21,5] = %f \n", II, JJ, LOCSTORE(store, 21, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[21,6] = %f \n", II, JJ, LOCSTORE(store, 21, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[21,7] = %f \n", II, JJ, LOCSTORE(store, 21, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[21,8] = %f \n", II, JJ, LOCSTORE(store, 21, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[21,9] = %f \n", II, JJ, LOCSTORE(store, 21, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[22,4] = %f \n", II, JJ, LOCSTORE(store, 22, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[22,5] = %f \n", II, JJ, LOCSTORE(store, 22, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[22,6] = %f \n", II, JJ, LOCSTORE(store, 22, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[22,7] = %f \n", II, JJ, LOCSTORE(store, 22, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[22,8] = %f \n", II, JJ, LOCSTORE(store, 22, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[22,9] = %f \n", II, JJ, LOCSTORE(store, 22, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[23,4] = %f \n", II, JJ, LOCSTORE(store, 23, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[23,5] = %f \n", II, JJ, LOCSTORE(store, 23, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[23,6] = %f \n", II, JJ, LOCSTORE(store, 23, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[23,7] = %f \n", II, JJ, LOCSTORE(store, 23, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[23,8] = %f \n", II, JJ, LOCSTORE(store, 23, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[23,9] = %f \n", II, JJ, LOCSTORE(store, 23, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[24,4] = %f \n", II, JJ, LOCSTORE(store, 24, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[24,5] = %f \n", II, JJ, LOCSTORE(store, 24, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[24,6] = %f \n", II, JJ, LOCSTORE(store, 24, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[24,7] = %f \n", II, JJ, LOCSTORE(store, 24, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[24,8] = %f \n", II, JJ, LOCSTORE(store, 24, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[24,9] = %f \n", II, JJ, LOCSTORE(store, 24, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[25,4] = %f \n", II, JJ, LOCSTORE(store, 25, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[25,5] = %f \n", II, JJ, LOCSTORE(store, 25, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[25,6] = %f \n", II, JJ, LOCSTORE(store, 25, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[25,7] = %f \n", II, JJ, LOCSTORE(store, 25, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[25,8] = %f \n", II, JJ, LOCSTORE(store, 25, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[25,9] = %f \n", II, JJ, LOCSTORE(store, 25, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[26,4] = %f \n", II, JJ, LOCSTORE(store, 26, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[26,5] = %f \n", II, JJ, LOCSTORE(store, 26, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[26,6] = %f \n", II, JJ, LOCSTORE(store, 26, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[26,7] = %f \n", II, JJ, LOCSTORE(store, 26, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[26,8] = %f \n", II, JJ, LOCSTORE(store, 26, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[26,9] = %f \n", II, JJ, LOCSTORE(store, 26, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[27,4] = %f \n", II, JJ, LOCSTORE(store, 27, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[27,5] = %f \n", II, JJ, LOCSTORE(store, 27, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[27,6] = %f \n", II, JJ, LOCSTORE(store, 27, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[27,7] = %f \n", II, JJ, LOCSTORE(store, 27, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[27,8] = %f \n", II, JJ, LOCSTORE(store, 27, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[27,9] = %f \n", II, JJ, LOCSTORE(store, 27, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[28,4] = %f \n", II, JJ, LOCSTORE(store, 28, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[28,5] = %f \n", II, JJ, LOCSTORE(store, 28, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[28,6] = %f \n", II, JJ, LOCSTORE(store, 28, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[28,7] = %f \n", II, JJ, LOCSTORE(store, 28, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[28,8] = %f \n", II, JJ, LOCSTORE(store, 28, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[28,9] = %f \n", II, JJ, LOCSTORE(store, 28, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[29,4] = %f \n", II, JJ, LOCSTORE(store, 29, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[29,5] = %f \n", II, JJ, LOCSTORE(store, 29, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[29,6] = %f \n", II, JJ, LOCSTORE(store, 29, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[29,7] = %f \n", II, JJ, LOCSTORE(store, 29, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[29,8] = %f \n", II, JJ, LOCSTORE(store, 29, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[29,9] = %f \n", II, JJ, LOCSTORE(store, 29, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[30,4] = %f \n", II, JJ, LOCSTORE(store, 30, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[30,5] = %f \n", II, JJ, LOCSTORE(store, 30, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[30,6] = %f \n", II, JJ, LOCSTORE(store, 30, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[30,7] = %f \n", II, JJ, LOCSTORE(store, 30, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[30,8] = %f \n", II, JJ, LOCSTORE(store, 30, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[30,9] = %f \n", II, JJ, LOCSTORE(store, 30, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[31,4] = %f \n", II, JJ, LOCSTORE(store, 31, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[31,5] = %f \n", II, JJ, LOCSTORE(store, 31, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[31,6] = %f \n", II, JJ, LOCSTORE(store, 31, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[31,7] = %f \n", II, JJ, LOCSTORE(store, 31, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[31,8] = %f \n", II, JJ, LOCSTORE(store, 31, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[31,9] = %f \n", II, JJ, LOCSTORE(store, 31, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[32,4] = %f \n", II, JJ, LOCSTORE(store, 32, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[32,5] = %f \n", II, JJ, LOCSTORE(store, 32, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[32,6] = %f \n", II, JJ, LOCSTORE(store, 32, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[32,7] = %f \n", II, JJ, LOCSTORE(store, 32, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[32,8] = %f \n", II, JJ, LOCSTORE(store, 32, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[32,9] = %f \n", II, JJ, LOCSTORE(store, 32, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[33,4] = %f \n", II, JJ, LOCSTORE(store, 33, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[33,5] = %f \n", II, JJ, LOCSTORE(store, 33, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[33,6] = %f \n", II, JJ, LOCSTORE(store, 33, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[33,7] = %f \n", II, JJ, LOCSTORE(store, 33, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[33,8] = %f \n", II, JJ, LOCSTORE(store, 33, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[33,9] = %f \n", II, JJ, LOCSTORE(store, 33, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[34,4] = %f \n", II, JJ, LOCSTORE(store, 34, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[34,5] = %f \n", II, JJ, LOCSTORE(store, 34, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[34,6] = %f \n", II, JJ, LOCSTORE(store, 34, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[34,7] = %f \n", II, JJ, LOCSTORE(store, 34, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[34,8] = %f \n", II, JJ, LOCSTORE(store, 34, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GD store[34,9] = %f \n", II, JJ, LOCSTORE(store, 34, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[210,10] = %f \n", II, JJ, LOCSTORE(store, 10, 10, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[211,10] = %f \n", II, JJ, LOCSTORE(store, 11, 10, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[212,10] = %f \n", II, JJ, LOCSTORE(store, 12, 10, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[213,10] = %f \n", II, JJ, LOCSTORE(store, 13, 10, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[214,10] = %f \n", II, JJ, LOCSTORE(store, 14, 10, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[215,10] = %f \n", II, JJ, LOCSTORE(store, 15, 10, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[216,10] = %f \n", II, JJ, LOCSTORE(store, 16, 10, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[217,10] = %f \n", II, JJ, LOCSTORE(store, 17, 10, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[218,10] = %f \n", II, JJ, LOCSTORE(store, 18, 10, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[219,10] = %f \n", II, JJ, LOCSTORE(store, 19, 10, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[210,11] = %f \n", II, JJ, LOCSTORE(store, 10, 11, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[211,11] = %f \n", II, JJ, LOCSTORE(store, 11, 11, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[212,11] = %f \n", II, JJ, LOCSTORE(store, 12, 11, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[213,11] = %f \n", II, JJ, LOCSTORE(store, 13, 11, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[214,11] = %f \n", II, JJ, LOCSTORE(store, 14, 11, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[215,11] = %f \n", II, JJ, LOCSTORE(store, 15, 11, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[216,11] = %f \n", II, JJ, LOCSTORE(store, 16, 11, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[217,11] = %f \n", II, JJ, LOCSTORE(store, 17, 11, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[218,11] = %f \n", II, JJ, LOCSTORE(store, 18, 11, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[219,11] = %f \n", II, JJ, LOCSTORE(store, 19, 11, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[210,12] = %f \n", II, JJ, LOCSTORE(store, 10, 12, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[211,12] = %f \n", II, JJ, LOCSTORE(store, 11, 12, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[212,12] = %f \n", II, JJ, LOCSTORE(store, 12, 12, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[213,12] = %f \n", II, JJ, LOCSTORE(store, 13, 12, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[214,12] = %f \n", II, JJ, LOCSTORE(store, 14, 12, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[215,12] = %f \n", II, JJ, LOCSTORE(store, 15, 12, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[216,12] = %f \n", II, JJ, LOCSTORE(store, 16, 12, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[217,12] = %f \n", II, JJ, LOCSTORE(store, 17, 12, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[218,12] = %f \n", II, JJ, LOCSTORE(store, 18, 12, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[219,12] = %f \n", II, JJ, LOCSTORE(store, 19, 12, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[210,13] = %f \n", II, JJ, LOCSTORE(store, 10, 13, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[211,13] = %f \n", II, JJ, LOCSTORE(store, 11, 13, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[212,13] = %f \n", II, JJ, LOCSTORE(store, 12, 13, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[213,13] = %f \n", II, JJ, LOCSTORE(store, 13, 13, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[214,13] = %f \n", II, JJ, LOCSTORE(store, 14, 13, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[215,13] = %f \n", II, JJ, LOCSTORE(store, 15, 13, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[216,13] = %f \n", II, JJ, LOCSTORE(store, 16, 13, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[217,13] = %f \n", II, JJ, LOCSTORE(store, 17, 13, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[218,13] = %f \n", II, JJ, LOCSTORE(store, 18, 13, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[219,13] = %f \n", II, JJ, LOCSTORE(store, 19, 13, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[210,14] = %f \n", II, JJ, LOCSTORE(store, 10, 14, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[211,14] = %f \n", II, JJ, LOCSTORE(store, 11, 14, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[212,14] = %f \n", II, JJ, LOCSTORE(store, 12, 14, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[213,14] = %f \n", II, JJ, LOCSTORE(store, 13, 14, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[214,14] = %f \n", II, JJ, LOCSTORE(store, 14, 14, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[215,14] = %f \n", II, JJ, LOCSTORE(store, 15, 14, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[216,14] = %f \n", II, JJ, LOCSTORE(store, 16, 14, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[217,14] = %f \n", II, JJ, LOCSTORE(store, 17, 14, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[218,14] = %f \n", II, JJ, LOCSTORE(store, 18, 14, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[219,14] = %f \n", II, JJ, LOCSTORE(store, 19, 14, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[210,15] = %f \n", II, JJ, LOCSTORE(store, 10, 15, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[211,15] = %f \n", II, JJ, LOCSTORE(store, 11, 15, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[212,15] = %f \n", II, JJ, LOCSTORE(store, 12, 15, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[213,15] = %f \n", II, JJ, LOCSTORE(store, 13, 15, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[214,15] = %f \n", II, JJ, LOCSTORE(store, 14, 15, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[215,15] = %f \n", II, JJ, LOCSTORE(store, 15, 15, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[216,15] = %f \n", II, JJ, LOCSTORE(store, 16, 15, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[217,15] = %f \n", II, JJ, LOCSTORE(store, 17, 15, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[218,15] = %f \n", II, JJ, LOCSTORE(store, 18, 15, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[219,15] = %f \n", II, JJ, LOCSTORE(store, 19, 15, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[210,16] = %f \n", II, JJ, LOCSTORE(store, 10, 16, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[211,16] = %f \n", II, JJ, LOCSTORE(store, 11, 16, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[212,16] = %f \n", II, JJ, LOCSTORE(store, 12, 16, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[213,16] = %f \n", II, JJ, LOCSTORE(store, 13, 16, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[214,16] = %f \n", II, JJ, LOCSTORE(store, 14, 16, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[215,16] = %f \n", II, JJ, LOCSTORE(store, 15, 16, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[216,16] = %f \n", II, JJ, LOCSTORE(store, 16, 16, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[217,16] = %f \n", II, JJ, LOCSTORE(store, 17, 16, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[218,16] = %f \n", II, JJ, LOCSTORE(store, 18, 16, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[219,16] = %f \n", II, JJ, LOCSTORE(store, 19, 16, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[210,17] = %f \n", II, JJ, LOCSTORE(store, 10, 17, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[211,17] = %f \n", II, JJ, LOCSTORE(store, 11, 17, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[212,17] = %f \n", II, JJ, LOCSTORE(store, 12, 17, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[213,17] = %f \n", II, JJ, LOCSTORE(store, 13, 17, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[214,17] = %f \n", II, JJ, LOCSTORE(store, 14, 17, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[215,17] = %f \n", II, JJ, LOCSTORE(store, 15, 17, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[216,17] = %f \n", II, JJ, LOCSTORE(store, 16, 17, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[217,17] = %f \n", II, JJ, LOCSTORE(store, 17, 17, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[218,17] = %f \n", II, JJ, LOCSTORE(store, 18, 17, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[219,17] = %f \n", II, JJ, LOCSTORE(store, 19, 17, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[210,18] = %f \n", II, JJ, LOCSTORE(store, 10, 18, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[211,18] = %f \n", II, JJ, LOCSTORE(store, 11, 18, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[212,18] = %f \n", II, JJ, LOCSTORE(store, 12, 18, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[213,18] = %f \n", II, JJ, LOCSTORE(store, 13, 18, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[214,18] = %f \n", II, JJ, LOCSTORE(store, 14, 18, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[215,18] = %f \n", II, JJ, LOCSTORE(store, 15, 18, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[216,18] = %f \n", II, JJ, LOCSTORE(store, 16, 18, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[217,18] = %f \n", II, JJ, LOCSTORE(store, 17, 18, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[218,18] = %f \n", II, JJ, LOCSTORE(store, 18, 18, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[219,18] = %f \n", II, JJ, LOCSTORE(store, 19, 18, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[210,19] = %f \n", II, JJ, LOCSTORE(store, 10, 19, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[211,19] = %f \n", II, JJ, LOCSTORE(store, 11, 19, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[212,19] = %f \n", II, JJ, LOCSTORE(store, 12, 19, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[213,19] = %f \n", II, JJ, LOCSTORE(store, 13, 19, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[214,19] = %f \n", II, JJ, LOCSTORE(store, 14, 19, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[215,19] = %f \n", II, JJ, LOCSTORE(store, 15, 19, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[216,19] = %f \n", II, JJ, LOCSTORE(store, 16, 19, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[217,19] = %f \n", II, JJ, LOCSTORE(store, 17, 19, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[218,19] = %f \n", II, JJ, LOCSTORE(store, 18, 19, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FF store[219,19] = %f \n", II, JJ, LOCSTORE(store, 19, 19, STOREDIM, STOREDIM)); 
#endif 

  } 

  /* FF integral gradient, m=0 */ 
  if(I == 3 && J == 3){ 
    
DFint_0 df(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

#ifdef REG_DF 
    LOCSTORE(store, 4, 10, STOREDIM, STOREDIM) = df.x_4_10;
    LOCSTORE(store, 4, 11, STOREDIM, STOREDIM) = df.x_4_11;
    LOCSTORE(store, 4, 12, STOREDIM, STOREDIM) = df.x_4_12;
    LOCSTORE(store, 4, 13, STOREDIM, STOREDIM) = df.x_4_13;
    LOCSTORE(store, 4, 14, STOREDIM, STOREDIM) = df.x_4_14;
    LOCSTORE(store, 4, 15, STOREDIM, STOREDIM) = df.x_4_15;
    LOCSTORE(store, 4, 16, STOREDIM, STOREDIM) = df.x_4_16;
    LOCSTORE(store, 4, 17, STOREDIM, STOREDIM) = df.x_4_17;
    LOCSTORE(store, 4, 18, STOREDIM, STOREDIM) = df.x_4_18;
    LOCSTORE(store, 4, 19, STOREDIM, STOREDIM) = df.x_4_19;
    LOCSTORE(store, 5, 10, STOREDIM, STOREDIM) = df.x_5_10;
    LOCSTORE(store, 5, 11, STOREDIM, STOREDIM) = df.x_5_11;
    LOCSTORE(store, 5, 12, STOREDIM, STOREDIM) = df.x_5_12;
    LOCSTORE(store, 5, 13, STOREDIM, STOREDIM) = df.x_5_13;
    LOCSTORE(store, 5, 14, STOREDIM, STOREDIM) = df.x_5_14;
    LOCSTORE(store, 5, 15, STOREDIM, STOREDIM) = df.x_5_15;
    LOCSTORE(store, 5, 16, STOREDIM, STOREDIM) = df.x_5_16;
    LOCSTORE(store, 5, 17, STOREDIM, STOREDIM) = df.x_5_17;
    LOCSTORE(store, 5, 18, STOREDIM, STOREDIM) = df.x_5_18;
    LOCSTORE(store, 5, 19, STOREDIM, STOREDIM) = df.x_5_19;
    LOCSTORE(store, 6, 10, STOREDIM, STOREDIM) = df.x_6_10;
    LOCSTORE(store, 6, 11, STOREDIM, STOREDIM) = df.x_6_11;
    LOCSTORE(store, 6, 12, STOREDIM, STOREDIM) = df.x_6_12;
    LOCSTORE(store, 6, 13, STOREDIM, STOREDIM) = df.x_6_13;
    LOCSTORE(store, 6, 14, STOREDIM, STOREDIM) = df.x_6_14;
    LOCSTORE(store, 6, 15, STOREDIM, STOREDIM) = df.x_6_15;
    LOCSTORE(store, 6, 16, STOREDIM, STOREDIM) = df.x_6_16;
    LOCSTORE(store, 6, 17, STOREDIM, STOREDIM) = df.x_6_17;
    LOCSTORE(store, 6, 18, STOREDIM, STOREDIM) = df.x_6_18;
    LOCSTORE(store, 6, 19, STOREDIM, STOREDIM) = df.x_6_19;
    LOCSTORE(store, 7, 10, STOREDIM, STOREDIM) = df.x_7_10;
    LOCSTORE(store, 7, 11, STOREDIM, STOREDIM) = df.x_7_11;
    LOCSTORE(store, 7, 12, STOREDIM, STOREDIM) = df.x_7_12;
    LOCSTORE(store, 7, 13, STOREDIM, STOREDIM) = df.x_7_13;
    LOCSTORE(store, 7, 14, STOREDIM, STOREDIM) = df.x_7_14;
    LOCSTORE(store, 7, 15, STOREDIM, STOREDIM) = df.x_7_15;
    LOCSTORE(store, 7, 16, STOREDIM, STOREDIM) = df.x_7_16;
    LOCSTORE(store, 7, 17, STOREDIM, STOREDIM) = df.x_7_17;
    LOCSTORE(store, 7, 18, STOREDIM, STOREDIM) = df.x_7_18;
    LOCSTORE(store, 7, 19, STOREDIM, STOREDIM) = df.x_7_19;
    LOCSTORE(store, 8, 10, STOREDIM, STOREDIM) = df.x_8_10;
    LOCSTORE(store, 8, 11, STOREDIM, STOREDIM) = df.x_8_11;
    LOCSTORE(store, 8, 12, STOREDIM, STOREDIM) = df.x_8_12;
    LOCSTORE(store, 8, 13, STOREDIM, STOREDIM) = df.x_8_13;
    LOCSTORE(store, 8, 14, STOREDIM, STOREDIM) = df.x_8_14;
    LOCSTORE(store, 8, 15, STOREDIM, STOREDIM) = df.x_8_15;
    LOCSTORE(store, 8, 16, STOREDIM, STOREDIM) = df.x_8_16;
    LOCSTORE(store, 8, 17, STOREDIM, STOREDIM) = df.x_8_17;
    LOCSTORE(store, 8, 18, STOREDIM, STOREDIM) = df.x_8_18;
    LOCSTORE(store, 8, 19, STOREDIM, STOREDIM) = df.x_8_19;
    LOCSTORE(store, 9, 10, STOREDIM, STOREDIM) = df.x_9_10;
    LOCSTORE(store, 9, 11, STOREDIM, STOREDIM) = df.x_9_11;
    LOCSTORE(store, 9, 12, STOREDIM, STOREDIM) = df.x_9_12;
    LOCSTORE(store, 9, 13, STOREDIM, STOREDIM) = df.x_9_13;
    LOCSTORE(store, 9, 14, STOREDIM, STOREDIM) = df.x_9_14;
    LOCSTORE(store, 9, 15, STOREDIM, STOREDIM) = df.x_9_15;
    LOCSTORE(store, 9, 16, STOREDIM, STOREDIM) = df.x_9_16;
    LOCSTORE(store, 9, 17, STOREDIM, STOREDIM) = df.x_9_17;
    LOCSTORE(store, 9, 18, STOREDIM, STOREDIM) = df.x_9_18;
    LOCSTORE(store, 9, 19, STOREDIM, STOREDIM) = df.x_9_19;
#endif 
    
FDint_0 fd(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

#ifdef REG_FD 
    LOCSTORE(store, 10, 4, STOREDIM, STOREDIM) = fd.x_10_4;
    LOCSTORE(store, 11, 4, STOREDIM, STOREDIM) = fd.x_11_4;
    LOCSTORE(store, 12, 4, STOREDIM, STOREDIM) = fd.x_12_4;
    LOCSTORE(store, 13, 4, STOREDIM, STOREDIM) = fd.x_13_4;
    LOCSTORE(store, 14, 4, STOREDIM, STOREDIM) = fd.x_14_4;
    LOCSTORE(store, 15, 4, STOREDIM, STOREDIM) = fd.x_15_4;
    LOCSTORE(store, 16, 4, STOREDIM, STOREDIM) = fd.x_16_4;
    LOCSTORE(store, 17, 4, STOREDIM, STOREDIM) = fd.x_17_4;
    LOCSTORE(store, 18, 4, STOREDIM, STOREDIM) = fd.x_18_4;
    LOCSTORE(store, 19, 4, STOREDIM, STOREDIM) = fd.x_19_4;
    LOCSTORE(store, 10, 5, STOREDIM, STOREDIM) = fd.x_10_5;
    LOCSTORE(store, 11, 5, STOREDIM, STOREDIM) = fd.x_11_5;
    LOCSTORE(store, 12, 5, STOREDIM, STOREDIM) = fd.x_12_5;
    LOCSTORE(store, 13, 5, STOREDIM, STOREDIM) = fd.x_13_5;
    LOCSTORE(store, 14, 5, STOREDIM, STOREDIM) = fd.x_14_5;
    LOCSTORE(store, 15, 5, STOREDIM, STOREDIM) = fd.x_15_5;
    LOCSTORE(store, 16, 5, STOREDIM, STOREDIM) = fd.x_16_5;
    LOCSTORE(store, 17, 5, STOREDIM, STOREDIM) = fd.x_17_5;
    LOCSTORE(store, 18, 5, STOREDIM, STOREDIM) = fd.x_18_5;
    LOCSTORE(store, 19, 5, STOREDIM, STOREDIM) = fd.x_19_5;
    LOCSTORE(store, 10, 6, STOREDIM, STOREDIM) = fd.x_10_6;
    LOCSTORE(store, 11, 6, STOREDIM, STOREDIM) = fd.x_11_6;
    LOCSTORE(store, 12, 6, STOREDIM, STOREDIM) = fd.x_12_6;
    LOCSTORE(store, 13, 6, STOREDIM, STOREDIM) = fd.x_13_6;
    LOCSTORE(store, 14, 6, STOREDIM, STOREDIM) = fd.x_14_6;
    LOCSTORE(store, 15, 6, STOREDIM, STOREDIM) = fd.x_15_6;
    LOCSTORE(store, 16, 6, STOREDIM, STOREDIM) = fd.x_16_6;
    LOCSTORE(store, 17, 6, STOREDIM, STOREDIM) = fd.x_17_6;
    LOCSTORE(store, 18, 6, STOREDIM, STOREDIM) = fd.x_18_6;
    LOCSTORE(store, 19, 6, STOREDIM, STOREDIM) = fd.x_19_6;
    LOCSTORE(store, 10, 7, STOREDIM, STOREDIM) = fd.x_10_7;
    LOCSTORE(store, 11, 7, STOREDIM, STOREDIM) = fd.x_11_7;
    LOCSTORE(store, 12, 7, STOREDIM, STOREDIM) = fd.x_12_7;
    LOCSTORE(store, 13, 7, STOREDIM, STOREDIM) = fd.x_13_7;
    LOCSTORE(store, 14, 7, STOREDIM, STOREDIM) = fd.x_14_7;
    LOCSTORE(store, 15, 7, STOREDIM, STOREDIM) = fd.x_15_7;
    LOCSTORE(store, 16, 7, STOREDIM, STOREDIM) = fd.x_16_7;
    LOCSTORE(store, 17, 7, STOREDIM, STOREDIM) = fd.x_17_7;
    LOCSTORE(store, 18, 7, STOREDIM, STOREDIM) = fd.x_18_7;
    LOCSTORE(store, 19, 7, STOREDIM, STOREDIM) = fd.x_19_7;
    LOCSTORE(store, 10, 8, STOREDIM, STOREDIM) = fd.x_10_8;
    LOCSTORE(store, 11, 8, STOREDIM, STOREDIM) = fd.x_11_8;
    LOCSTORE(store, 12, 8, STOREDIM, STOREDIM) = fd.x_12_8;
    LOCSTORE(store, 13, 8, STOREDIM, STOREDIM) = fd.x_13_8;
    LOCSTORE(store, 14, 8, STOREDIM, STOREDIM) = fd.x_14_8;
    LOCSTORE(store, 15, 8, STOREDIM, STOREDIM) = fd.x_15_8;
    LOCSTORE(store, 16, 8, STOREDIM, STOREDIM) = fd.x_16_8;
    LOCSTORE(store, 17, 8, STOREDIM, STOREDIM) = fd.x_17_8;
    LOCSTORE(store, 18, 8, STOREDIM, STOREDIM) = fd.x_18_8;
    LOCSTORE(store, 19, 8, STOREDIM, STOREDIM) = fd.x_19_8;
    LOCSTORE(store, 10, 9, STOREDIM, STOREDIM) = fd.x_10_9;
    LOCSTORE(store, 11, 9, STOREDIM, STOREDIM) = fd.x_11_9;
    LOCSTORE(store, 12, 9, STOREDIM, STOREDIM) = fd.x_12_9;
    LOCSTORE(store, 13, 9, STOREDIM, STOREDIM) = fd.x_13_9;
    LOCSTORE(store, 14, 9, STOREDIM, STOREDIM) = fd.x_14_9;
    LOCSTORE(store, 15, 9, STOREDIM, STOREDIM) = fd.x_15_9;
    LOCSTORE(store, 16, 9, STOREDIM, STOREDIM) = fd.x_16_9;
    LOCSTORE(store, 17, 9, STOREDIM, STOREDIM) = fd.x_17_9;
    LOCSTORE(store, 18, 9, STOREDIM, STOREDIM) = fd.x_18_9;
    LOCSTORE(store, 19, 9, STOREDIM, STOREDIM) = fd.x_19_9;
#endif 
    
GFint_0 gf(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 20, 10, STOREDIM, STOREDIM) = gf.x_20_10;
    LOCSTORE(store, 20, 11, STOREDIM, STOREDIM) = gf.x_20_11;
    LOCSTORE(store, 20, 12, STOREDIM, STOREDIM) = gf.x_20_12;
    LOCSTORE(store, 20, 13, STOREDIM, STOREDIM) = gf.x_20_13;
    LOCSTORE(store, 20, 14, STOREDIM, STOREDIM) = gf.x_20_14;
    LOCSTORE(store, 20, 15, STOREDIM, STOREDIM) = gf.x_20_15;
    LOCSTORE(store, 20, 16, STOREDIM, STOREDIM) = gf.x_20_16;
    LOCSTORE(store, 20, 17, STOREDIM, STOREDIM) = gf.x_20_17;
    LOCSTORE(store, 20, 18, STOREDIM, STOREDIM) = gf.x_20_18;
    LOCSTORE(store, 20, 19, STOREDIM, STOREDIM) = gf.x_20_19;
    LOCSTORE(store, 21, 10, STOREDIM, STOREDIM) = gf.x_21_10;
    LOCSTORE(store, 21, 11, STOREDIM, STOREDIM) = gf.x_21_11;
    LOCSTORE(store, 21, 12, STOREDIM, STOREDIM) = gf.x_21_12;
    LOCSTORE(store, 21, 13, STOREDIM, STOREDIM) = gf.x_21_13;
    LOCSTORE(store, 21, 14, STOREDIM, STOREDIM) = gf.x_21_14;
    LOCSTORE(store, 21, 15, STOREDIM, STOREDIM) = gf.x_21_15;
    LOCSTORE(store, 21, 16, STOREDIM, STOREDIM) = gf.x_21_16;
    LOCSTORE(store, 21, 17, STOREDIM, STOREDIM) = gf.x_21_17;
    LOCSTORE(store, 21, 18, STOREDIM, STOREDIM) = gf.x_21_18;
    LOCSTORE(store, 21, 19, STOREDIM, STOREDIM) = gf.x_21_19;
    LOCSTORE(store, 22, 10, STOREDIM, STOREDIM) = gf.x_22_10;
    LOCSTORE(store, 22, 11, STOREDIM, STOREDIM) = gf.x_22_11;
    LOCSTORE(store, 22, 12, STOREDIM, STOREDIM) = gf.x_22_12;
    LOCSTORE(store, 22, 13, STOREDIM, STOREDIM) = gf.x_22_13;
    LOCSTORE(store, 22, 14, STOREDIM, STOREDIM) = gf.x_22_14;
    LOCSTORE(store, 22, 15, STOREDIM, STOREDIM) = gf.x_22_15;
    LOCSTORE(store, 22, 16, STOREDIM, STOREDIM) = gf.x_22_16;
    LOCSTORE(store, 22, 17, STOREDIM, STOREDIM) = gf.x_22_17;
    LOCSTORE(store, 22, 18, STOREDIM, STOREDIM) = gf.x_22_18;
    LOCSTORE(store, 22, 19, STOREDIM, STOREDIM) = gf.x_22_19;
    LOCSTORE(store, 23, 10, STOREDIM, STOREDIM) = gf.x_23_10;
    LOCSTORE(store, 23, 11, STOREDIM, STOREDIM) = gf.x_23_11;
    LOCSTORE(store, 23, 12, STOREDIM, STOREDIM) = gf.x_23_12;
    LOCSTORE(store, 23, 13, STOREDIM, STOREDIM) = gf.x_23_13;
    LOCSTORE(store, 23, 14, STOREDIM, STOREDIM) = gf.x_23_14;
    LOCSTORE(store, 23, 15, STOREDIM, STOREDIM) = gf.x_23_15;
    LOCSTORE(store, 23, 16, STOREDIM, STOREDIM) = gf.x_23_16;
    LOCSTORE(store, 23, 17, STOREDIM, STOREDIM) = gf.x_23_17;
    LOCSTORE(store, 23, 18, STOREDIM, STOREDIM) = gf.x_23_18;
    LOCSTORE(store, 23, 19, STOREDIM, STOREDIM) = gf.x_23_19;
    LOCSTORE(store, 24, 10, STOREDIM, STOREDIM) = gf.x_24_10;
    LOCSTORE(store, 24, 11, STOREDIM, STOREDIM) = gf.x_24_11;
    LOCSTORE(store, 24, 12, STOREDIM, STOREDIM) = gf.x_24_12;
    LOCSTORE(store, 24, 13, STOREDIM, STOREDIM) = gf.x_24_13;
    LOCSTORE(store, 24, 14, STOREDIM, STOREDIM) = gf.x_24_14;
    LOCSTORE(store, 24, 15, STOREDIM, STOREDIM) = gf.x_24_15;
    LOCSTORE(store, 24, 16, STOREDIM, STOREDIM) = gf.x_24_16;
    LOCSTORE(store, 24, 17, STOREDIM, STOREDIM) = gf.x_24_17;
    LOCSTORE(store, 24, 18, STOREDIM, STOREDIM) = gf.x_24_18;
    LOCSTORE(store, 24, 19, STOREDIM, STOREDIM) = gf.x_24_19;
    LOCSTORE(store, 25, 10, STOREDIM, STOREDIM) = gf.x_25_10;
    LOCSTORE(store, 25, 11, STOREDIM, STOREDIM) = gf.x_25_11;
    LOCSTORE(store, 25, 12, STOREDIM, STOREDIM) = gf.x_25_12;
    LOCSTORE(store, 25, 13, STOREDIM, STOREDIM) = gf.x_25_13;
    LOCSTORE(store, 25, 14, STOREDIM, STOREDIM) = gf.x_25_14;
    LOCSTORE(store, 25, 15, STOREDIM, STOREDIM) = gf.x_25_15;
    LOCSTORE(store, 25, 16, STOREDIM, STOREDIM) = gf.x_25_16;
    LOCSTORE(store, 25, 17, STOREDIM, STOREDIM) = gf.x_25_17;
    LOCSTORE(store, 25, 18, STOREDIM, STOREDIM) = gf.x_25_18;
    LOCSTORE(store, 25, 19, STOREDIM, STOREDIM) = gf.x_25_19;
    LOCSTORE(store, 26, 10, STOREDIM, STOREDIM) = gf.x_26_10;
    LOCSTORE(store, 26, 11, STOREDIM, STOREDIM) = gf.x_26_11;
    LOCSTORE(store, 26, 12, STOREDIM, STOREDIM) = gf.x_26_12;
    LOCSTORE(store, 26, 13, STOREDIM, STOREDIM) = gf.x_26_13;
    LOCSTORE(store, 26, 14, STOREDIM, STOREDIM) = gf.x_26_14;
    LOCSTORE(store, 26, 15, STOREDIM, STOREDIM) = gf.x_26_15;
    LOCSTORE(store, 26, 16, STOREDIM, STOREDIM) = gf.x_26_16;
    LOCSTORE(store, 26, 17, STOREDIM, STOREDIM) = gf.x_26_17;
    LOCSTORE(store, 26, 18, STOREDIM, STOREDIM) = gf.x_26_18;
    LOCSTORE(store, 26, 19, STOREDIM, STOREDIM) = gf.x_26_19;
    LOCSTORE(store, 27, 10, STOREDIM, STOREDIM) = gf.x_27_10;
    LOCSTORE(store, 27, 11, STOREDIM, STOREDIM) = gf.x_27_11;
    LOCSTORE(store, 27, 12, STOREDIM, STOREDIM) = gf.x_27_12;
    LOCSTORE(store, 27, 13, STOREDIM, STOREDIM) = gf.x_27_13;
    LOCSTORE(store, 27, 14, STOREDIM, STOREDIM) = gf.x_27_14;
    LOCSTORE(store, 27, 15, STOREDIM, STOREDIM) = gf.x_27_15;
    LOCSTORE(store, 27, 16, STOREDIM, STOREDIM) = gf.x_27_16;
    LOCSTORE(store, 27, 17, STOREDIM, STOREDIM) = gf.x_27_17;
    LOCSTORE(store, 27, 18, STOREDIM, STOREDIM) = gf.x_27_18;
    LOCSTORE(store, 27, 19, STOREDIM, STOREDIM) = gf.x_27_19;
    LOCSTORE(store, 28, 10, STOREDIM, STOREDIM) = gf.x_28_10;
    LOCSTORE(store, 28, 11, STOREDIM, STOREDIM) = gf.x_28_11;
    LOCSTORE(store, 28, 12, STOREDIM, STOREDIM) = gf.x_28_12;
    LOCSTORE(store, 28, 13, STOREDIM, STOREDIM) = gf.x_28_13;
    LOCSTORE(store, 28, 14, STOREDIM, STOREDIM) = gf.x_28_14;
    LOCSTORE(store, 28, 15, STOREDIM, STOREDIM) = gf.x_28_15;
    LOCSTORE(store, 28, 16, STOREDIM, STOREDIM) = gf.x_28_16;
    LOCSTORE(store, 28, 17, STOREDIM, STOREDIM) = gf.x_28_17;
    LOCSTORE(store, 28, 18, STOREDIM, STOREDIM) = gf.x_28_18;
    LOCSTORE(store, 28, 19, STOREDIM, STOREDIM) = gf.x_28_19;
    LOCSTORE(store, 29, 10, STOREDIM, STOREDIM) = gf.x_29_10;
    LOCSTORE(store, 29, 11, STOREDIM, STOREDIM) = gf.x_29_11;
    LOCSTORE(store, 29, 12, STOREDIM, STOREDIM) = gf.x_29_12;
    LOCSTORE(store, 29, 13, STOREDIM, STOREDIM) = gf.x_29_13;
    LOCSTORE(store, 29, 14, STOREDIM, STOREDIM) = gf.x_29_14;
    LOCSTORE(store, 29, 15, STOREDIM, STOREDIM) = gf.x_29_15;
    LOCSTORE(store, 29, 16, STOREDIM, STOREDIM) = gf.x_29_16;
    LOCSTORE(store, 29, 17, STOREDIM, STOREDIM) = gf.x_29_17;
    LOCSTORE(store, 29, 18, STOREDIM, STOREDIM) = gf.x_29_18;
    LOCSTORE(store, 29, 19, STOREDIM, STOREDIM) = gf.x_29_19;
    LOCSTORE(store, 30, 10, STOREDIM, STOREDIM) = gf.x_30_10;
    LOCSTORE(store, 30, 11, STOREDIM, STOREDIM) = gf.x_30_11;
    LOCSTORE(store, 30, 12, STOREDIM, STOREDIM) = gf.x_30_12;
    LOCSTORE(store, 30, 13, STOREDIM, STOREDIM) = gf.x_30_13;
    LOCSTORE(store, 30, 14, STOREDIM, STOREDIM) = gf.x_30_14;
    LOCSTORE(store, 30, 15, STOREDIM, STOREDIM) = gf.x_30_15;
    LOCSTORE(store, 30, 16, STOREDIM, STOREDIM) = gf.x_30_16;
    LOCSTORE(store, 30, 17, STOREDIM, STOREDIM) = gf.x_30_17;
    LOCSTORE(store, 30, 18, STOREDIM, STOREDIM) = gf.x_30_18;
    LOCSTORE(store, 30, 19, STOREDIM, STOREDIM) = gf.x_30_19;
    LOCSTORE(store, 31, 10, STOREDIM, STOREDIM) = gf.x_31_10;
    LOCSTORE(store, 31, 11, STOREDIM, STOREDIM) = gf.x_31_11;
    LOCSTORE(store, 31, 12, STOREDIM, STOREDIM) = gf.x_31_12;
    LOCSTORE(store, 31, 13, STOREDIM, STOREDIM) = gf.x_31_13;
    LOCSTORE(store, 31, 14, STOREDIM, STOREDIM) = gf.x_31_14;
    LOCSTORE(store, 31, 15, STOREDIM, STOREDIM) = gf.x_31_15;
    LOCSTORE(store, 31, 16, STOREDIM, STOREDIM) = gf.x_31_16;
    LOCSTORE(store, 31, 17, STOREDIM, STOREDIM) = gf.x_31_17;
    LOCSTORE(store, 31, 18, STOREDIM, STOREDIM) = gf.x_31_18;
    LOCSTORE(store, 31, 19, STOREDIM, STOREDIM) = gf.x_31_19;
    LOCSTORE(store, 32, 10, STOREDIM, STOREDIM) = gf.x_32_10;
    LOCSTORE(store, 32, 11, STOREDIM, STOREDIM) = gf.x_32_11;
    LOCSTORE(store, 32, 12, STOREDIM, STOREDIM) = gf.x_32_12;
    LOCSTORE(store, 32, 13, STOREDIM, STOREDIM) = gf.x_32_13;
    LOCSTORE(store, 32, 14, STOREDIM, STOREDIM) = gf.x_32_14;
    LOCSTORE(store, 32, 15, STOREDIM, STOREDIM) = gf.x_32_15;
    LOCSTORE(store, 32, 16, STOREDIM, STOREDIM) = gf.x_32_16;
    LOCSTORE(store, 32, 17, STOREDIM, STOREDIM) = gf.x_32_17;
    LOCSTORE(store, 32, 18, STOREDIM, STOREDIM) = gf.x_32_18;
    LOCSTORE(store, 32, 19, STOREDIM, STOREDIM) = gf.x_32_19;
    LOCSTORE(store, 33, 10, STOREDIM, STOREDIM) = gf.x_33_10;
    LOCSTORE(store, 33, 11, STOREDIM, STOREDIM) = gf.x_33_11;
    LOCSTORE(store, 33, 12, STOREDIM, STOREDIM) = gf.x_33_12;
    LOCSTORE(store, 33, 13, STOREDIM, STOREDIM) = gf.x_33_13;
    LOCSTORE(store, 33, 14, STOREDIM, STOREDIM) = gf.x_33_14;
    LOCSTORE(store, 33, 15, STOREDIM, STOREDIM) = gf.x_33_15;
    LOCSTORE(store, 33, 16, STOREDIM, STOREDIM) = gf.x_33_16;
    LOCSTORE(store, 33, 17, STOREDIM, STOREDIM) = gf.x_33_17;
    LOCSTORE(store, 33, 18, STOREDIM, STOREDIM) = gf.x_33_18;
    LOCSTORE(store, 33, 19, STOREDIM, STOREDIM) = gf.x_33_19;
    LOCSTORE(store, 34, 10, STOREDIM, STOREDIM) = gf.x_34_10;
    LOCSTORE(store, 34, 11, STOREDIM, STOREDIM) = gf.x_34_11;
    LOCSTORE(store, 34, 12, STOREDIM, STOREDIM) = gf.x_34_12;
    LOCSTORE(store, 34, 13, STOREDIM, STOREDIM) = gf.x_34_13;
    LOCSTORE(store, 34, 14, STOREDIM, STOREDIM) = gf.x_34_14;
    LOCSTORE(store, 34, 15, STOREDIM, STOREDIM) = gf.x_34_15;
    LOCSTORE(store, 34, 16, STOREDIM, STOREDIM) = gf.x_34_16;
    LOCSTORE(store, 34, 17, STOREDIM, STOREDIM) = gf.x_34_17;
    LOCSTORE(store, 34, 18, STOREDIM, STOREDIM) = gf.x_34_18;
    LOCSTORE(store, 34, 19, STOREDIM, STOREDIM) = gf.x_34_19;
    
FGint_0 fg(PAx, PAy, PAz, PBx, PBy, PBz, PCx, PCy, PCz, TwoZetaInv, store, YVerticalTemp); 

    LOCSTORE(store, 10, 20, STOREDIM, STOREDIM) = fg.x_10_20;
    LOCSTORE(store, 11, 20, STOREDIM, STOREDIM) = fg.x_11_20;
    LOCSTORE(store, 12, 20, STOREDIM, STOREDIM) = fg.x_12_20;
    LOCSTORE(store, 13, 20, STOREDIM, STOREDIM) = fg.x_13_20;
    LOCSTORE(store, 14, 20, STOREDIM, STOREDIM) = fg.x_14_20;
    LOCSTORE(store, 15, 20, STOREDIM, STOREDIM) = fg.x_15_20;
    LOCSTORE(store, 16, 20, STOREDIM, STOREDIM) = fg.x_16_20;
    LOCSTORE(store, 17, 20, STOREDIM, STOREDIM) = fg.x_17_20;
    LOCSTORE(store, 18, 20, STOREDIM, STOREDIM) = fg.x_18_20;
    LOCSTORE(store, 19, 20, STOREDIM, STOREDIM) = fg.x_19_20;
    LOCSTORE(store, 10, 21, STOREDIM, STOREDIM) = fg.x_10_21;
    LOCSTORE(store, 11, 21, STOREDIM, STOREDIM) = fg.x_11_21;
    LOCSTORE(store, 12, 21, STOREDIM, STOREDIM) = fg.x_12_21;
    LOCSTORE(store, 13, 21, STOREDIM, STOREDIM) = fg.x_13_21;
    LOCSTORE(store, 14, 21, STOREDIM, STOREDIM) = fg.x_14_21;
    LOCSTORE(store, 15, 21, STOREDIM, STOREDIM) = fg.x_15_21;
    LOCSTORE(store, 16, 21, STOREDIM, STOREDIM) = fg.x_16_21;
    LOCSTORE(store, 17, 21, STOREDIM, STOREDIM) = fg.x_17_21;
    LOCSTORE(store, 18, 21, STOREDIM, STOREDIM) = fg.x_18_21;
    LOCSTORE(store, 19, 21, STOREDIM, STOREDIM) = fg.x_19_21;
    LOCSTORE(store, 10, 22, STOREDIM, STOREDIM) = fg.x_10_22;
    LOCSTORE(store, 11, 22, STOREDIM, STOREDIM) = fg.x_11_22;
    LOCSTORE(store, 12, 22, STOREDIM, STOREDIM) = fg.x_12_22;
    LOCSTORE(store, 13, 22, STOREDIM, STOREDIM) = fg.x_13_22;
    LOCSTORE(store, 14, 22, STOREDIM, STOREDIM) = fg.x_14_22;
    LOCSTORE(store, 15, 22, STOREDIM, STOREDIM) = fg.x_15_22;
    LOCSTORE(store, 16, 22, STOREDIM, STOREDIM) = fg.x_16_22;
    LOCSTORE(store, 17, 22, STOREDIM, STOREDIM) = fg.x_17_22;
    LOCSTORE(store, 18, 22, STOREDIM, STOREDIM) = fg.x_18_22;
    LOCSTORE(store, 19, 22, STOREDIM, STOREDIM) = fg.x_19_22;
    LOCSTORE(store, 10, 23, STOREDIM, STOREDIM) = fg.x_10_23;
    LOCSTORE(store, 11, 23, STOREDIM, STOREDIM) = fg.x_11_23;
    LOCSTORE(store, 12, 23, STOREDIM, STOREDIM) = fg.x_12_23;
    LOCSTORE(store, 13, 23, STOREDIM, STOREDIM) = fg.x_13_23;
    LOCSTORE(store, 14, 23, STOREDIM, STOREDIM) = fg.x_14_23;
    LOCSTORE(store, 15, 23, STOREDIM, STOREDIM) = fg.x_15_23;
    LOCSTORE(store, 16, 23, STOREDIM, STOREDIM) = fg.x_16_23;
    LOCSTORE(store, 17, 23, STOREDIM, STOREDIM) = fg.x_17_23;
    LOCSTORE(store, 18, 23, STOREDIM, STOREDIM) = fg.x_18_23;
    LOCSTORE(store, 19, 23, STOREDIM, STOREDIM) = fg.x_19_23;
    LOCSTORE(store, 10, 24, STOREDIM, STOREDIM) = fg.x_10_24;
    LOCSTORE(store, 11, 24, STOREDIM, STOREDIM) = fg.x_11_24;
    LOCSTORE(store, 12, 24, STOREDIM, STOREDIM) = fg.x_12_24;
    LOCSTORE(store, 13, 24, STOREDIM, STOREDIM) = fg.x_13_24;
    LOCSTORE(store, 14, 24, STOREDIM, STOREDIM) = fg.x_14_24;
    LOCSTORE(store, 15, 24, STOREDIM, STOREDIM) = fg.x_15_24;
    LOCSTORE(store, 16, 24, STOREDIM, STOREDIM) = fg.x_16_24;
    LOCSTORE(store, 17, 24, STOREDIM, STOREDIM) = fg.x_17_24;
    LOCSTORE(store, 18, 24, STOREDIM, STOREDIM) = fg.x_18_24;
    LOCSTORE(store, 19, 24, STOREDIM, STOREDIM) = fg.x_19_24;
    LOCSTORE(store, 10, 25, STOREDIM, STOREDIM) = fg.x_10_25;
    LOCSTORE(store, 11, 25, STOREDIM, STOREDIM) = fg.x_11_25;
    LOCSTORE(store, 12, 25, STOREDIM, STOREDIM) = fg.x_12_25;
    LOCSTORE(store, 13, 25, STOREDIM, STOREDIM) = fg.x_13_25;
    LOCSTORE(store, 14, 25, STOREDIM, STOREDIM) = fg.x_14_25;
    LOCSTORE(store, 15, 25, STOREDIM, STOREDIM) = fg.x_15_25;
    LOCSTORE(store, 16, 25, STOREDIM, STOREDIM) = fg.x_16_25;
    LOCSTORE(store, 17, 25, STOREDIM, STOREDIM) = fg.x_17_25;
    LOCSTORE(store, 18, 25, STOREDIM, STOREDIM) = fg.x_18_25;
    LOCSTORE(store, 19, 25, STOREDIM, STOREDIM) = fg.x_19_25;
    LOCSTORE(store, 10, 26, STOREDIM, STOREDIM) = fg.x_10_26;
    LOCSTORE(store, 11, 26, STOREDIM, STOREDIM) = fg.x_11_26;
    LOCSTORE(store, 12, 26, STOREDIM, STOREDIM) = fg.x_12_26;
    LOCSTORE(store, 13, 26, STOREDIM, STOREDIM) = fg.x_13_26;
    LOCSTORE(store, 14, 26, STOREDIM, STOREDIM) = fg.x_14_26;
    LOCSTORE(store, 15, 26, STOREDIM, STOREDIM) = fg.x_15_26;
    LOCSTORE(store, 16, 26, STOREDIM, STOREDIM) = fg.x_16_26;
    LOCSTORE(store, 17, 26, STOREDIM, STOREDIM) = fg.x_17_26;
    LOCSTORE(store, 18, 26, STOREDIM, STOREDIM) = fg.x_18_26;
    LOCSTORE(store, 19, 26, STOREDIM, STOREDIM) = fg.x_19_26;
    LOCSTORE(store, 10, 27, STOREDIM, STOREDIM) = fg.x_10_27;
    LOCSTORE(store, 11, 27, STOREDIM, STOREDIM) = fg.x_11_27;
    LOCSTORE(store, 12, 27, STOREDIM, STOREDIM) = fg.x_12_27;
    LOCSTORE(store, 13, 27, STOREDIM, STOREDIM) = fg.x_13_27;
    LOCSTORE(store, 14, 27, STOREDIM, STOREDIM) = fg.x_14_27;
    LOCSTORE(store, 15, 27, STOREDIM, STOREDIM) = fg.x_15_27;
    LOCSTORE(store, 16, 27, STOREDIM, STOREDIM) = fg.x_16_27;
    LOCSTORE(store, 17, 27, STOREDIM, STOREDIM) = fg.x_17_27;
    LOCSTORE(store, 18, 27, STOREDIM, STOREDIM) = fg.x_18_27;
    LOCSTORE(store, 19, 27, STOREDIM, STOREDIM) = fg.x_19_27;
    LOCSTORE(store, 10, 28, STOREDIM, STOREDIM) = fg.x_10_28;
    LOCSTORE(store, 11, 28, STOREDIM, STOREDIM) = fg.x_11_28;
    LOCSTORE(store, 12, 28, STOREDIM, STOREDIM) = fg.x_12_28;
    LOCSTORE(store, 13, 28, STOREDIM, STOREDIM) = fg.x_13_28;
    LOCSTORE(store, 14, 28, STOREDIM, STOREDIM) = fg.x_14_28;
    LOCSTORE(store, 15, 28, STOREDIM, STOREDIM) = fg.x_15_28;
    LOCSTORE(store, 16, 28, STOREDIM, STOREDIM) = fg.x_16_28;
    LOCSTORE(store, 17, 28, STOREDIM, STOREDIM) = fg.x_17_28;
    LOCSTORE(store, 18, 28, STOREDIM, STOREDIM) = fg.x_18_28;
    LOCSTORE(store, 19, 28, STOREDIM, STOREDIM) = fg.x_19_28;
    LOCSTORE(store, 10, 29, STOREDIM, STOREDIM) = fg.x_10_29;
    LOCSTORE(store, 11, 29, STOREDIM, STOREDIM) = fg.x_11_29;
    LOCSTORE(store, 12, 29, STOREDIM, STOREDIM) = fg.x_12_29;
    LOCSTORE(store, 13, 29, STOREDIM, STOREDIM) = fg.x_13_29;
    LOCSTORE(store, 14, 29, STOREDIM, STOREDIM) = fg.x_14_29;
    LOCSTORE(store, 15, 29, STOREDIM, STOREDIM) = fg.x_15_29;
    LOCSTORE(store, 16, 29, STOREDIM, STOREDIM) = fg.x_16_29;
    LOCSTORE(store, 17, 29, STOREDIM, STOREDIM) = fg.x_17_29;
    LOCSTORE(store, 18, 29, STOREDIM, STOREDIM) = fg.x_18_29;
    LOCSTORE(store, 19, 29, STOREDIM, STOREDIM) = fg.x_19_29;
    LOCSTORE(store, 10, 30, STOREDIM, STOREDIM) = fg.x_10_30;
    LOCSTORE(store, 11, 30, STOREDIM, STOREDIM) = fg.x_11_30;
    LOCSTORE(store, 12, 30, STOREDIM, STOREDIM) = fg.x_12_30;
    LOCSTORE(store, 13, 30, STOREDIM, STOREDIM) = fg.x_13_30;
    LOCSTORE(store, 14, 30, STOREDIM, STOREDIM) = fg.x_14_30;
    LOCSTORE(store, 15, 30, STOREDIM, STOREDIM) = fg.x_15_30;
    LOCSTORE(store, 16, 30, STOREDIM, STOREDIM) = fg.x_16_30;
    LOCSTORE(store, 17, 30, STOREDIM, STOREDIM) = fg.x_17_30;
    LOCSTORE(store, 18, 30, STOREDIM, STOREDIM) = fg.x_18_30;
    LOCSTORE(store, 19, 30, STOREDIM, STOREDIM) = fg.x_19_30;
    LOCSTORE(store, 10, 31, STOREDIM, STOREDIM) = fg.x_10_31;
    LOCSTORE(store, 11, 31, STOREDIM, STOREDIM) = fg.x_11_31;
    LOCSTORE(store, 12, 31, STOREDIM, STOREDIM) = fg.x_12_31;
    LOCSTORE(store, 13, 31, STOREDIM, STOREDIM) = fg.x_13_31;
    LOCSTORE(store, 14, 31, STOREDIM, STOREDIM) = fg.x_14_31;
    LOCSTORE(store, 15, 31, STOREDIM, STOREDIM) = fg.x_15_31;
    LOCSTORE(store, 16, 31, STOREDIM, STOREDIM) = fg.x_16_31;
    LOCSTORE(store, 17, 31, STOREDIM, STOREDIM) = fg.x_17_31;
    LOCSTORE(store, 18, 31, STOREDIM, STOREDIM) = fg.x_18_31;
    LOCSTORE(store, 19, 31, STOREDIM, STOREDIM) = fg.x_19_31;
    LOCSTORE(store, 10, 32, STOREDIM, STOREDIM) = fg.x_10_32;
    LOCSTORE(store, 11, 32, STOREDIM, STOREDIM) = fg.x_11_32;
    LOCSTORE(store, 12, 32, STOREDIM, STOREDIM) = fg.x_12_32;
    LOCSTORE(store, 13, 32, STOREDIM, STOREDIM) = fg.x_13_32;
    LOCSTORE(store, 14, 32, STOREDIM, STOREDIM) = fg.x_14_32;
    LOCSTORE(store, 15, 32, STOREDIM, STOREDIM) = fg.x_15_32;
    LOCSTORE(store, 16, 32, STOREDIM, STOREDIM) = fg.x_16_32;
    LOCSTORE(store, 17, 32, STOREDIM, STOREDIM) = fg.x_17_32;
    LOCSTORE(store, 18, 32, STOREDIM, STOREDIM) = fg.x_18_32;
    LOCSTORE(store, 19, 32, STOREDIM, STOREDIM) = fg.x_19_32;
    LOCSTORE(store, 10, 33, STOREDIM, STOREDIM) = fg.x_10_33;
    LOCSTORE(store, 11, 33, STOREDIM, STOREDIM) = fg.x_11_33;
    LOCSTORE(store, 12, 33, STOREDIM, STOREDIM) = fg.x_12_33;
    LOCSTORE(store, 13, 33, STOREDIM, STOREDIM) = fg.x_13_33;
    LOCSTORE(store, 14, 33, STOREDIM, STOREDIM) = fg.x_14_33;
    LOCSTORE(store, 15, 33, STOREDIM, STOREDIM) = fg.x_15_33;
    LOCSTORE(store, 16, 33, STOREDIM, STOREDIM) = fg.x_16_33;
    LOCSTORE(store, 17, 33, STOREDIM, STOREDIM) = fg.x_17_33;
    LOCSTORE(store, 18, 33, STOREDIM, STOREDIM) = fg.x_18_33;
    LOCSTORE(store, 19, 33, STOREDIM, STOREDIM) = fg.x_19_33;
    LOCSTORE(store, 10, 34, STOREDIM, STOREDIM) = fg.x_10_34;
    LOCSTORE(store, 11, 34, STOREDIM, STOREDIM) = fg.x_11_34;
    LOCSTORE(store, 12, 34, STOREDIM, STOREDIM) = fg.x_12_34;
    LOCSTORE(store, 13, 34, STOREDIM, STOREDIM) = fg.x_13_34;
    LOCSTORE(store, 14, 34, STOREDIM, STOREDIM) = fg.x_14_34;
    LOCSTORE(store, 15, 34, STOREDIM, STOREDIM) = fg.x_15_34;
    LOCSTORE(store, 16, 34, STOREDIM, STOREDIM) = fg.x_16_34;
    LOCSTORE(store, 17, 34, STOREDIM, STOREDIM) = fg.x_17_34;
    LOCSTORE(store, 18, 34, STOREDIM, STOREDIM) = fg.x_18_34;
    LOCSTORE(store, 19, 34, STOREDIM, STOREDIM) = fg.x_19_34;

#ifdef DEBUG_OEI 
    printf("II %d JJ %d FD store[10,4] = %f \n", II, JJ, LOCSTORE(store, 10, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[11,4] = %f \n", II, JJ, LOCSTORE(store, 11, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[12,4] = %f \n", II, JJ, LOCSTORE(store, 12, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[13,4] = %f \n", II, JJ, LOCSTORE(store, 13, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[14,4] = %f \n", II, JJ, LOCSTORE(store, 14, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[15,4] = %f \n", II, JJ, LOCSTORE(store, 15, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[16,4] = %f \n", II, JJ, LOCSTORE(store, 16, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[17,4] = %f \n", II, JJ, LOCSTORE(store, 17, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[18,4] = %f \n", II, JJ, LOCSTORE(store, 18, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[19,4] = %f \n", II, JJ, LOCSTORE(store, 19, 4, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[10,5] = %f \n", II, JJ, LOCSTORE(store, 10, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[11,5] = %f \n", II, JJ, LOCSTORE(store, 11, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[12,5] = %f \n", II, JJ, LOCSTORE(store, 12, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[13,5] = %f \n", II, JJ, LOCSTORE(store, 13, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[14,5] = %f \n", II, JJ, LOCSTORE(store, 14, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[15,5] = %f \n", II, JJ, LOCSTORE(store, 15, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[16,5] = %f \n", II, JJ, LOCSTORE(store, 16, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[17,5] = %f \n", II, JJ, LOCSTORE(store, 17, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[18,5] = %f \n", II, JJ, LOCSTORE(store, 18, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[19,5] = %f \n", II, JJ, LOCSTORE(store, 19, 5, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[10,6] = %f \n", II, JJ, LOCSTORE(store, 10, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[11,6] = %f \n", II, JJ, LOCSTORE(store, 11, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[12,6] = %f \n", II, JJ, LOCSTORE(store, 12, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[13,6] = %f \n", II, JJ, LOCSTORE(store, 13, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[14,6] = %f \n", II, JJ, LOCSTORE(store, 14, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[15,6] = %f \n", II, JJ, LOCSTORE(store, 15, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[16,6] = %f \n", II, JJ, LOCSTORE(store, 16, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[17,6] = %f \n", II, JJ, LOCSTORE(store, 17, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[18,6] = %f \n", II, JJ, LOCSTORE(store, 18, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[19,6] = %f \n", II, JJ, LOCSTORE(store, 19, 6, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[10,7] = %f \n", II, JJ, LOCSTORE(store, 10, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[11,7] = %f \n", II, JJ, LOCSTORE(store, 11, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[12,7] = %f \n", II, JJ, LOCSTORE(store, 12, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[13,7] = %f \n", II, JJ, LOCSTORE(store, 13, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[14,7] = %f \n", II, JJ, LOCSTORE(store, 14, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[15,7] = %f \n", II, JJ, LOCSTORE(store, 15, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[16,7] = %f \n", II, JJ, LOCSTORE(store, 16, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[17,7] = %f \n", II, JJ, LOCSTORE(store, 17, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[18,7] = %f \n", II, JJ, LOCSTORE(store, 18, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[19,7] = %f \n", II, JJ, LOCSTORE(store, 19, 7, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[10,8] = %f \n", II, JJ, LOCSTORE(store, 10, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[11,8] = %f \n", II, JJ, LOCSTORE(store, 11, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[12,8] = %f \n", II, JJ, LOCSTORE(store, 12, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[13,8] = %f \n", II, JJ, LOCSTORE(store, 13, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[14,8] = %f \n", II, JJ, LOCSTORE(store, 14, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[15,8] = %f \n", II, JJ, LOCSTORE(store, 15, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[16,8] = %f \n", II, JJ, LOCSTORE(store, 16, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[17,8] = %f \n", II, JJ, LOCSTORE(store, 17, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[18,8] = %f \n", II, JJ, LOCSTORE(store, 18, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[19,8] = %f \n", II, JJ, LOCSTORE(store, 19, 8, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[10,9] = %f \n", II, JJ, LOCSTORE(store, 10, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[11,9] = %f \n", II, JJ, LOCSTORE(store, 11, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[12,9] = %f \n", II, JJ, LOCSTORE(store, 12, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[13,9] = %f \n", II, JJ, LOCSTORE(store, 13, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[14,9] = %f \n", II, JJ, LOCSTORE(store, 14, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[15,9] = %f \n", II, JJ, LOCSTORE(store, 15, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[16,9] = %f \n", II, JJ, LOCSTORE(store, 16, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[17,9] = %f \n", II, JJ, LOCSTORE(store, 17, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[18,9] = %f \n", II, JJ, LOCSTORE(store, 18, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FD store[19,9] = %f \n", II, JJ, LOCSTORE(store, 19, 9, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[4,10] = %f \n", II, JJ, LOCSTORE(store, 4, 10, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[4,11] = %f \n", II, JJ, LOCSTORE(store, 4, 11, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[4,12] = %f \n", II, JJ, LOCSTORE(store, 4, 12, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[4,13] = %f \n", II, JJ, LOCSTORE(store, 4, 13, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[4,14] = %f \n", II, JJ, LOCSTORE(store, 4, 14, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[4,15] = %f \n", II, JJ, LOCSTORE(store, 4, 15, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[4,16] = %f \n", II, JJ, LOCSTORE(store, 4, 16, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[4,17] = %f \n", II, JJ, LOCSTORE(store, 4, 17, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[4,18] = %f \n", II, JJ, LOCSTORE(store, 4, 18, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[4,19] = %f \n", II, JJ, LOCSTORE(store, 4, 19, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[5,10] = %f \n", II, JJ, LOCSTORE(store, 5, 10, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[5,11] = %f \n", II, JJ, LOCSTORE(store, 5, 11, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[5,12] = %f \n", II, JJ, LOCSTORE(store, 5, 12, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[5,13] = %f \n", II, JJ, LOCSTORE(store, 5, 13, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[5,14] = %f \n", II, JJ, LOCSTORE(store, 5, 14, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[5,15] = %f \n", II, JJ, LOCSTORE(store, 5, 15, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[5,16] = %f \n", II, JJ, LOCSTORE(store, 5, 16, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[5,17] = %f \n", II, JJ, LOCSTORE(store, 5, 17, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[5,18] = %f \n", II, JJ, LOCSTORE(store, 5, 18, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[5,19] = %f \n", II, JJ, LOCSTORE(store, 5, 19, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[6,10] = %f \n", II, JJ, LOCSTORE(store, 6, 10, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[6,11] = %f \n", II, JJ, LOCSTORE(store, 6, 11, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[6,12] = %f \n", II, JJ, LOCSTORE(store, 6, 12, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[6,13] = %f \n", II, JJ, LOCSTORE(store, 6, 13, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[6,14] = %f \n", II, JJ, LOCSTORE(store, 6, 14, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[6,15] = %f \n", II, JJ, LOCSTORE(store, 6, 15, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[6,16] = %f \n", II, JJ, LOCSTORE(store, 6, 16, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[6,17] = %f \n", II, JJ, LOCSTORE(store, 6, 17, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[6,18] = %f \n", II, JJ, LOCSTORE(store, 6, 18, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[6,19] = %f \n", II, JJ, LOCSTORE(store, 6, 19, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[7,10] = %f \n", II, JJ, LOCSTORE(store, 7, 10, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[7,11] = %f \n", II, JJ, LOCSTORE(store, 7, 11, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[7,12] = %f \n", II, JJ, LOCSTORE(store, 7, 12, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[7,13] = %f \n", II, JJ, LOCSTORE(store, 7, 13, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[7,14] = %f \n", II, JJ, LOCSTORE(store, 7, 14, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[7,15] = %f \n", II, JJ, LOCSTORE(store, 7, 15, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[7,16] = %f \n", II, JJ, LOCSTORE(store, 7, 16, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[7,17] = %f \n", II, JJ, LOCSTORE(store, 7, 17, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[7,18] = %f \n", II, JJ, LOCSTORE(store, 7, 18, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[7,19] = %f \n", II, JJ, LOCSTORE(store, 7, 19, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[8,10] = %f \n", II, JJ, LOCSTORE(store, 8, 10, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[8,11] = %f \n", II, JJ, LOCSTORE(store, 8, 11, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[8,12] = %f \n", II, JJ, LOCSTORE(store, 8, 12, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[8,13] = %f \n", II, JJ, LOCSTORE(store, 8, 13, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[8,14] = %f \n", II, JJ, LOCSTORE(store, 8, 14, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[8,15] = %f \n", II, JJ, LOCSTORE(store, 8, 15, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[8,16] = %f \n", II, JJ, LOCSTORE(store, 8, 16, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[8,17] = %f \n", II, JJ, LOCSTORE(store, 8, 17, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[8,18] = %f \n", II, JJ, LOCSTORE(store, 8, 18, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[8,19] = %f \n", II, JJ, LOCSTORE(store, 8, 19, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[9,10] = %f \n", II, JJ, LOCSTORE(store, 9, 10, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[9,11] = %f \n", II, JJ, LOCSTORE(store, 9, 11, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[9,12] = %f \n", II, JJ, LOCSTORE(store, 9, 12, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[9,13] = %f \n", II, JJ, LOCSTORE(store, 9, 13, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[9,14] = %f \n", II, JJ, LOCSTORE(store, 9, 14, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[9,15] = %f \n", II, JJ, LOCSTORE(store, 9, 15, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[9,16] = %f \n", II, JJ, LOCSTORE(store, 9, 16, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[9,17] = %f \n", II, JJ, LOCSTORE(store, 9, 17, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[9,18] = %f \n", II, JJ, LOCSTORE(store, 9, 18, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d DF store[9,19] = %f \n", II, JJ, LOCSTORE(store, 9, 19, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[20,10] = %f \n", II, JJ, LOCSTORE(store, 20, 10, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[20,11] = %f \n", II, JJ, LOCSTORE(store, 20, 11, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[20,12] = %f \n", II, JJ, LOCSTORE(store, 20, 12, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[20,13] = %f \n", II, JJ, LOCSTORE(store, 20, 13, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[20,14] = %f \n", II, JJ, LOCSTORE(store, 20, 14, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[20,15] = %f \n", II, JJ, LOCSTORE(store, 20, 15, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[20,16] = %f \n", II, JJ, LOCSTORE(store, 20, 16, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[20,17] = %f \n", II, JJ, LOCSTORE(store, 20, 17, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[20,18] = %f \n", II, JJ, LOCSTORE(store, 20, 18, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[20,19] = %f \n", II, JJ, LOCSTORE(store, 20, 19, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[21,10] = %f \n", II, JJ, LOCSTORE(store, 21, 10, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[21,11] = %f \n", II, JJ, LOCSTORE(store, 21, 11, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[21,12] = %f \n", II, JJ, LOCSTORE(store, 21, 12, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[21,13] = %f \n", II, JJ, LOCSTORE(store, 21, 13, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[21,14] = %f \n", II, JJ, LOCSTORE(store, 21, 14, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[21,15] = %f \n", II, JJ, LOCSTORE(store, 21, 15, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[21,16] = %f \n", II, JJ, LOCSTORE(store, 21, 16, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[21,17] = %f \n", II, JJ, LOCSTORE(store, 21, 17, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[21,18] = %f \n", II, JJ, LOCSTORE(store, 21, 18, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[21,19] = %f \n", II, JJ, LOCSTORE(store, 21, 19, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[22,10] = %f \n", II, JJ, LOCSTORE(store, 22, 10, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[22,11] = %f \n", II, JJ, LOCSTORE(store, 22, 11, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[22,12] = %f \n", II, JJ, LOCSTORE(store, 22, 12, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[22,13] = %f \n", II, JJ, LOCSTORE(store, 22, 13, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[22,14] = %f \n", II, JJ, LOCSTORE(store, 22, 14, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[22,15] = %f \n", II, JJ, LOCSTORE(store, 22, 15, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[22,16] = %f \n", II, JJ, LOCSTORE(store, 22, 16, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[22,17] = %f \n", II, JJ, LOCSTORE(store, 22, 17, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[22,18] = %f \n", II, JJ, LOCSTORE(store, 22, 18, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[22,19] = %f \n", II, JJ, LOCSTORE(store, 22, 19, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[23,10] = %f \n", II, JJ, LOCSTORE(store, 23, 10, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[23,11] = %f \n", II, JJ, LOCSTORE(store, 23, 11, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[23,12] = %f \n", II, JJ, LOCSTORE(store, 23, 12, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[23,13] = %f \n", II, JJ, LOCSTORE(store, 23, 13, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[23,14] = %f \n", II, JJ, LOCSTORE(store, 23, 14, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[23,15] = %f \n", II, JJ, LOCSTORE(store, 23, 15, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[23,16] = %f \n", II, JJ, LOCSTORE(store, 23, 16, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[23,17] = %f \n", II, JJ, LOCSTORE(store, 23, 17, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[23,18] = %f \n", II, JJ, LOCSTORE(store, 23, 18, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[23,19] = %f \n", II, JJ, LOCSTORE(store, 23, 19, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[24,10] = %f \n", II, JJ, LOCSTORE(store, 24, 10, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[24,11] = %f \n", II, JJ, LOCSTORE(store, 24, 11, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[24,12] = %f \n", II, JJ, LOCSTORE(store, 24, 12, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[24,13] = %f \n", II, JJ, LOCSTORE(store, 24, 13, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[24,14] = %f \n", II, JJ, LOCSTORE(store, 24, 14, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[24,15] = %f \n", II, JJ, LOCSTORE(store, 24, 15, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[24,16] = %f \n", II, JJ, LOCSTORE(store, 24, 16, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[24,17] = %f \n", II, JJ, LOCSTORE(store, 24, 17, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[24,18] = %f \n", II, JJ, LOCSTORE(store, 24, 18, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[24,19] = %f \n", II, JJ, LOCSTORE(store, 24, 19, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[25,10] = %f \n", II, JJ, LOCSTORE(store, 25, 10, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[25,11] = %f \n", II, JJ, LOCSTORE(store, 25, 11, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[25,12] = %f \n", II, JJ, LOCSTORE(store, 25, 12, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[25,13] = %f \n", II, JJ, LOCSTORE(store, 25, 13, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[25,14] = %f \n", II, JJ, LOCSTORE(store, 25, 14, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[25,15] = %f \n", II, JJ, LOCSTORE(store, 25, 15, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[25,16] = %f \n", II, JJ, LOCSTORE(store, 25, 16, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[25,17] = %f \n", II, JJ, LOCSTORE(store, 25, 17, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[25,18] = %f \n", II, JJ, LOCSTORE(store, 25, 18, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[25,19] = %f \n", II, JJ, LOCSTORE(store, 25, 19, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[26,10] = %f \n", II, JJ, LOCSTORE(store, 26, 10, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[26,11] = %f \n", II, JJ, LOCSTORE(store, 26, 11, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[26,12] = %f \n", II, JJ, LOCSTORE(store, 26, 12, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[26,13] = %f \n", II, JJ, LOCSTORE(store, 26, 13, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[26,14] = %f \n", II, JJ, LOCSTORE(store, 26, 14, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[26,15] = %f \n", II, JJ, LOCSTORE(store, 26, 15, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[26,16] = %f \n", II, JJ, LOCSTORE(store, 26, 16, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[26,17] = %f \n", II, JJ, LOCSTORE(store, 26, 17, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[26,18] = %f \n", II, JJ, LOCSTORE(store, 26, 18, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[26,19] = %f \n", II, JJ, LOCSTORE(store, 26, 19, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[27,10] = %f \n", II, JJ, LOCSTORE(store, 27, 10, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[27,11] = %f \n", II, JJ, LOCSTORE(store, 27, 11, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[27,12] = %f \n", II, JJ, LOCSTORE(store, 27, 12, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[27,13] = %f \n", II, JJ, LOCSTORE(store, 27, 13, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[27,14] = %f \n", II, JJ, LOCSTORE(store, 27, 14, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[27,15] = %f \n", II, JJ, LOCSTORE(store, 27, 15, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[27,16] = %f \n", II, JJ, LOCSTORE(store, 27, 16, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[27,17] = %f \n", II, JJ, LOCSTORE(store, 27, 17, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[27,18] = %f \n", II, JJ, LOCSTORE(store, 27, 18, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[27,19] = %f \n", II, JJ, LOCSTORE(store, 27, 19, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[28,10] = %f \n", II, JJ, LOCSTORE(store, 28, 10, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[28,11] = %f \n", II, JJ, LOCSTORE(store, 28, 11, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[28,12] = %f \n", II, JJ, LOCSTORE(store, 28, 12, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[28,13] = %f \n", II, JJ, LOCSTORE(store, 28, 13, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[28,14] = %f \n", II, JJ, LOCSTORE(store, 28, 14, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[28,15] = %f \n", II, JJ, LOCSTORE(store, 28, 15, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[28,16] = %f \n", II, JJ, LOCSTORE(store, 28, 16, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[28,17] = %f \n", II, JJ, LOCSTORE(store, 28, 17, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[28,18] = %f \n", II, JJ, LOCSTORE(store, 28, 18, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[28,19] = %f \n", II, JJ, LOCSTORE(store, 28, 19, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[29,10] = %f \n", II, JJ, LOCSTORE(store, 29, 10, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[29,11] = %f \n", II, JJ, LOCSTORE(store, 29, 11, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[29,12] = %f \n", II, JJ, LOCSTORE(store, 29, 12, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[29,13] = %f \n", II, JJ, LOCSTORE(store, 29, 13, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[29,14] = %f \n", II, JJ, LOCSTORE(store, 29, 14, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[29,15] = %f \n", II, JJ, LOCSTORE(store, 29, 15, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[29,16] = %f \n", II, JJ, LOCSTORE(store, 29, 16, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[29,17] = %f \n", II, JJ, LOCSTORE(store, 29, 17, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[29,18] = %f \n", II, JJ, LOCSTORE(store, 29, 18, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[29,19] = %f \n", II, JJ, LOCSTORE(store, 29, 19, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[30,10] = %f \n", II, JJ, LOCSTORE(store, 30, 10, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[30,11] = %f \n", II, JJ, LOCSTORE(store, 30, 11, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[30,12] = %f \n", II, JJ, LOCSTORE(store, 30, 12, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[30,13] = %f \n", II, JJ, LOCSTORE(store, 30, 13, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[30,14] = %f \n", II, JJ, LOCSTORE(store, 30, 14, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[30,15] = %f \n", II, JJ, LOCSTORE(store, 30, 15, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[30,16] = %f \n", II, JJ, LOCSTORE(store, 30, 16, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[30,17] = %f \n", II, JJ, LOCSTORE(store, 30, 17, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[30,18] = %f \n", II, JJ, LOCSTORE(store, 30, 18, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[30,19] = %f \n", II, JJ, LOCSTORE(store, 30, 19, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[31,10] = %f \n", II, JJ, LOCSTORE(store, 31, 10, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[31,11] = %f \n", II, JJ, LOCSTORE(store, 31, 11, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[31,12] = %f \n", II, JJ, LOCSTORE(store, 31, 12, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[31,13] = %f \n", II, JJ, LOCSTORE(store, 31, 13, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[31,14] = %f \n", II, JJ, LOCSTORE(store, 31, 14, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[31,15] = %f \n", II, JJ, LOCSTORE(store, 31, 15, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[31,16] = %f \n", II, JJ, LOCSTORE(store, 31, 16, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[31,17] = %f \n", II, JJ, LOCSTORE(store, 31, 17, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[31,18] = %f \n", II, JJ, LOCSTORE(store, 31, 18, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[31,19] = %f \n", II, JJ, LOCSTORE(store, 31, 19, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[32,10] = %f \n", II, JJ, LOCSTORE(store, 32, 10, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[32,11] = %f \n", II, JJ, LOCSTORE(store, 32, 11, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[32,12] = %f \n", II, JJ, LOCSTORE(store, 32, 12, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[32,13] = %f \n", II, JJ, LOCSTORE(store, 32, 13, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[32,14] = %f \n", II, JJ, LOCSTORE(store, 32, 14, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[32,15] = %f \n", II, JJ, LOCSTORE(store, 32, 15, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[32,16] = %f \n", II, JJ, LOCSTORE(store, 32, 16, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[32,17] = %f \n", II, JJ, LOCSTORE(store, 32, 17, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[32,18] = %f \n", II, JJ, LOCSTORE(store, 32, 18, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[32,19] = %f \n", II, JJ, LOCSTORE(store, 32, 19, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[33,10] = %f \n", II, JJ, LOCSTORE(store, 33, 10, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[33,11] = %f \n", II, JJ, LOCSTORE(store, 33, 11, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[33,12] = %f \n", II, JJ, LOCSTORE(store, 33, 12, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[33,13] = %f \n", II, JJ, LOCSTORE(store, 33, 13, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[33,14] = %f \n", II, JJ, LOCSTORE(store, 33, 14, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[33,15] = %f \n", II, JJ, LOCSTORE(store, 33, 15, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[33,16] = %f \n", II, JJ, LOCSTORE(store, 33, 16, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[33,17] = %f \n", II, JJ, LOCSTORE(store, 33, 17, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[33,18] = %f \n", II, JJ, LOCSTORE(store, 33, 18, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[33,19] = %f \n", II, JJ, LOCSTORE(store, 33, 19, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[34,10] = %f \n", II, JJ, LOCSTORE(store, 34, 10, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[34,11] = %f \n", II, JJ, LOCSTORE(store, 34, 11, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[34,12] = %f \n", II, JJ, LOCSTORE(store, 34, 12, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[34,13] = %f \n", II, JJ, LOCSTORE(store, 34, 13, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[34,14] = %f \n", II, JJ, LOCSTORE(store, 34, 14, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[34,15] = %f \n", II, JJ, LOCSTORE(store, 34, 15, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[34,16] = %f \n", II, JJ, LOCSTORE(store, 34, 16, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[34,17] = %f \n", II, JJ, LOCSTORE(store, 34, 17, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[34,18] = %f \n", II, JJ, LOCSTORE(store, 34, 18, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d GF store[34,19] = %f \n", II, JJ, LOCSTORE(store, 34, 19, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[10,20] = %f \n", II, JJ, LOCSTORE(store, 10, 20, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[11,20] = %f \n", II, JJ, LOCSTORE(store, 11, 20, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[12,20] = %f \n", II, JJ, LOCSTORE(store, 12, 20, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[13,20] = %f \n", II, JJ, LOCSTORE(store, 13, 20, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[14,20] = %f \n", II, JJ, LOCSTORE(store, 14, 20, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[15,20] = %f \n", II, JJ, LOCSTORE(store, 15, 20, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[16,20] = %f \n", II, JJ, LOCSTORE(store, 16, 20, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[17,20] = %f \n", II, JJ, LOCSTORE(store, 17, 20, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[18,20] = %f \n", II, JJ, LOCSTORE(store, 18, 20, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[19,20] = %f \n", II, JJ, LOCSTORE(store, 19, 20, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[10,21] = %f \n", II, JJ, LOCSTORE(store, 10, 21, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[11,21] = %f \n", II, JJ, LOCSTORE(store, 11, 21, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[12,21] = %f \n", II, JJ, LOCSTORE(store, 12, 21, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[13,21] = %f \n", II, JJ, LOCSTORE(store, 13, 21, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[14,21] = %f \n", II, JJ, LOCSTORE(store, 14, 21, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[15,21] = %f \n", II, JJ, LOCSTORE(store, 15, 21, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[16,21] = %f \n", II, JJ, LOCSTORE(store, 16, 21, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[17,21] = %f \n", II, JJ, LOCSTORE(store, 17, 21, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[18,21] = %f \n", II, JJ, LOCSTORE(store, 18, 21, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[19,21] = %f \n", II, JJ, LOCSTORE(store, 19, 21, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[10,22] = %f \n", II, JJ, LOCSTORE(store, 10, 22, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[11,22] = %f \n", II, JJ, LOCSTORE(store, 11, 22, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[12,22] = %f \n", II, JJ, LOCSTORE(store, 12, 22, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[13,22] = %f \n", II, JJ, LOCSTORE(store, 13, 22, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[14,22] = %f \n", II, JJ, LOCSTORE(store, 14, 22, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[15,22] = %f \n", II, JJ, LOCSTORE(store, 15, 22, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[16,22] = %f \n", II, JJ, LOCSTORE(store, 16, 22, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[17,22] = %f \n", II, JJ, LOCSTORE(store, 17, 22, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[18,22] = %f \n", II, JJ, LOCSTORE(store, 18, 22, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[19,22] = %f \n", II, JJ, LOCSTORE(store, 19, 22, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[10,23] = %f \n", II, JJ, LOCSTORE(store, 10, 23, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[11,23] = %f \n", II, JJ, LOCSTORE(store, 11, 23, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[12,23] = %f \n", II, JJ, LOCSTORE(store, 12, 23, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[13,23] = %f \n", II, JJ, LOCSTORE(store, 13, 23, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[14,23] = %f \n", II, JJ, LOCSTORE(store, 14, 23, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[15,23] = %f \n", II, JJ, LOCSTORE(store, 15, 23, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[16,23] = %f \n", II, JJ, LOCSTORE(store, 16, 23, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[17,23] = %f \n", II, JJ, LOCSTORE(store, 17, 23, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[18,23] = %f \n", II, JJ, LOCSTORE(store, 18, 23, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[19,23] = %f \n", II, JJ, LOCSTORE(store, 19, 23, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[10,24] = %f \n", II, JJ, LOCSTORE(store, 10, 24, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[11,24] = %f \n", II, JJ, LOCSTORE(store, 11, 24, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[12,24] = %f \n", II, JJ, LOCSTORE(store, 12, 24, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[13,24] = %f \n", II, JJ, LOCSTORE(store, 13, 24, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[14,24] = %f \n", II, JJ, LOCSTORE(store, 14, 24, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[15,24] = %f \n", II, JJ, LOCSTORE(store, 15, 24, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[16,24] = %f \n", II, JJ, LOCSTORE(store, 16, 24, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[17,24] = %f \n", II, JJ, LOCSTORE(store, 17, 24, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[18,24] = %f \n", II, JJ, LOCSTORE(store, 18, 24, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[19,24] = %f \n", II, JJ, LOCSTORE(store, 19, 24, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[10,25] = %f \n", II, JJ, LOCSTORE(store, 10, 25, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[11,25] = %f \n", II, JJ, LOCSTORE(store, 11, 25, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[12,25] = %f \n", II, JJ, LOCSTORE(store, 12, 25, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[13,25] = %f \n", II, JJ, LOCSTORE(store, 13, 25, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[14,25] = %f \n", II, JJ, LOCSTORE(store, 14, 25, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[15,25] = %f \n", II, JJ, LOCSTORE(store, 15, 25, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[16,25] = %f \n", II, JJ, LOCSTORE(store, 16, 25, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[17,25] = %f \n", II, JJ, LOCSTORE(store, 17, 25, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[18,25] = %f \n", II, JJ, LOCSTORE(store, 18, 25, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[19,25] = %f \n", II, JJ, LOCSTORE(store, 19, 25, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[10,26] = %f \n", II, JJ, LOCSTORE(store, 10, 26, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[11,26] = %f \n", II, JJ, LOCSTORE(store, 11, 26, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[12,26] = %f \n", II, JJ, LOCSTORE(store, 12, 26, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[13,26] = %f \n", II, JJ, LOCSTORE(store, 13, 26, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[14,26] = %f \n", II, JJ, LOCSTORE(store, 14, 26, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[15,26] = %f \n", II, JJ, LOCSTORE(store, 15, 26, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[16,26] = %f \n", II, JJ, LOCSTORE(store, 16, 26, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[17,26] = %f \n", II, JJ, LOCSTORE(store, 17, 26, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[18,26] = %f \n", II, JJ, LOCSTORE(store, 18, 26, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[19,26] = %f \n", II, JJ, LOCSTORE(store, 19, 26, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[10,27] = %f \n", II, JJ, LOCSTORE(store, 10, 27, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[11,27] = %f \n", II, JJ, LOCSTORE(store, 11, 27, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[12,27] = %f \n", II, JJ, LOCSTORE(store, 12, 27, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[13,27] = %f \n", II, JJ, LOCSTORE(store, 13, 27, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[14,27] = %f \n", II, JJ, LOCSTORE(store, 14, 27, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[15,27] = %f \n", II, JJ, LOCSTORE(store, 15, 27, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[16,27] = %f \n", II, JJ, LOCSTORE(store, 16, 27, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[17,27] = %f \n", II, JJ, LOCSTORE(store, 17, 27, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[18,27] = %f \n", II, JJ, LOCSTORE(store, 18, 27, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[19,27] = %f \n", II, JJ, LOCSTORE(store, 19, 27, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[10,28] = %f \n", II, JJ, LOCSTORE(store, 10, 28, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[11,28] = %f \n", II, JJ, LOCSTORE(store, 11, 28, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[12,28] = %f \n", II, JJ, LOCSTORE(store, 12, 28, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[13,28] = %f \n", II, JJ, LOCSTORE(store, 13, 28, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[14,28] = %f \n", II, JJ, LOCSTORE(store, 14, 28, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[15,28] = %f \n", II, JJ, LOCSTORE(store, 15, 28, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[16,28] = %f \n", II, JJ, LOCSTORE(store, 16, 28, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[17,28] = %f \n", II, JJ, LOCSTORE(store, 17, 28, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[18,28] = %f \n", II, JJ, LOCSTORE(store, 18, 28, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[19,28] = %f \n", II, JJ, LOCSTORE(store, 19, 28, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[10,29] = %f \n", II, JJ, LOCSTORE(store, 10, 29, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[11,29] = %f \n", II, JJ, LOCSTORE(store, 11, 29, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[12,29] = %f \n", II, JJ, LOCSTORE(store, 12, 29, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[13,29] = %f \n", II, JJ, LOCSTORE(store, 13, 29, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[14,29] = %f \n", II, JJ, LOCSTORE(store, 14, 29, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[15,29] = %f \n", II, JJ, LOCSTORE(store, 15, 29, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[16,29] = %f \n", II, JJ, LOCSTORE(store, 16, 29, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[17,29] = %f \n", II, JJ, LOCSTORE(store, 17, 29, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[18,29] = %f \n", II, JJ, LOCSTORE(store, 18, 29, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[19,29] = %f \n", II, JJ, LOCSTORE(store, 19, 29, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[10,30] = %f \n", II, JJ, LOCSTORE(store, 10, 30, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[11,30] = %f \n", II, JJ, LOCSTORE(store, 11, 30, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[12,30] = %f \n", II, JJ, LOCSTORE(store, 12, 30, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[13,30] = %f \n", II, JJ, LOCSTORE(store, 13, 30, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[14,30] = %f \n", II, JJ, LOCSTORE(store, 14, 30, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[15,30] = %f \n", II, JJ, LOCSTORE(store, 15, 30, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[16,30] = %f \n", II, JJ, LOCSTORE(store, 16, 30, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[17,30] = %f \n", II, JJ, LOCSTORE(store, 17, 30, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[18,30] = %f \n", II, JJ, LOCSTORE(store, 18, 30, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[19,30] = %f \n", II, JJ, LOCSTORE(store, 19, 30, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[10,31] = %f \n", II, JJ, LOCSTORE(store, 10, 31, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[11,31] = %f \n", II, JJ, LOCSTORE(store, 11, 31, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[12,31] = %f \n", II, JJ, LOCSTORE(store, 12, 31, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[13,31] = %f \n", II, JJ, LOCSTORE(store, 13, 31, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[14,31] = %f \n", II, JJ, LOCSTORE(store, 14, 31, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[15,31] = %f \n", II, JJ, LOCSTORE(store, 15, 31, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[16,31] = %f \n", II, JJ, LOCSTORE(store, 16, 31, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[17,31] = %f \n", II, JJ, LOCSTORE(store, 17, 31, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[18,31] = %f \n", II, JJ, LOCSTORE(store, 18, 31, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[19,31] = %f \n", II, JJ, LOCSTORE(store, 19, 31, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[10,32] = %f \n", II, JJ, LOCSTORE(store, 10, 32, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[11,32] = %f \n", II, JJ, LOCSTORE(store, 11, 32, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[12,32] = %f \n", II, JJ, LOCSTORE(store, 12, 32, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[13,32] = %f \n", II, JJ, LOCSTORE(store, 13, 32, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[14,32] = %f \n", II, JJ, LOCSTORE(store, 14, 32, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[15,32] = %f \n", II, JJ, LOCSTORE(store, 15, 32, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[16,32] = %f \n", II, JJ, LOCSTORE(store, 16, 32, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[17,32] = %f \n", II, JJ, LOCSTORE(store, 17, 32, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[18,32] = %f \n", II, JJ, LOCSTORE(store, 18, 32, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[19,32] = %f \n", II, JJ, LOCSTORE(store, 19, 32, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[10,33] = %f \n", II, JJ, LOCSTORE(store, 10, 33, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[11,33] = %f \n", II, JJ, LOCSTORE(store, 11, 33, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[12,33] = %f \n", II, JJ, LOCSTORE(store, 12, 33, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[13,33] = %f \n", II, JJ, LOCSTORE(store, 13, 33, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[14,33] = %f \n", II, JJ, LOCSTORE(store, 14, 33, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[15,33] = %f \n", II, JJ, LOCSTORE(store, 15, 33, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[16,33] = %f \n", II, JJ, LOCSTORE(store, 16, 33, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[17,33] = %f \n", II, JJ, LOCSTORE(store, 17, 33, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[18,33] = %f \n", II, JJ, LOCSTORE(store, 18, 33, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[19,33] = %f \n", II, JJ, LOCSTORE(store, 19, 33, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[10,34] = %f \n", II, JJ, LOCSTORE(store, 10, 34, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[11,34] = %f \n", II, JJ, LOCSTORE(store, 11, 34, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[12,34] = %f \n", II, JJ, LOCSTORE(store, 12, 34, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[13,34] = %f \n", II, JJ, LOCSTORE(store, 13, 34, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[14,34] = %f \n", II, JJ, LOCSTORE(store, 14, 34, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[15,34] = %f \n", II, JJ, LOCSTORE(store, 15, 34, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[16,34] = %f \n", II, JJ, LOCSTORE(store, 16, 34, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[17,34] = %f \n", II, JJ, LOCSTORE(store, 17, 34, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[18,34] = %f \n", II, JJ, LOCSTORE(store, 18, 34, STOREDIM, STOREDIM)); 
    printf("II %d JJ %d FG store[19,34] = %f \n", II, JJ, LOCSTORE(store, 19, 34, STOREDIM, STOREDIM)); 
#endif 

  } 

 } 
