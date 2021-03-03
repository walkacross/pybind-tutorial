cmake_minimum_required(VERSION 3.5)

project (pybind-classes-child)

#find_package(pybind11)
add_subdirectory(pybind11)

# adds a library pybindings that can be called by python
pybind11_add_module(animals animals.cpp)

