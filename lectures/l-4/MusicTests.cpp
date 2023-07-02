#include "music.h"
#include <gtest/gtest.h>

TEST(Music, defaultCtor){
    Music m1("Pop Rap", "Jaden", "Syre", 2020 );
    
    EXPECT_EQ(m1.getGenre(), "Pop Rap");
    EXPECT_EQ(m1.getArtist(), "Jaden");
    EXPECT_EQ(m1.getAlbum(), "Syre");
    EXPECT_EQ(m1.getYear(), 2020);
    
}

TEST(Music, copyCtor){
     Music m1("Pop Rap", "Jaden", "Syre", 2020 );
     
     Music m2(m1);
     EXPECT_EQ(m2.getGenre(), "Pop Rap");
    EXPECT_EQ(m2.getArtist(), "Jaden");
    EXPECT_EQ(m2.getAlbum(), "Syre");
    EXPECT_EQ(m2.getYear(), 2020);
    
}


int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


