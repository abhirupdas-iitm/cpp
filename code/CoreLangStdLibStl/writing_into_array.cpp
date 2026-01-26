#include <iostream>

int main(){
    int scores[10]; //An array storing 10 integers

    //Writing data in an array
    scores[0] = 20;
    scores[1] = 21;
    scores[2] = 22;

    //Writing out of bounds. BAD!
    scores[22] = 300;

    std::cout << std::endl;
    std::cout << "Manually writing data in array : " << std::endl;
    for( size_t i{0}; i<10; ++i){
        std::cout << "scores[" << i << "] : " << scores[i] << std::endl;
    }

    return 0;

}
