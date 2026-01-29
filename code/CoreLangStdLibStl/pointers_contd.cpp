#include <iostream>
int main(){

    //How we've used pointers so far
    int number {22};
    int * p_number = &number;

    std::cout << std::endl;
    std::cout << "Declaring pointer and assigning address : " << std::endl;
    std::cout << "number : " << number << std::endl;
    std::cout << "p_number : " << p_number << std::endl;
    std::cout << "&number : " << &number << std::endl;
    std::cout << "*p_number : " << *p_number << std::endl;

    int * p_number1; //Uninitialized pointer, contains junk address
    int number1 {12};
    p_number1 = &number1; //Make it point to a valid address
    std::cout << std::endl;
    std::cout << "Uninitialized pointer : " << p_number1 << std::endl;
    std::cout << "*p_number : " << *p_number1 << std::endl;

}
