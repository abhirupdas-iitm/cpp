#include <iostream>


class Cylinder
{
public:
    // Data members with default member initializers
    double base_radius {1.0};
    double height {1.0};

public:
    // Defaulted constructor
    Cylinder() = default;

    // Parameterized constructor
    Cylinder(double radius_param, double height_param)
    {
        base_radius = radius_param;
        height = height_param;
    }

    // Member function
    double volume() const
    {
        const double PI {3.141592653589793};
        return PI * base_radius * base_radius * height;
    }
};


int main()
{
    // Uses defaulted constructor
    Cylinder c1;
    std::cout << "Volume c1 : " << c1.volume() << std::endl;

    // Uses parameterized constructor
    Cylinder c2(3.0, 2.0);
    std::cout << "Volume c2 : " << c2.volume() << std::endl;

    return 0;
}
