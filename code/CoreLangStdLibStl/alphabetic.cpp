#include <iostream>

int main(){
    //check if character is alphabetic 

    std::cout << std::endl;
    std::cout << "std::isalpha : " << std::endl;
    std::cout << "C is alphabetic : " << std::isalpha('C') << std::endl;
    std::cout << "^ is alphabetic : " << std::isalpha('^') << std::endl;
    std::cout << "7 is alphabetic : " << std::isalpha('7') << std::endl;

    return 0;

}
