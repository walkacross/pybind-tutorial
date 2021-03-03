cmake_minimum_required(VERSION 3.5)

project (pybind-basics)


find_package(PythonLibs REQUIRED)
include_directories(${PYTHON_INCLUDE_DIRS})

add_subdirectory(third_party/pybind11-2.6.2)
if(${pybind11_FOUND})
  message(STATUS "whether found pybind11? :" ${pybind11_FOUND})
  message(STATUS "pybind11 include dir is in:" ${pybind11_INCLUDE_DIR})
else()
  message(STATUS "pybind11 is not found")
endif()

add_subdirectory(sublibrary)
add_subdirectory(subbinary)



