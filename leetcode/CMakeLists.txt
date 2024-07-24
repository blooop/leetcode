cmake_minimum_required(VERSION 3.8)
project(leetcode)

# if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  # add_compile_options(-Wall -Wextra -Wpedantic)
# endif()

find_package(ament_cmake REQUIRED)

if(BUILD_TESTING)

  find_package(ament_cmake_gtest REQUIRED)
  file(GLOB_RECURSE SOURCE_FILES "src/*.cpp")

  # Loop through each source file and add a separate gtest
  foreach(SOURCE_FILE ${SOURCE_FILES})
    get_filename_component(TEST_NAME ${SOURCE_FILE} NAME_WE)
    string(REPLACE "src/" "" TEST_NAME ${TEST_NAME})
    ament_add_gtest(${PROJECT_NAME}_${TEST_NAME}_test ${SOURCE_FILE})
  endforeach()
endif()

ament_package()
