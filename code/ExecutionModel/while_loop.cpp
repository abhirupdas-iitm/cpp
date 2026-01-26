#include <iostream>

int main(){
    const unsigned int COUNT {10};

    unsigned int i {0};

    while (i < COUNT){
        std::cout << "I love C++" << std::endl;
        ++i;
    }
    std::cout << "Loop's done!" << std::endl;
    return 0;
}
