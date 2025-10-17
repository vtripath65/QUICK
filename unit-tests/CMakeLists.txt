find_package(PFUNIT REQUIRED)
enable_testing()

set (test_srcs test_esp_nuc.pf test_mks_surf.pf)
add_pfunit_ctest (my_tests
	TEST_SOURCES ${test_srcs}
        LINK_LIBRARIES libquick
        )

#target_link_libraries(my_tests libquick)

install(TARGETS my_tests DESTINATION ${BINDIR})
