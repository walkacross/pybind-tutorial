#include <pybind11/pybind11.h>

namespace py = pybind11;

// Class with properties and a function
class Adder {

private:
    int x_;
	
public:
    Adder(int x) : x_(x){};
  
    int add(int y) { 
      return x_ + y;
    }

    void setAddition(int x) {
	  x_ = x;
    }

    int getAddition() {
	  return x_;
    }
};

PYBIND11_MODULE(classes, m) {
  m.doc() = "example module to export code";

  // export the Adder class
  py::class_<Adder>(m, "Adder")
      .def(py::init<int>())
      .def("add", &Adder::add)
      .def_property("addition", &Adder::getAddition, &Adder::setAddition);

}

