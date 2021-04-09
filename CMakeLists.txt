cmake_minimum_required(VERSION 3.10)
project(rabin_miller)
set(CMAKE_CXX_STANDARD 20)

set(SOURCES main.cpp rabin_miller.hpp)

if(BENCHMARK)
    add_executable(rabin_miller_bench rm_bench.cpp rabin_miller.hpp)
    target_link_libraries(rabin_miller_bench ${CMAKE_SOURCE_DIR}/libbenchmark.a pthread)
else()
    add_executable(rabin_miller ${SOURCES})
endif(BENCHMARK)
