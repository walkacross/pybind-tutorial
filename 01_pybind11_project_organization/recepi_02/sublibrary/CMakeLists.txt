# Set the project name
project(sublibrary)

# can call pybind11_add_module directly, since in the parrent CMakeLists.txt has add pybind11
pybind11_add_module(${PROJECT_NAME} SHARED src/basics.cpp)
