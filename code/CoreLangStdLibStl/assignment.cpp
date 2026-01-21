#include <iostream>

int main(){
    bool state {false}; //Declare and initialize
    std::cout << std::boolalpha;
    std::cout << "state : " << state << std::endl;

    state = true; //Assigning a new value after already having initialized with a different one
    std::cout << "state : " << state <<std::endl;
}
