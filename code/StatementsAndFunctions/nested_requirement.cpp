#include <iostream>

// Nested requirement: expression must be TRUE

template <typename T>
concept TinyType = requires (T t) {
    sizeof(T) <= 4;          // syntax check
    requires sizeof(T) <= 4; // semantic check (must be true)
};

template <TinyType T>
void print_size(T value)
{
    std::cout << "Value: " << value
              << ", sizeof(T): " << sizeof(T) << std::endl;
}

int main()
{
    int a{10};
    char c{'A'};

    print_size(a);
    print_size(c);

    /*
    Compile-time error (fails nested requirement)
    long l{100};
    print_size(l);
    */

    return 0;
}
