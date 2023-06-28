#ifndef STRUCTS_H
#define STRUCTS_H


struct RGBA{
    
    unsigned int r, g, b, a;
    
    RGBA();
    
    RGBA(const RGBA &copy);
    
    void set(unsigned int _r, unsigned int _g, unsigned int _b, unsigned int _a);
    
    
};

RGBA::RGBA() :  r(0), g(0), b(0), a(0) {};

RGBA::RGBA(const RGBA &copy) : r(copy.r), g(copy.g), b(copy.b), a(copy.a) {};

void RGBA::set(unsigned int _r, unsigned int _g, unsigned int _b, unsigned int _a){
    r = _r;
    g = _g;
    a = _a;
    b = _b;
};

#endif