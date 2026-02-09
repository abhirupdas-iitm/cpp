#include <iostream>

// Simple requirement: only checks that the expression is well-formed

template <typename T>
concept TinyType = requires (T t) {
    sizeof(T) <= 4;   // syntax only, NOT evaluated
};

template <TinyType T>
void print_size(T value)
{
    std::cout << "Value: " << value << ", sizeof(T): " << sizeof(T) << std::endl;
}

int main()
{
    int a{10};        // usually 4 bytes
    char c{'A'};      // 1 byte

    print_size(a);
    print_size(c);

    /*
    This still COMPILES if sizeof(long) > 4,
    because the simple requirement does NOT enforce truth
    */
    
    long l{100};
    print_size(l);

    return 0;
}
