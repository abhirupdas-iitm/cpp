#include <iostream>

int main(){
    //Turning a character to lowercase using the std::tolower() function
    std::cout << std::endl;
    std::cout << "std::tolower and std::toupper: " << std::endl;
    char original_str[] {"Home. The feeling of belonging"};
    char dest_str[std::size(original_str)];

    //Turning this to uppercase. Changing the array in place
    for (size_t i{}; i < std::size(original_str); ++i){
        dest_str[i] = std::toupper(original_str[i]);
    }

    std::cout << "Original string : " << original_str << std::endl;
    std::cout << "Uppercase string : " << dest_str << std::endl;


    //Turning this to lowercase. Changing the array in place
    for (size_t i{}; i < std::size(original_str); ++i){
        dest_str[i] = std::tolower(original_str[i]);
    }

    std::cout << "Lowercase string : " << dest_str << std::endl;

    return 0;

}
