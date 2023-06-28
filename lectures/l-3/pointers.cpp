#include <iostream>
#include <cstdlib>
#include <numeric>

int main(){
    
    int arr[10];
    
    std::iota(std::begin(arr), std::end(arr), 10);
    
    int *pa, *end;
    
    pa = &arr[0];
    
    end = &arr[9];
    
    std::cout << end << " " << *end << std::endl;
    while(pa != end){
        
        std::cout << *pa << " ";
        pa++;
    }
    
    // p = &arr[0];
    
    // int x = *p;
    
    // std::cout << &p << " " << *(arr + 2) << std::endl;
    
    return EXIT_SUCCESS;
}