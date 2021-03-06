#include "basics.h"

// export variable
/* 
To expose a value from C++, use the attr function to register it in a module as shown below. Built-in types and general objects (more on that later) are automatically converted when assigned as attributes, and can be explicitly converted using the function py::cast.
*/
int the_answer = 42;

// export function
int add(int i, int j) {
    return i + j;
}
