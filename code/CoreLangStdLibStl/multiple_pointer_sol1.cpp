#include <iostream>

int main(){
    //Solution 1 : Initializing our pointers immediately upon declaration
    std::cout << std::endl;
    std::cout << "Solution 1 : " << std::endl;
    int *p_number5{};
    int *p_number6{new int{56}};

    //check for nullptr before use
    if(p_number6!=nullptr){
        std::cout << "p_number6 : " << *p_number6 << std::endl;
    }

    return 0;
}
