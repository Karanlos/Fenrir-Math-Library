project(FenrirMathLib)

set(SRC
	vec2.cpp
	vec3.cpp
	vec4.cpp
)

add_library(${PROJECT_NAME} STATIC ${SRC})


install(TARGETS ${PROJECT_NAME}
	RUNTIME DESTINATION bin
	LIBRARY DESTINATION lib
	ARCHIVE DESTINATION lib/static)
