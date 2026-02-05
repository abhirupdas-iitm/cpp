#include <iostream>
#include <iomanip>
#include <cstring>

int main(){
    /*
    std::strncpy : Copy n characters from src to dest - signature :
    char * strncpy (char * dest, const char *src, std::size_t count);
    */

    std::cout << std::endl;
    std::cout << "std::strncpy : " << std::endl;
    const char * source4 = "Hello";
    char dest4[] = {'a','b','c','d','e','f','\0'};

    /*
    We have to put the terminating null character
    if we want to print
    */

    std::cout << "dest4 : " << dest4 << std::endl;

    std::cout << "Copying..." << std::endl;
    std::strncpy(dest4,source4,5);

    std::cout << "dest4 : " << dest4 << std::endl;

    return 0;

}
