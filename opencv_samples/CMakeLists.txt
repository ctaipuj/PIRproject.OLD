cmake_minimum_required(VERSION 2.8)

project( display_image )
find_package( OpenCV REQUIRED )
add_executable( display_image display_image.cpp )
target_link_libraries( display_image ${OpenCV_LIBS} )

project( video )
find_package( OpenCV REQUIRED )
add_executable( video video.cpp )
target_link_libraries( video ${OpenCV_LIBS} )

#project( data_structure )
#find_package( OpenCV REQUIRED )
#add_executable( data_structure data_structure.cpp )
#target_link_libraries( data_structure ${OpenCV_LIBS} )

project( roi )
find_package( OpenCV REQUIRED )
add_executable( roi roi.cpp )
target_link_libraries( roi ${OpenCV_LIBS} )
