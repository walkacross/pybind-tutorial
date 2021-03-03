# how to install pybind11 with add_subdirectory

> https://pybind11.readthedocs.io/en/latest/compiling.html#building-with-cmake

For C++ codebases that have an existing CMake-based build system, a Python extension module can be created with just a few lines of code:

~~~
cmake_minimum_required(VERSION 3.4...3.18)
project(example LANGUAGES CXX)

add_subdirectory(pybind11)
#pybind11_add_module(example example.cpp)
~~~

This assumes that the pybind11 repository is located in a subdirectory named pybind11 and that the code is located in a file named example.cpp. The CMake command add_subdirectory will import the pybind11 project which provides the pybind11_add_module function. It will take care of all the details needed to build a Python extension module on any platform.


# 2CMake helpers

> the CMake helper is availabel only if the version pybind11 >= 2.6.2

> the CMake helper is availabel only if the version pybind11 >= 2.6.2

> the CMake helper is availabel only if the version pybind11 >= 2.6.2

https://pybind11.readthedocs.io/en/latest/cmake/index.html

Pybind11 can be used with add_subdirectory(extern/pybind11), or from an install with find_package(pybind11 CONFIG). The interface provided in either case is functionally identical.

## pybind11Config.cmake

* 2.1 Exported variables
* 2.2 Exported targets

## 2.1 Exported variables
This module sets the following variables in your project:

* pybind11_FOUND
true if pybind11 and all required components found on the system

* pybind11_VERSION
pybind11 version in format Major.Minor.Release

* pybind11_VERSION_TYPE
pybind11 version type (dev, release)

* pybind11_INCLUDE_DIRS
Directories where pybind11 and python headers are located.

* pybind11_INCLUDE_DIR
Directory where pybind11 headers are located.

* pybind11_DEFINITIONS
Definitions necessary to use pybind11, namely USING_pybind11.

* pybind11_LIBRARIES
Compile flags and python libraries (as needed) to link against.

* pybind11_LIBRARY
Empty.


## 2.2 Exported targets

If pybind11 is found, this module defines the following IMPORTED interface library targets:

* pybind11::module
for extension modules.

* pybind11::embed
or embedding the Python interpreter.


Python headers, libraries (as needed by platform), and the C++ standard are attached to the target.

Advanced targets are also supplied - these are primary for users building complex applications, and they are available in all modes:


* pybind11::headers: Just the pybind11 headers and minimum compile requirements.
* pybind11::pybind11: Python headers too.


