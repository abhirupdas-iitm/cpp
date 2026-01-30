#include <iostream>

int main(){
    //std::nothrow : ideal if we don't want exceptions thrown when `new` fails
    for (size_t i{}; i <10000000000; ++i){
        int * lots_of_ints4 {new(std::nothrow) int[10000000]};
        if (lots_of_ints4 == nullptr){
    /*
    We should not try to dereference and use lots_of_ints4 here. We will get undefined
    behaviour. No memory has been really allocated here. It will fail and return 
    nullptr because of the std::nothrow configuration
    */
            std::cout << "Memory Allocation Failed" << std::endl;
        }else{
            std::cout << "Memory Allocation Succeeded" << std::endl;
        }
    }
    return 0;
}
