#include <iostream>
#include <string>


class Dog
{
public:
    std::string name {"None"};
};


struct Cat
{
public:
    Cat(const std::string& cat_name)
    {
        name = cat_name;
    }

private:
    std::string name;
};


struct Point
{
    double x;
    double y;
};


int main()
{
    // Using class
    Dog dog;
    std::cout << "Dog name : " << dog.name << std::endl;

    // Using struct with constructor
    Cat cat("Whiskers");
    std::cout << "Cat created successfully" << std::endl;

    // Using struct as a data container
    Point p1 {3.5, 7.2};
    std::cout << "Point p1 : (" << p1.x << ", " << p1.y << ")" << std::endl;

    return 0;
}
