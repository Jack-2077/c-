#include <iostream>
#include <cstdlib>

//ref swap
void swap(int &x, int &y){
    int c = x;
    
    x = y;
    
    y = c;
    
    
}

//pointer swap
void Pswap(int *x, int *y){
    int c= *y;
    *y = *x;
    *x = c;
}

int main(){
    
    int a = 10, b = 2;
    
    swap(a, b);
    Pswap(&a, &b);
    
    std::cout << a <<  " " << b << std::endl;
    return EXIT_SUCCESS;
}