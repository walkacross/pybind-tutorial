# how to call function hierarchically

In this example I have moved the header files to a subfolder under each projects include directory, while leaving the target include as the root include folder. This is a good idea to prevent filename clashes because you have to include a file like below:
~~~
#include "sublibrary/sublibrary.h"
~~~

This also means that if you install your library for other users the default install location would be 
~~~
/usr/local/include/sublib1/sublib1.h
~~~


# understand the difference between declaration and definition of a variable.

~~~
extern int var;   // just declaration

int var;          // declaration and definition

int var = 12;     // declaration, definition and 
~~~


the best practice is: declare a variable in head file. and then define in the source file.
in the appplication file, first include the head file, then call.

the function of declaration is
(1) define the scope of this variable which can be called by outside of this file.
(2) tell the compiler, the definition of this variable is out of this file.