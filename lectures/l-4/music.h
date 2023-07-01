#ifndef MUSIC_H
#define MUSIC_H

#include <string>

class Music {
    
    public:
    Music() = default;
    Music(const Music &) = default;
    Music& operator=(const Music &)=default;
    Music(Music&&) = default;
    Music& operator=(Music &&)=default;
    Music(std::string _genre, std::string _artist, std::string _album, unsigned int _year);
    
    //accessors
    std::string getGenre() const;
    std::string getArtist() const;
    std::string getAlbum() const;
    unsigned int getYear() const;
    
    
    private:
    std::string genre;
    std::string album;
    std::string artist;
    unsigned int year;
};

Music::Music(std::string _genre, std::string _artist, std::string _album, unsigned int _year):
    genre(_genre),
    artist(_artist),
    album(_album),
    year(_year){
    }
    

std::string Music::getGenre() const{
    return genre;
}

std::string Music::getArtist() const{
    return artist;
}

std::string Music::getAlbum() const{
    return album;
}

unsigned int Music::getYear() const{
    return year;
}

#endif