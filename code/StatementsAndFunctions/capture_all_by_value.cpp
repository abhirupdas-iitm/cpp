#include <iostream>

int main(){

    //Capturing everything by value

    int c{42};

    auto func = [=](){
        std::cout << "Inner value : " << c << std::endl;
    };

    for (size_t i{}; i<5; ++i){
        std::cout << "Outer value : " << c << std::endl;
        func();
        ++c;
    }


}
