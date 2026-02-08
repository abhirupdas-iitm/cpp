#include <iostream>

int main(){

    //Capturing everything by reference

    int c {42};
    double d {12.1};

    auto func = [&](){
        std::cout << "Inner value c : " << c << std::endl;
        std::cout << "Inner value d : " << d << std::endl;
    };

    for (size_t i{}; i<5; ++i){
        std::cout << "Outer value c : " << c << std::endl;
        std::cout << "Outer value d : " << d << std::endl;
        func();
        ++c;
        d+=0.5;
    }

}
