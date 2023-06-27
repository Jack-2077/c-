#include <gtest/gtest.h>
#include "rgba.h" 

int main(int argc, char **argv)
{
  testing::InitGoogleTest(&argc,argv);
  return RUN_ALL_TESTS();
}

// Test the default constructor
TEST(RGBA, DefaultConstructor)
{
  RGBA a;
ASSERT_TRUE(a.r == 0);
ASSERT_TRUE(a.g == 0);
ASSERT_TRUE(a.b == 0);
ASSERT_TRUE(a.a == 0);
}

// Test the copy constructor
TEST(RGBA, CopyConstructor){
  RGBA original;
  
  original.r = 10; 
  original.g = 20; 
  original.b = 56; 
  original.a = 100;
  
  RGBA copy(original);
  
ASSERT_TRUE(copy.pixels == original.pixels);  
ASSERT_TRUE(copy.r == original.r);
ASSERT_TRUE(copy.g == original.g);
ASSERT_TRUE(copy.b == original.b);
ASSERT_TRUE(copy.a == original.a);

}

// Test constructor with specific color values
TEST(RGBA, ConstructorWithValues) {
  unsigned char r = 255, g = 128, b = 0, a = 255;
  RGBA color(r, g, b, a);

  ASSERT_TRUE(color.r == r);
  ASSERT_TRUE(color.g == g);
  ASSERT_TRUE(color.b == b);
  ASSERT_TRUE(color.a == a);
}

// Test the set function with specific color values
TEST(RGBA, SETWithValues) {
  RGBA color; 
  unsigned char r = 255, g = 128, b = 0, a = 255;
  
  color.set(r, g, b, a);

  ASSERT_TRUE(color.r == r);
  ASSERT_TRUE(color.g == g);
  ASSERT_TRUE(color.b == b);
  ASSERT_TRUE(color.a == a);
}