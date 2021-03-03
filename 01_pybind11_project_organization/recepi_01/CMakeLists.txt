cmake_minimum_required(VERSION 3.5)

project (pybind-basics)

add_subdirectory(third_party/pybind11-2.6.2)
message(STATUS "wether found pybind11?" ${pybind11_FOUND})
message(STATUS "pybind11 include dir?" ${pybind11_INCLUDE_DIR})

# adds a library pybindings that can be called by python
pybind11_add_module(basics SHARED basics.cpp)

