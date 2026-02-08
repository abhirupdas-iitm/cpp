#include <iostream>

int main(){

    //Capturing by value : What we have in the lambda function is a copy
    int c {42};

    auto func = [c](){
        std::cout << "Inner value : " << c << std::endl;
    };

    for (size_t i{}; i<5; ++i){
        std::cout << "Outer value : " << c << std::endl;
        func();
        ++c;
    }


}
