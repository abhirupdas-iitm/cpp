#include <iostream>

int main(){

    //Capturing by reference : Working on the original outside value

    int c {42};

    auto func = [&c](){
        std::cout << "Inner value : " << c << std::endl;
    };

    for(size_t i{}; i<5; ++i){
        std::cout << "Outer value : " << c << std::endl;
        func();
        ++c;
    }

}
