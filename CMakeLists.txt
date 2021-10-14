cmake_minimum_required(VERSION 3.4)    # Минимальная версия CMake

set(CMAKE_CXX_STANDARD 17)             # Стандарт C++
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(hw1)


find_package(GTest CONFIG REQUIRED)
find_package(Threads REQUIRED)


set(HEADER_SOURCES ../code/headers/headers.h)
set(CLIENT_SOURCES ../code/functions/add.c ../code/functions/create_list.c ../code/functions/delete.c  ../code/functions/get.c ../code/functions/main.c ../code/functions/menu.c ../code/functions/print.c ../code/functions/sort.c)

add_executable(main_app ${HEADER_SOURCES} ${CLIENT_SOURCES})

################################
# GTest
################################
enable_testing()
include_directories(${gtest_SOURCE_DIR})

################################
# Unit Tests
################################
# Add test cpp file
add_executable( test_app ../code/tests/test_app.cpp )
# Link test executable against gtest & gtest_main
target_link_libraries(test_app gtest gtest_main)
target_link_libraries(test_app Threads::Threads)
add_test( test_app test_app )