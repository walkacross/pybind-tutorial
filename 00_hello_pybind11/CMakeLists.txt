cmake_minimum_required(VERSION 3.5)

project (use-pybind11)

add_subdirectory(third_party/pybind11-2.6.2)

if(${pybind11_FOUND})
  # true if pybind11 and all required components found on the system
  message(STATUS "whether found pybind11? :" ${pybind11_FOUND})
  
  #pybind11 version in format Major.Minor.Release
  message(STATUS "pybind11 version? :" ${pybind11_VERSION})
  
  # pybind11 version type (dev, release)
  message(STATUS "pybind11 version tyoe? :" ${pybind11_VERSION_TYPE})
  
  # Directory where pybind11 headers are located.
  message(STATUS "pybind11 include dir? :" ${pybind11_INCLUDE_DIR})
  
  # Directories where pybind11 and python headers are located.
  message(STATUS "pybind11_INCLUDE_DIRS? :" ${pybind11_INCLUDE_DIRS})
  
  # Definitions necessary to use pybind11, namely USING_pybind11.
  message(STATUS "pybind11_DEFINITIONS? :" ${pybind11_DEFINITIONS})
  
  # Compile flags and python libraries (as needed) to link against.
  message(STATUS "pybind11_LIBRARIES? :" ${pybind11_LIBRARIES})
  
else()
  message(STATUS "pybind11 is not found")
endif()