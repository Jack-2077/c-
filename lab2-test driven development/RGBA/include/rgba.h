#ifndef RGBA_H_
#define RGBA_H_

struct RGBA{
    union {
        uint32_t pixels = 0;
        
        struct {
            unsigned char r, g, b, a;
        };
    };  
    
    RGBA();
    
    RGBA(const RGBA &color);
};

 RGBA:: RGBA() : r(0), g(0), b(0), a(0) {}
 
 RGBA:: RGBA(const RGBA &color) :
        r(color.r),
        g(color.g),
        b(color.b),
        a(color.a)
    {}

#endif