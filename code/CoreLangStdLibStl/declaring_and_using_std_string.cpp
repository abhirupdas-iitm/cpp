#include <iostream>
#include <iomanip>
#include <cstring>

int main(){
    std::string full_name; //Empty string
    std::string planet {"Earth, where the sky is blue"}; // Initializing with a string literal
    std::string preferred_planet {planet}; //Initializing with other existing string
    std::string message {"Hello there!",5};
    /*
    Initializing with part of a string literal.
    In this case, contains 'hello'.
    */

    std::string weird_message(4,'e'); 
    /*
    Initializing with multiple copies of a char, where in 
    this case, contains 'eeee'
    */

    std::string greeting {"Hello World"};
    std::string saying_hello {greeting,6,5}; 

    /*
    Initializing with part of an existing std::string
    starting at index 6, taking 5 characters:
    In this case, it will contain 'World'
    */

    std::cout << "full_name : " << full_name << std::endl;
    std::cout << "planet : " << planet << std::endl;
    std::cout << "preferred_planet : " << preferred_planet << std::endl;
    std::cout << "message : " << message << std::endl;
    std::cout << "weird_message : " << weird_message << std::endl;
    std::cout << "greeting : " << greeting << std::endl;
    std::cout << "saying_hello : " << saying_hello << std::endl;

    return 0;

}
