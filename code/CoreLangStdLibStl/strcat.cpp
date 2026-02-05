#include <iostream>
#include <iomanip>
#include <cstring>

int main(){
    //Concatenation
    std::cout << std::endl;
    std::cout << "std::strcat : " << std::endl;

    char dest[50] = "Hello";
    char src[50] = "World";
    std::strcat(dest,src);
    std::strcat(dest, "Goodbye, World!");
    std::cout << "dest : " << dest << std::endl;

    return 0;

}
