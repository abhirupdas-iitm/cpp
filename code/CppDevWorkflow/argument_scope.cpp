#include <iostream>

/* 
Parameters passed this way are scoped locally in the function. 
Changes to them are not visible outside the function. What we
have inside the function are actually COPIES of the arguments
passed to the function. 
*/

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

int main(){
    double x{2.0};
    double y{3.0};

    double res = increment_multiply(x, y);

    std::cout << "Outside function :" << std::endl;
    std::cout << "x : " << x << std::endl;
    std::cout << "y : " << y << std::endl;
    std::cout << "result : " << res << std::endl;

    return 0;
}

