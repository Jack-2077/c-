#include <iostream>
#include <cstdlib>
#include <string>
#include "music.h"

int main(){
    
    Music m2("Electronic", "Ben Bohmer", "Breathing", 2021);
    Music m1 = Music(m2);
    Music m3(std::move(m2));
    Music m4 = m3;
    
    Music m5("Rock", "Led Zeppelin", "IV", 1971);
    m5 = std::move(m4);
    
    std::cout << m1.getGenre() << " " << m1.getArtist() << " " << m1.getAlbum() << " " << m1.getYear() << std::endl;
    
    std::cout << m2.getGenre() << " " << m2.getArtist() << " " << m2.getAlbum() << " " << m2.getYear() << std::endl;
    
    std::cout << m3.getGenre() << " " << m3.getArtist() << " " << m3.getAlbum() << " " << m3.getYear() << std::endl;
    std::cout << m4.getGenre() << " " << m4.getArtist() << " " << m4.getAlbum() << " " << m4.getYear() << std::endl;
    std::cout << m5.getGenre() << " " << m5.getArtist() << " " << m5.getAlbum() << " " << m5.getYear() << std::endl;
 
    
    return EXIT_SUCCESS;
}