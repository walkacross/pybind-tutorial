# Set the project name
project(sublibrary)

add_library(${PROJECT_NAME} SHARED src/basics.cpp)
target_link_libraries(${PROJECT_NAME} ${PYTHON_LIBRARIES})
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/include ${pybind11_INCLUDE_DIR})

#
pybind11_add_module(basics_binding SHARED src/basics_binding.cpp)
target_include_directories(basics_binding PUBLIC ${PROJECT_SOURCE_DIR}/include)
