cmake_minimum_required(VERSION 3.14)

# set the project name
project(test VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(src_list test.cc)
include(FetchContent)

FetchContent_Declare(
    fmt
    GIT_REPOSITORY https://github.com/fmtlib/fmt.git
    GIT_TAG master
)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG main
)

FetchContent_MakeAvailable(fmt googletest)

# add the executable
add_executable(${PROJECT_NAME} ${src_list})

target_include_directories(${PROJECT_NAME} PUBLIC
                           ${PROJECT_BINARY_DIR}
                           )
target_link_libraries(${PROJECT_NAME}
    PRIVATE
        fmt::fmt
        gtest_main
)