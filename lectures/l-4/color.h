#ifndef COLOR_H
#define COLOR_H


class Color {
    
    public:
    Color()=default;
    
    ~Color()=default;
    
    Color(int _r, int _g, int _b, int _a):  
    c_r{_r},
    c_g{_g},
    c_b{_b},
    c_a{_a} {};
    
    Color(const Color &_c)=default;
    
    int getRed() const;
    int getGreen() const;
    int getBlue() const;
    int getAlpha() const;
    
    private:
    int c_r, c_g, c_b, c_a;
    
};


#endif