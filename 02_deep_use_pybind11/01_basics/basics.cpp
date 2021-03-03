#include <pybind11/pybind11.h>

namespace py = pybind11;


// export variable
/* 
To expose a value from C++, use the attr function to register it in a module as shown below. Built-in types and general objects (more on that later) are automatically converted when assigned as attributes, and can be explicitly converted using the function py::cast.
*/
int the_answer = 42;
py::object world = py::cast("World");

// export function
int add(int i, int j) {
    return i + j;
}

PYBIND11_MODULE(basics, m) {
    m.doc() = "pybind11 basic example plugin"; // optional module docstring

    m.attr("the_answer") = the_answer;
    m.attr("what") = world;

    m.def("add", &add, "A function which adds two numbers", py::arg("i"), py::arg("j"));
}
