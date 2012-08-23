cmake_minimum_required(VERSION 2.8)
project(EXAMPLE_MARKER_BASED_AR)

find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIR})

link_directories(${OpenCV_LIBRARY_DIR})

add_executable(marker_based_ar_test 
CameraCalibration.cpp
GeometryTypes.cpp
Marker.cpp
MarkerDetector.cpp
TinyLA.cpp
CameraCalibration.hpp
GeometryTypes.hpp
Marker.hpp
MarkerDetector.hpp
TinyLA.hpp
MarkerBasedArTest.cpp
BGRAVideoFrame.h
DebugHelpers.hpp
)

target_link_libraries( marker_based_ar_test ${OpenCV_LIBS} )
target_link_libraries( marker_based_ar_test ${OpenCV_LIBRARIES} )

install (TARGETS marker_based_ar_test DESTINATION bin)
