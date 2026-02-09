#include <iostream>
#include <type_traits>

template <typename T>
concept MyIntegral = std::is_integral_v<T>;

//Syntax 1
template <typename T>
requires MyIntegral<T>
T add_1(T a, T b){
    return a+b;
}

//Syntax 2
template <MyIntegral T>
T add_2(T a, T b){
    return a+b;
}

//Syntax 3
auto add_3(MyIntegral auto a, MyIntegral auto b){
    return a+b;
}

int main()
{
    int x{10};
    int y{20};

    long p{100};
    long q{50};

    std::cout << "add_1(int)  : " << add_1(x, y) << std::endl;
    std::cout << "add_2(long) : " << add_2(p, q) << std::endl;
    std::cout << "add_3(int)  : " << add_3(x, y) << std::endl;

    /*
    Uncommenting any of these causes COMPILE-TIME ERRORS
    add_1(3.14, 2.71);   (not integral)
    add_2(1.5f, 2.5f);   (not integral)
    add_3("a", "b");     (not integral)
    */

    return 0;
}
