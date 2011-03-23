project(FenrirMathLib)

set(SRC
	type_vec2.cpp
	type_vec3.cpp
	type_vec4.cpp
)

add_library(${PROJECT_NAME} STATIC ${SRC})


install(TARGETS ${PROJECT_NAME}
	RUNTIME DESTINATION bin
	LIBRARY DESTINATION lib
	ARCHIVE DESTINATION lib/static)
