#include <iostream>
#include <algorithm>

//Function declaration
int max(int a, int b);

double increment_multiply(double a, double b){
    std::cout << "Inside function, before increment :" << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;

    double result = ((++a) * (++b));

    std::cout << "Inside function, after increment :" << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;

    return result;
}


int main(int argc, char **argv)
{
    int a{3};
    int b{4};

    std::cout << "max(" << a << "," << b << ") : " << std::max(a,b) << std::endl;
    std::cout << "min(" << a << "," << b << ") : " << std::min(a,b) << std::endl;
    std::cout << "increment_multiply(" << a << "," << b << ") : " << increment_multiply(a,b) << std::endl;

    return 0;
}

//Function definition or implementation
int max(int a, int b){
    if(a>b)
        return a;
    else
        return b;
}

