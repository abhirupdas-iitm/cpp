#include <iostream>

int main(){
    int num1;
    int num2;

    //taking value of number 1 from user
    std::cout << "Enter value of number 1 : "; 
    std::cin >> num1;

    //taking value of number 2 from user
    std::cout << "Enter value of number 2 : ";
    std::cin >> num2;

    std::cout << "Comparing variables" << std::endl;

    std::cout << std::boolalpha; 
    /*
    Making bool show up as true or false instead of 1 or 0. The function
    of `std::cout << std:boolalpha;` is used to print the corresponding value 
    of `0` and `1` rather than the values itself (this is done to ensure the
    reader's convenience).
    */

    //We should stress on the importance of parantheses here

    std::cout << "number 1 < number 2 : " << (num1 < num2) << std::endl;
    std::cout << "number 1 <= number 2 : " << (num1 <= num2) << std::endl;
    std::cout << "number 1 > number 2 : " << (num1 > num2) << std::endl;
    std::cout << "number 1 >= number 2 : " << (num1 >= num2) << std::endl;
    std::cout << "number 1 == number 2 : " << (num1 == num2) << std::endl;

    //std::cout <, std::noboolalpha;
    std::cout << "number 1 != number 2 : " << (num1 != num2) << std::endl;

    return 0;
}
