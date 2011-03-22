project(FenrirMathLib)

set(SRC
	Vector3Df.cpp
	Vector2Df.cpp
)

add_library(${PROJECT_NAME} STATIC ${SRC})


install(TARGETS ${PROJECT_NAME}
	RUNTIME DESTINATION bin
	LIBRARY DESTINATION lib
	ARCHIVE DESTINATION lib/static)
