#include <iostream>
#include "basics.h"

int main(int argc, char *argv[])
{
    int a = 1;
    int b = 2;
    int c = add(a,b);
    
    std::cout << c <<std::endl;
    
    return 0;
}