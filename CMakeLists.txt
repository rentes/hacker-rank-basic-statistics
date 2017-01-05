cmake_minimum_required(VERSION 3.6)
project(hacker_rank_basic_statistics)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/day0/cpp/day0_mean_median_mode.cpp src/day0/cpp/day0_weighted_mean.cpp)
add_executable(hacker_rank_basic_statistics ${SOURCE_FILES})