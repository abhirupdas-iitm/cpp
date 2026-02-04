#include <iostream>
#include <iomanip>
#include <cstring>

int main(){
    //Finding the first occurrence of a character
    std::cout << std::endl;
    std::cout << "std::strchr : " << std::endl;

    //We use std::strchr to find all the characters one by one.

    const char * str {"Try not. Do, or do not. There is no try."};
    char target = 'T';
    const char * result = str;
    int iterations{};

    while ((result = std::strchr(result,target)) != nullptr){
        std::cout << "Found '" << target << "' starting at '" << result << "'\n";
        //Incrementing result, otherwise we will find target at the same location
        ++result;
        ++iterations;
    }
    std::cout << "iterations : " << iterations << std::endl;

    return 0;

}
