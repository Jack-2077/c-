#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>
class MovieRAting
{

public:
    std ::string str;
    float ratings;
    int n;
    void addMovie(const std::string name)
    {
        str = name;
        ratings = 0;
        n = 0;
    }

    void addRatings(float r)
    {
        ratings = (ratings + r) / n;
        ++n;
    }
    float getRatings()
    {
        return ratings;
    }
};

int main()
{
    MovieRAting *nemo = new MovieRAting;
    nemo->addMovie("nemo");
    std::cout << nemo->getRatings() << std::endl;
    nemo->addRatings(4.0);
    nemo->addRatings(4.5);
    std::cout << nemo->getRatings() << std::endl;
}
