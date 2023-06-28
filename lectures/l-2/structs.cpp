
#include <iostream>
#include <cstdlib>
#include "structs.h"

int main(){
    RGBA color;
    
    RGBA copy(color);
    copy.set(10, 20, 30, 40);
    
    std::cout << copy.a  << std::endl;
    return EXIT_SUCCESS;
}
