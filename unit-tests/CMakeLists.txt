find_package(PFUNIT REQUIRED)
enable_testing()

set (test_srcs test_trial.pf)
add_pfunit_ctest (my_tests
	TEST_SOURCES ${test_srcs}
        )
