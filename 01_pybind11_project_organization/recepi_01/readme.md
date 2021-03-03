# prerequisite
~~~
git submodule add https://github.com/pybind/pybind11.git third_party/pybind11-2.6.2
cd third_party/pybind11-2.6.2/
git checkout tags/v2.6.2
~~~


# run code

~~~
mkdir build
cd build
cmake ..
make
~~~


# core knowledge: pybind11_add_module
~~~
# CmakeLists.txt

cmake_minimum_required(VERSION 3.5)

project (pybind-basics)

add_subdirectory(third_party/pybind11-2.6.2)
message(STATUS "wether found pybind11?" ${pybind11_FOUND})
message(STATUS "pybind11 include dir?" ${pybind11_INCLUDE_DIR})

# adds a library pybindings that can be called by python
pybind11_add_module(basics basics.cpp)
~~~


To ease the creation of Python extension modules, pybind11 provides a CMake function with the following signature:
~~~
pybind11_add_module(<name> [MODULE | SHARED] [EXCLUDE_FROM_ALL]
                    [NO_EXTRAS] [THIN_LTO] [OPT_SIZE] source1 [source2 ...])
~~~

This function behaves very much like CMake’s builtin add_library (in fact, it’s a wrapper function around that command). It will add a library target called <name> to be built from the listed source files. In addition, it will take care of all the Python-specific compiler and linker flags as well as the OS- and Python-version-specific file extension. The produced target <name> can be further manipulated with regular CMake commands.


**MODULE or SHARED may be given to specify the type of library**. If no type is given, MODULE is used by default which ensures the creation of a Python-exclusive module. Specifying SHARED will create a more traditional dynamic library which can also be linked from elsewhere. EXCLUDE_FROM_ALL removes this target from the default build (see CMake docs for details).



# appendix: configure
By default, pybind11 will compile modules with the compiler default or the minimum standard required by pybind11, whichever is higher. You can set the standard explicitly with CMAKE_CXX_STANDARD:

~~~
set(CMAKE_CXX_STANDARD 14 CACHE STRING "C++ version selection")  # or 11, 14, 17, 20
set(CMAKE_CXX_STANDARD_REQUIRED ON)  # optional, ensure standard is supported
set(CMAKE_CXX_EXTENSIONS OFF)  # optional, keep compiler extensionsn off
~~~

The variables can also be set when calling CMake from the command line using the -D<variable>=<value> flag. You can also manually set CXX_STANDARD on a target or use target_compile_features on your targets - anything that CMake supports.

Classic Python support: The target Python version can be selected by setting PYBIND11_PYTHON_VERSION or an exact Python installation can be specified with PYTHON_EXECUTABLE. For example:

~~~
cmake -DPYBIND11_PYTHON_VERSION=3.6 ..

# Another method:
cmake -DPYTHON_EXECUTABLE=/path/to/python ..

# This often is a good way to get the current Python, works in environments:
cmake -DPYTHON_EXECUTABLE=$(python3 -c "import sys; print(sys.executable)") ..
~~~
