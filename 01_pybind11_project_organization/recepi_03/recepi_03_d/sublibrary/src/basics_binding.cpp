#include <pybind11/pybind11.h>
// here is the point, we can invoke hierarchically
#include "sublibrary/basics.h"

namespace py = pybind11;


PYBIND11_MODULE(basics, m) {
    m.doc() = "pybind11 basic example plugin"; // optional module docstring

    m.attr("the_answer") = the_answer;
    m.attr("what") = world;

    m.def("add", &add, "A function which adds two numbers", py::arg("i"), py::arg("j"));
}
