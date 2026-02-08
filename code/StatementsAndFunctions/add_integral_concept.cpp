#include <iostream>
#include <concepts>

// Syntax 2: concept in template parameter list
template <std::integral T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    int x{10};
    int y{20};

    long p{100};
    long q{50};

    std::cout << "add(int)  : " << add(x, y) << std::endl;
    std::cout << "add(long) : " << add(p, q) << std::endl;
    
    /*
    Uncommenting any of these causes a COMPILE-TIME ERROR
    std::cout << add(3.14, 2.71) << std::endl;   (double)
    std::cout << add(1.5f, 2.5f) << std::endl;   (float)
    std::cout << add("a", "b") << std::endl;     (const char*)
    */

    return 0;

}
