#include <iostream>

int main(){
    //check if character is alphanumeric
    std::cout << std::endl;
    std::cout << "std::alnum : " << std::endl;

    std::cout << "C is alphanumeric : " << std::isalnum('C') << std::endl;
    std::cout << "^ is alphanumeric : " << std::isalnum('^') << std::endl;

    //We can use this as a test condition
    char input_char {'*'};
    if(std::isalnum(input_char)){
        std::cout << input_char << " is alphanumeric." << std::endl;
    }else{
        std::cout << input_char << " is not alphanumeric." << std::endl;
    }

}
