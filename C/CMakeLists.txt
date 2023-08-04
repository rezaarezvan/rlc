# Set the minimum required version of CMake
cmake_minimum_required(VERSION 3.10)

# Set the project name
project(rcl_leetcode)

# Specify the C Standard
set(CMAKE_C_STANDARD 99)

# Add a library for each solution
# Replace "leetcode_001" with the name of your C file without the extension
add_library(leetcode_001 STATIC src/leetcode_001.c)

# Add an executable for each test
# Replace "test_leetcode_001" with the name of your test file without the extension
add_executable(test_leetcode_001 test/test_leetcode_001.c)

# Link the test executable with the solution library
target_link_libraries(test_leetcode_001 leetcode_001)
