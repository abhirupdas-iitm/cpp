#include <iostream>
#include <concepts>

template <typename T>
concept TinyType = requires {
    requires sizeof(T) <= 4;
};

template <typename T>
T func(T t)
    requires std::integral<T> && TinyType<T>
{
    std::cout << "value : " << t << std::endl;
    return 2 * t;
}

int main()
{
    int a{10};      // usually 4 bytes → OK
    char c{'A'};    // 1 byte → OK

    std::cout << func(a) << std::endl;
    std::cout << func(c) << std::endl;
    /*
    Compile-time errors if uncommented

    long l{20};        (usually > 4 bytes)
    func(l);

    double d{3.14};    (not integral)
    func(d);
    */

    return 0;
}
