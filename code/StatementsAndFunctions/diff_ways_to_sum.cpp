#include <iostream>
//Below is a function which adds 2 numbers
int addNumbers(int first_param, int second_param){
    int result = first_param + second_param;
    return result;
}

int main(){
    int first_number {13};
    int second_number {7};

    std::cout << "First number : " << first_number << std::endl;
    std::cout << "Second number : " << second_number << std::endl;

/*
The 4 lines above are used to demonstrate statements
*/

    int sum = addNumbers(67,69);
    std::cout << "Sum : " << sum << std::endl; //Adding 2 numbers using the function defined earlier
    std::cout << "Sum : " << addNumbers(1,98) << std::endl; //Printing the sum without using a 3rd variable
    
}
