#include <iostream>
#include <algorithm>

int main(){ char d{55}; char e{51};

    double f{12.33};
    double g{51.25};

    std::cout << std::endl;
    std::cout << "Calling min function with char arguments : " << std::endl;

    int minimum_number {std::min(d,e)}; //d,e implicitly converted to int
    std::cout << "min(" << static_cast<int>(d) << "," << static_cast<int>(e) << ") : " << minimum_number << std::endl;

    /*
    doubles will undergo an implicit narrowing conversion
    from double to int. Info after decimal point will be lost
    */

    std::cout << std::endl;
    std::cout << "Calling min function with double arguments : " << std::endl;
    minimum_number = std::min(f,g);
    std::cout << "min(" << f << "," << g << ") : " << minimum_number << std::endl;

    return 0;

}
