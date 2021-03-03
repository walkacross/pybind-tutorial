#pragma once

#include <pybind11/pybind11.h>
namespace py = pybind11;

extern int the_answer;

extern py::object world;

extern int add(int i, int j);