# We will always try to use a version > 3.1 if available
cmake_minimum_required(VERSION 3.0)

if(NOT DEFINED CMAKE_TOOLCHAIN_FILE AND DEFINED ENV{CMAKE_TOOLCHAIN_FILE})
   set(CMAKE_TOOLCHAIN_FILE $ENV{CMAKE_TOOLCHAIN_FILE})
endif()

# Name of the project. It is best to use something different from the executable name
project(RGBA_build) 

# Here we set the C++ standard to use
set(CMAKE_CXX_STANDARD 17)

# Now we add our target executable and the file it is built from
add_executable(RGBA src/main.cpp)

target_include_directories(RGBA PRIVATE include)

# Find GTest package
find_package(GTest CONFIG REQUIRED)
include(GoogleTest)

# Add RGBATests executable and source files
add_executable(RGBATests tests/RGBATests.cpp)

target_include_directories(RGBATests PRIVATE include)

# Link GTest libraries to RGBATests
target_link_libraries(RGBATests PRIVATE GTest::gtest GTest::gtest_main)

# Enable testing
enable_testing()

# Discover and add GTest tests
gtest_discover_tests(RGBATests)