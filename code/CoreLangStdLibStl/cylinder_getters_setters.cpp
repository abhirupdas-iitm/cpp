#include <iostream>


class Cylinder
{
private:
    double base_radius {};
    double height {};

public:
    // Constructors
    Cylinder() = default;

    Cylinder(double radius_param, double height_param)
        : base_radius(radius_param), height(height_param)
    {
    }

    // Getters
    double get_base_radius() const
    {
        return base_radius;
    }

    double get_height() const
    {
        return height;
    }

    // Setters
    void set_base_radius(double radius_param)
    {
        base_radius = radius_param;
    }

    void set_height(double height_param)
    {
        height = height_param;
    }

    // Other operation on the class object
    double volume() const
    {
        const double PI {3.141592653589793};
        return PI * base_radius * base_radius * height;
    }
};


int main()
{
    Cylinder c1;

    // Use setters
    c1.set_base_radius(3.0);
    c1.set_height(2.0);

    // Use getters
    std::cout << "Base radius : " << c1.get_base_radius() << std::endl;
    std::cout << "Height      : " << c1.get_height() << std::endl;
    std::cout << "Volume      : " << c1.volume() << std::endl;

    std::cout << std::endl;

    // Using parameterized constructor
    Cylinder c2(4.0, 5.0);
    std::cout << "Volume c2   : " << c2.volume() << std::endl;

    return 0;
}
