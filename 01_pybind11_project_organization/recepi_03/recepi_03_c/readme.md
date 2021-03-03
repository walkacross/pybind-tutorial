# how to call function hierarchically

In this example I have moved the header files to a subfolder under each projects include directory, while leaving the target include as the root include folder. This is a good idea to prevent filename clashes because you have to include a file like below:
~~~
#include "sublibrary/sublibrary.h"
~~~

This also means that if you install your library for other users the default install location would be 
~~~
/usr/local/include/sublib1/sublib1.h
~~~