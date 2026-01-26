#include <iostream>

int main(){
    const unsigned int COUNT {10};
    unsigned int i {11}; //Initialization

    do{
        std::cout << "[" << i << "] : I love C++" << std::endl;
        ++i; //Increment
    }while(i < COUNT); //Test
    return 0;
}
