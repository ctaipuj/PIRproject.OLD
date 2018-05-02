cmake_minimum_required(VERSION 2.8)

project(cv_hsv)
find_package(OpenCV REQUIRED)

set(convertir_src
	src/main.cpp
	src/hsv.cpp
	)

set(convertir_hdr
	include/hsv.h
	)

include_directories(convertir
	${CMAKE_CURRENT_BINARY_DIR}/..
	include/
	)
	
add_executable(convertir 
	${convertir_src}
	${convertir_hdr}
	)

target_link_libraries(convertir
	${OpenCV_LIBS}
	)
