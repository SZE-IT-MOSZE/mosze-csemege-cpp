cmake_minimum_required(VERSION 3.23)
project(testing_example)

# Fetch Gtest
# see: https://google.github.io/googletest/quickstart-cmake.html
include(FetchContent)

FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
#

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(triangle_example src/main.cpp src/geometry.cpp)

# Testing


include(GoogleTest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

enable_testing()
# Triangle test
add_executable(test_basic_triangle test/test_triangle.cpp src/geometry.cpp)
target_link_libraries(test_basic_triangle gtest_main)
add_test(basic_triangle test_basic_triangle)
# Circle test
add_executable(test_basic_circle test/test_circle.cpp src/geometry.cpp)
target_link_libraries(test_basic_circle gtest_main)
add_test(basic_circle test_basic_circle)
