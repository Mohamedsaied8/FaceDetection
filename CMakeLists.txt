cmake_minimum_required(VERSION 3.10)
project(FaceDetection)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find OpenCV
find_package(OpenCV REQUIRED)

# Include OpenCV headers
include_directories(${OpenCV_INCLUDE_DIRS})

# Add executable
add_executable(FaceDetection face_detection.cpp)

# Link OpenCV libraries
target_link_libraries(FaceDetection ${OpenCV_LIBS})
