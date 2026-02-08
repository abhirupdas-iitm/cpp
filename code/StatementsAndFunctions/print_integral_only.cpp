#include <iostream>
#include <type_traits>

// Function template constrained to integral types
template <typename T>
void print_number(T n)
{
    static_assert(std::is_integral<T>::value,
                  "Must pass in an integral argument");

    std::cout << "n : " << n << std::endl;
}

int main()
{
    print_number(42);        // This is okay (int)
    print_number(100L);      // This is okay (long)
    print_number('A');       // (char is integral)

    // Uncommenting ANY of these will cause a COMPILE-TIME ERROR
    // print_number(3.14);   
    // print_number(2.5f);   
    // print_number("123");  

    return 0;
}
