project(FenrirMathLibTest)

set(SRC
	test.cpp
)

add_executable(${PROJECT_NAME} ${SRC})


install(TARGETS ${PROJECT_NAME}
	RUNTIME DESTINATION ${CMAKE_BUILD_DIR}/bin COMPONENT bin
	LIBRARY DESTINATION ${CMAKE_BUILD_DIR}/lib
	ARCHIVE DESTINATION ${CMAKE_BUILD_DIR}/lib/static)