#ifndef RGBA_H_
#define RGBA_H_

struct RGBA{
    union {
        uint32_t pixels = 0;
        
        struct {
            unsigned char r, g, b, a;
        };
    };  
};

#endif