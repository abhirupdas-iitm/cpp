#include <iostream>

int main(){
    //Checking if character is lowercase or uppercase
    std::cout << "std::islower and std::isupper : " << std::endl;

    std::cout << std::endl;
    char thought[] {"The C++ Programming Language is one of the most used ones on the planet"};
    int lowercase_count{};
    int uppercase_count{};

    //Printing the original string for ease of comparison on the terminal
    std::cout << "Original string : " << thought << std::endl;

    for (auto character : thought){
        if (std::islower(character)){
            std::cout << " " << character;
            ++lowercase_count;
        }
        if (std::isupper(character)){
            std::cout << " " << character;
            ++uppercase_count;
        }
    }
    std::cout << std::endl;
    std::cout << "Found " << lowercase_count << " lowercase characters and " << uppercase_count << " uppercase characters." << std::endl;

    return 0;

}
