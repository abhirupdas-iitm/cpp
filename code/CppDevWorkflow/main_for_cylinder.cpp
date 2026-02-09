#include <iostream>
#include "constants.h"
#include "cylinder.h"

int main()
{
    Cylinder c1;
    std::cout << "Volume c1 : " << c1.volume() << std::endl;

    c1.set_base_radius(3.0);
    c1.set_height(2.0);

    std::cout << "Volume c1 (updated) : "
              << c1.volume() << std::endl;

    Cylinder c2(4.0, 5.0);
    std::cout << "Volume c2 : " << c2.volume() << std::endl;

    return 0;
}
