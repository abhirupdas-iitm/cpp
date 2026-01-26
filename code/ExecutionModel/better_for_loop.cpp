#include <iostream>

int main(){
    const size_t COUNT{10};

    for (size_t i{0}; i<COUNT ; ++i){
        std::cout << i << " : I love C++" << std::endl;
    }
    std::cout << "Loop's done!" << std::endl;

    return 0;

}
