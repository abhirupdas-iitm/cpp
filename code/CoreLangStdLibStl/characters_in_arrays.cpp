#include <iostream>

int main(){
    //Initialization of character arrays
    char message[6] {'H','e','l','l','o','\0'};
    std::cout << "message : " << message << std::endl;
    std::cout << "size : " << std::size(message) << std::endl;
    std::cout << std::endl;
    char message2[6] {'H','e','l','l','o'};
    std::cout << "message2 : " << message << std::endl;
    std::cout << "size : " << std::size(message2) << std::endl;
    std::cout << std::endl;
    char message3[] {'H','e','l','l','o'}; //This is not a C string, as there is not a null character at the end
    std::cout << "message3 : " << message3 << std::endl;
    std::cout << "size : " << std::size(message3) << std::endl;//May print some garbage value after printing the hello message

    //We can also define a literal C string
    std::cout << std::endl;
    char message4[] {"Hello"};
    /*
    An implicit '\0' character is appended to the end of the string, 
    making it a C string
    */

    std::cout << "message4 : " << message4 << std::endl;
    std::cout << "size : " << std::size(message4) << std::endl;

    //We can even have spaces between characters
    std::cout << std::endl;
    char message5[] {"Hello World!"};
    std::cout << "message5 : " << message5 << std::endl;
    std::cout << "size : " << std::size(message5) << std::endl;

    //We cannot directly print the integers of the integer array. 
    int numbers[] {1,2,3,4,5};
    std::cout << "As you can see below, garbage value has been printed" << std::endl;
    std::cout << "numbers : " << numbers << std::endl;

    return 0;
}
