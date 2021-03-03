# Set the project name
project(sublibrary)

add_library(${PROJECT_NAME} SHARED src/basics.cpp)
target_link_libraries(${PROJECT_NAME} ${PYTHON_LIBRARIES})
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/include ${pybind11_INCLUDE_DIR})
