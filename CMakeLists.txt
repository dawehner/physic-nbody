cmake_minimum_required(VERSION 2.8)

project(eigentest)

set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

# include(OptimizeForArchitecture)

# find_package(GSL REQUIRED)

find_package(Eigen3 REQUIRED)
include_directories(${EIGEN3_INCLUDE_DIR})

# find_package(Qt4 REQUIRED)
# include_directories(${QT_INCLUDE_DIR})

# find_package(OpenMP)

# set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${OpenMP_C_FLAGS}")
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}")

add_executable(nbody nbody.cpp)
# OptimizeForArchitecture(test)
# target_link_libraries(test ${GSL_LIBRARIES})
