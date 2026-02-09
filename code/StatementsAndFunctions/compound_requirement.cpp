#include <iostream>
#include <concepts>

// Compound requirement

template <typename T>
concept Addable = requires (T a, T b) {
    { a + b } noexcept -> std::convertible_to<int>;
};

template <Addable T>
int add_and_print(T a, T b)
{
    int result = a + b;
    std::cout << "Result: " << result << std::endl;
    return result;
}

int main()
{
    int x{10};
    int y{20};

    add_and_print(x, y);
    
    /*
    Compile-time errors:

    double d1{1.2}, d2{3.4};
    add_and_print(d1, d2); // not convertible to int

    std::string s1{"Hello"}, s2{"World"};
    add_and_print(s1, s2); // operator+ exists, but not convertible to int
    */

    return 0;
}
