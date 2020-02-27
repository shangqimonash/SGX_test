cmake_minimum_required(VERSION 3.15)
project(SGX_test)

set(CMAKE_CXX_STANDARD 14)

# Use cumtom target to build SGX program
add_custom_target(test
        COMMAND make -j8 SGX_MODE=SIM SGX_DEBUG=1
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

add_custom_target(test_HW
        COMMAND make -j8 SGX_MODE=HW SGX_DEBUG=1
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

add_custom_target(cleanup
        COMMAND make -j8 clean
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})