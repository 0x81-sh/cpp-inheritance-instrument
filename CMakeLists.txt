cmake_minimum_required(VERSION 3.21)
project(instrument)

set(CMAKE_CXX_STANDARD 23)
add_compile_options(-Wall)

add_executable(instrument main.cpp Instrument.cpp Instrument.h StringedInstrument.cpp StringedInstrument.h)
