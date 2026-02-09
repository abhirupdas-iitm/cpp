#include <iostream>
#include <concepts>

// Constrains the auto parameters to satisfy std::integral

std::integral auto add(std::integral auto a, std::integral auto b)
{
    return a + b;
}

int main()
{
    std::integral auto x = add(10, 20);   //this is okay
    std::cout << "x : " << x << std::endl;
    
    /*
    Compiler error (uncomment to see it)
    std::floating_point auto x2 = add(10, 20);
    
    Compiler error (7.7 is not integral)
    std::integral auto y = 7.7;
    */

    std::floating_point auto y = 7.7;     //this is okay
    std::cout << "y : " << y << std::endl;

    // -------------------------------------------------
    // 4) More examples (optional sanity checks)
    // -------------------------------------------------

    /*
    Compiler error: arguments must be integral
    auto bad = add(3.14, 2.71);
    */

    auto good = add(5, 6); //this is okay
    std::cout << "good : " << good << std::endl;

    return 0;
}
