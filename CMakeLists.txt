cmake_minimum_required(VERSION 3.0.0)
project(IntroToGit VERSION 0.1.0)


add_executable(IntroToGit main.cpp action.cpp)
target_include_directories(IntroToGit PUBLIC ${CMAKE_SOURCE_DIR})

