#include <iostream>
#include <concepts>

// Syntax 3: abbreviated function template with concepts
auto add(std::integral auto a, std::integral auto b)
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
    Compile-time errors if uncommented
    std::cout << add(3.14, 2.71) << std::endl;   (non-integral)
    std::cout << add("a", "b") << std::endl;     (non-integral)
    */

    return 0;
}
