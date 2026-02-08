#include <iostream>
#include <string>

template <typename T> T maximum (T a, T b);


template <typename T> T maximum (T a, T b){
    return (a>b) ? a:b; // a and b must support the > operator. Otherwise, hard ERROR
}

int main(int argc, char **argv)
{

    int a {10};
    int b {23};
    double c {34.7};
    double d {23.4};
    std::string e{"Hello"};
    std::string f{"World"};

    maximum(a,b); // int type deduced
    maximum(c,d); // double type deduced
    maximum(e,f); // string type deduced

    std::cout << "maximum between c and d : " << maximum<double>(c,d) << std::endl;
    /*
    we need to explicitly say that we want the double
    version to be called, if an instance is not there
    already, it will be created
    */

    std::cout << "maximum between a and c : " << maximum<double>(a,c) << std::endl;
    /*
    this works even if the parameters are of different
    types, there is implicit conversion from int to 
    double for the first parameter.
    */

    // maximum<double>(a,e);
    /*
    Error: can't convert std::string to double.
    */

    return 0;

}

