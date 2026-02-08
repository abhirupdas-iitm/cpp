#include <iostream>
#include <type_traits>

//Concept built from a type trait
template <typename T>
concept MyIntegral = std::is_integral_v<T>;

//Concept built from a requires-expression (syntax validity)
template <typename T>
concept Multipliable = requires(T a, T b) {
    a * b;   // only checks that this expression is valid
};

//Concept built from multiple requirements
template <typename T>
concept Incrementable = requires(T a) {
    a += 1;
    ++a;
    a++;
};

// --------- Functions using the concepts ---------

template <MyIntegral T>
T add_integrals(T a, T b)
{
    return a + b;
}

template <Multipliable T>
T multiply(T a, T b)
{
    return a * b;
}

template <Incrementable T>
void increment_and_print(T a)
{
    ++a;
    std::cout << "Incremented value: " << a << std::endl;
}

// --------- main ---------

int main()
{
    int x{10};
    int y{5};

    double d1{2.5};
    double d2{4.0};

    std::cout << "add_integrals(int): "
              << add_integrals(x, y) << std::endl;

    std::cout << "multiply(double): "
              << multiply(d1, d2) << std::endl;

    increment_and_print(x);

    //Uncommenting any of these causes COMPILE-TIME ERRORS

    // add_integrals(d1, d2);     // not integral
    // increment_and_print(d1);  // double is not incrementable this way
    // multiply("a", "b");       // invalid multiplication

    return 0;
}
