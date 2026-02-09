#include <iostream>


class Cylinder
{
private:
    double base_radius {1.0};
    double height {1.0};

public:
    // Default constructor
    Cylinder()
    {
        base_radius = 2.0;
        height = 2.0;
    }

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
    // Uses default constructor
    Cylinder c1;
    std::cout << "Volume c1 : " << c1.volume() << std::endl;

    // Uses parameterized constructor
    Cylinder c2(3.0, 5.0);
    std::cout << "Volume c2 : " << c2.volume() << std::endl;

    return 0;
}
