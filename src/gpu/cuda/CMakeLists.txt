set(QUICK_CUDA_SOURCE gpu_utils.cu gpu.cu gpu_type.cu gpu_get2e.cu ../gpu_oei.cu ../gpu_oeprop.cu ../gpu_lri.cu ../xc_redistribute.cpp gpu_get2e_grad_ffff.cu)
     
#sadly FindCUDA doesn't support OBJECT libraries, so we have to use a static cuda_add_library
cuda_add_library(quick_cuda_kernels STATIC ${QUICK_CUDA_SOURCE} OPTIONS ${CUDA_DEVICE_CODE_FLAGS} -DGPU -D${QUICK_GPU_PLATFORM}) 
target_include_directories(quick_cuda_kernels PUBLIC ../iclass)
target_link_libraries(quick_cuda_kernels xc_gpu xc_cuda)

if(MPI)
	cuda_add_library(quick_cuda_kernels_mpi STATIC ${QUICK_CUDA_SOURCE}
		OPTIONS ${CUDA_DEVICE_CODE_FLAGS} -DMPIV -DMPIV_GPU -D${QUICK_GPU_PLATFORM}_MPIV) 
	target_compile_definitions(quick_cuda_kernels_mpi PRIVATE MPIV_GPU ${QUICK_GPU_PLATFORM}_MPIV)
	set_property(TARGET quick_cuda_kernels_mpi PROPERTY POSITION_INDEPENDENT_CODE TRUE)
        target_include_directories(quick_cuda_kernels_mpi PUBLIC ../iclass)
	target_link_libraries(quick_cuda_kernels_mpi xc_gpu xc_cuda)

	# the generator expressions in our MPI_CXX variable don't seem to work with CUDA files, so
	# we have to link it directly
	target_link_libraries(quick_cuda_kernels_mpi xc_gpu xc_cuda MPI::MPI_CXX)
endif()

# CUBLAS fortran thunking
#------------------------------------------------------------------------------------------

set(CUBLAS_FORTRAN_SOURCE cublas/fortran_thunking.c)

add_library(cublas_fortran_obj OBJECT ${CUBLAS_FORTRAN_SOURCE})
set_property(TARGET cublas_fortran_obj PROPERTY COMPILE_OPTIONS ${OPT_CFLAGS})
set_property(TARGET cublas_fortran_obj PROPERTY COMPILE_DEFINITIONS CUBLAS_USE_THUNKING)
set_property(TARGET cublas_fortran_obj PROPERTY POSITION_INDEPENDENT_CODE TRUE)

target_include_directories(cublas_fortran_obj PUBLIC ${CUDA_INCLUDE_DIRS})

# cusolver
#------------------------------------------------------------------------------------------

set(CUSOLVER_SOURCE cusolver/quick_cusolver.c)

add_library(cusolver_obj OBJECT ${CUSOLVER_SOURCE})
set_property(TARGET cusolver_obj PROPERTY COMPILE_OPTIONS ${OPT_CFLAGS})
set_property(TARGET cusolver_obj PROPERTY POSITION_INDEPENDENT_CODE TRUE)

target_include_directories(cusolver_obj PUBLIC ${CUDA_INCLUDE_DIRS})
