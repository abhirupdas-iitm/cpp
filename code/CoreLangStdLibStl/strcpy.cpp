#include <iostream>
#include <iomanip>
#include <cstring>

int main(){
    //std::strcpy - signature : char * strcpy (char * dest, const char * src);
    std::cout << std::endl;
    std::cout << "std::strcpy : " << std::endl;
    const char * source3 = "C++ is a multi-purpose programming language.";
    char * dest3 = new char[std::strlen(source3)+1];
    /*
    +1 for the null character, and it contains
    garbage data- and isn't initialized either
    */ 

    std::strcpy(dest3,source3);

    std::cout << "sizeof(dest3) : " << sizeof(dest3) << std::endl;
    std::cout << "std::strlen(dest3) : " << std::strlen(dest3) << std::endl;
    std::cout << "dest3 : " << dest3 << std::endl;

    return 0;

}
