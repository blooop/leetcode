cmake_minimum_required(VERSION 3.8)
project(leetcode_template)

# if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  # add_compile_options(-Wall -Wextra -Wpedantic)
# endif()

# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

# add_subdirectory(src)
# add_subdirectory(tests)



if(BUILD_TESTING)

  find_package(ament_cmake_gtest REQUIRED)

  file(GLOB_RECURSE SOURCE_FILES "src/*.cpp")

  # Loop through each source file and add a separate gtest
  foreach(SOURCE_FILE ${SOURCE_FILES})
    get_filename_component(TEST_NAME ${SOURCE_FILE} NAME_WE)
    string(REPLACE "src/" "" TEST_NAME ${TEST_NAME})
    ament_add_gtest(${PROJECT_NAME}_${TEST_NAME}_test ${SOURCE_FILE})
  endforeach()
  
  # find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  # set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  # set(ament_cmake_cpplint_FOUND TRUE)
  # ament_lint_auto_find_test_dependencies()
endif()

ament_package()
