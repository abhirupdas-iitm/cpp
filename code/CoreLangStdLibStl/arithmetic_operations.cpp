#include <iostream>

int main(){

int number1;
int number2;

std::cout << "Number 1 should be the larger one of the two" << std::endl;
std::cout << "Enter number 1 : ";
std::cin >> number1;

std::cout << "Number 2 should be the smaller one of the two" << std::endl;
std::cout << "Enter number 2 : ";
std::cin >> number2;

if (number1 > number2){
//Addition
int sum {number1 + number2};
int other_sum = number1 + number2 + number1;

//Subtraction
int difference {number1 - number2};
int other_diff = number1 - number2 - number2;

//Product
int product = number1*number2;

//Quotient
int quotient {number1/number2};
int other_quotient = number1/17;

//Remainder
int rem {number1%number2};
int other_rem = number2%number1;

std::cout << "The sum is : " << sum << std::endl;
std::cout << "Other sum is : " << other_sum << std::endl;
std::cout << "Difference is : " << difference << std::endl;
std::cout << "Other diff is : " << other_diff << std::endl;
std::cout << "Product is : " << product << std::endl;
std::cout << "Quotient is : " << quotient << std::endl;
std::cout << "Other quotient is : " << other_quotient << std::endl;
std::cout << "Remainder is : " << rem << std::endl;
std::cout << "Other remainder is : " << other_rem << std::endl;
}
else{
    std::cout << "Wrong input! Re-run the program and try again" << std::endl;
}
return 0;
}
