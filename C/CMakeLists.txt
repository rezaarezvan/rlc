# Set the minimum required version of CMake
cmake_minimum_required(VERSION 3.10)

# Set the project name
project(rcl_leetcode)

# Specify the C Standard
set(CMAKE_C_STANDARD 99)

# Detect all solution and test files
file(GLOB SRC_SOURCES "src/*.c")
file(GLOB TEST_SOURCES "test/*.c")

# Iterate over each solution file
foreach(srcfile ${SRC_SOURCES})
  # Get the name of the file without the extension
  get_filename_component(srcname ${srcfile} NAME_WE)

  # Add a library for the solution
  add_library(${srcname} STATIC ${srcfile})
endforeach()

# Iterate over each test file
foreach(testfile ${TEST_SOURCES})
  # Get the name of the file without the extension
  get_filename_component(testname ${testfile} NAME_WE)

  # Extract the number from the test name
  string(REGEX REPLACE "test_leetcode_" "" testnum ${testname})

  # Construct the corresponding solution name
  set(srcname "leetcode_${testnum}")

  # Add an executable for the test
  add_executable(${testname} ${testfile})

  # Link the test executable with the corresponding solution library
  target_link_libraries(${testname} ${srcname})
endforeach()
