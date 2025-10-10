#CMake config file for MIRP

option(MIRP "Build ${PROJECT_NAME} with MIRP for Boys function." FALSE)

if(MIRP)
	find_package(MIRP)
endif()

