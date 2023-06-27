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
    
    RGBA(unsigned char _r, unsigned char _g, unsigned char _b, unsigned char _a);
    
    void set(unsigned char _r, unsigned char _g, unsigned char _b, unsigned char _a);
    
    void clamp(unsigned char _min, unsigned char _max);
};

 RGBA:: RGBA() : r(0), g(0), b(0), a(0) {}
 
 RGBA:: RGBA(const RGBA &color) :
        r(color.r),
        g(color.g),
        b(color.b),
        a(color.a)
    {}
    
RGBA:: RGBA(unsigned char _r, unsigned char _g, unsigned char _b, unsigned char _a): 
          r(_r), 
          g(_g), 
          b(_b), 
          a(_a) 
   {}  
   
void RGBA:: set(unsigned char _r, unsigned char _g, unsigned char _b, unsigned char _a){
    
    r = _r;
    g = _g;
    b = _b;
    a = _a;
} 


void RGBA:: clamp(unsigned char _min, unsigned char _max){
    r = std::clamp(r, _min, _max);
    g = std::clamp(g, _min, _max);
    b = std::clamp(b, _min, _max);
    a = std::clamp(a, _min, _max);
}
#endif