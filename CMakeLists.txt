# set minimum cmake version
cmake_minimum_required(VERSION 3.10) 

# set project name
project(chroma_keying_using_vlahos)

# specify c++ version
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# find opencv on windows
if(WIN32)
    # set opencv path
    set(OpenCV_DIR "C:/OpenCV_4.10.0/opencv/build")
endif()

# find OpenCV package
find_package(OpenCV REQUIRED)

# check if OpenCV was found
if(OpenCV_FOUND)
    message(STATUS "OpenCV include dir: ${OpenCV_INCLUDE_DIRS}")
else()
    message(FATAL_ERROR "OpenCV not found!")
endif()


# include directories for OpenCV
include_directories(${OpenCV_INCLUDE_DIRS})

# add executable
add_executable(chroma_keying_using_vlahos 
    src/main.cpp)

# Link your executable against OpenCV libraries
target_link_libraries(chroma_keying_using_vlahos ${OpenCV_LIBS})