#include <iostream>

int main(){
    //Checking if a character is blank
    std::cout << std::endl;
    std::cout << "std::isblank : " << std::endl;
    char message[] {"Hello there. How are you doing? The sun is shining."};
    std::cout << "message : " << message << std::endl;

    //Finding and printing plant index
    int blank_count{};
    for (size_t i{0}; i<std::size(message); ++i){
        //std::cout << "Value : " << message[i] << std::endl;
        if (std::isblank(message[i])){
            std::cout << "Found a blank character at index : [" << i << "]" << std::endl;
            ++blank_count;
        }
    }
    std::cout << "In total we found " << blank_count << " blank characters." << std::endl;

    return 0;

}
