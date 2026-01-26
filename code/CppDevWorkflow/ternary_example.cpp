#include <iostream>

int main(){
    int max{};

    int a{35};
    int b{20};
    //using if-else way

    std::cout << std::endl;
    std::cout << "using regular if " << std::endl;

    if (a>b){
        max = a;
    }else{
        max = b;
    }

    std::cout << "max : " << max << std::endl;

    //using ternary operator
    max = (a>b) ? a:b;
    
    std::cout << std::endl;
    std::cout << "using ternary operator " << std::endl;

    std::cout << "max : " << max << std::endl;
    
    //ternary initialization 
    std::cout << std::endl;
    std::cout << "speed" << std::endl;
    bool fast = false;

    int speed {fast ? 300:150};
    //from the example below, we can see implicit conversion 
    std::cout << "The speed is : " << speed << std::endl;
    std::cout << std::endl;
    auto max1 = (a>b)? 98.5f : b; //Ternary operator
    std::cout << "max : " << max1 << std::endl;

    return 0;
}
