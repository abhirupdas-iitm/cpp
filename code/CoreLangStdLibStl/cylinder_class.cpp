#include <iostream>

class Cylinder
{
public:
    // Data members (with default values)
    double base_radius {1.0};
    double height {1.0};

public:
    // Member function
    double volume() const
    {
        const double PI {3.141592653589793};
        return PI * base_radius * base_radius * height;
    }
};


int main()
{
    Cylinder cylinder1;

    std::cout << "volume c1 : "
              << cylinder1.volume()
              << std::endl;

    // Modify object state
    cylinder1.base_radius = 3.0;
    cylinder1.height = 2.0;

    std::cout << "volume c1 : "
              << cylinder1.volume()
              << std::endl;

    Cylinder cylinder2;

    std::cout << "volume c2 : "
              << cylinder2.volume()
              << std::endl;

    return 0;
}
