#include <iostream>
#include <iomanip>

int main(){
    //Declare and initialize the variables
    float number1 {1.123456789012345567890f};
    double number2 {1.12345678901234567890};
    long double number3 {1.12345678901234567890L};

    //Print out the sizes
    std::cout << std::setprecision(20); // Control the precision of std::cout
    std::cout << "number1 is : " << number1 << std::endl; //7 digits
    std::cout << "number2 is : " << number2 << std::endl; //15 digits
    std::cout << "number3 is : " << number3 << std::endl; //15+ digits

    return 0;
}
