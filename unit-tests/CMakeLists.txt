find_package(PFUNIT REQUIRED)
enable_testing()

include(ConfigModuleDirs)

set (test_srcs test_trial.pf test_module_trial.pf test_esp_nuc.pf)
add_pfunit_ctest (my_tests
	TEST_SOURCES ${test_srcs}
        LINK_LIBRARIES libquick
        )

install(TARGETS my_tests DESTINATION ${BINDIR})
