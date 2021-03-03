#include <iostream>
#include "sublibrary/basics.h"

int main(int argc, char *argv[])
{
    
    std::cout << the_answer << std::endl;    
    //std::cout << world << std::endl;
    
    int a = 1;
    int b = 2;
    int c = add(a,b);
    std::cout << c << std::endl;
    
    return 0;
}