#include <iostream>
#include <iomanip>
#include <cstring>

int main(){
    //More concatenation
    std::cout << std::endl;
    std::cout << "More std::strcat : " << std::endl;

    char * dest1 = new char[30]{'F','i','r','e','l','o','r','d','\0'};
    char * source1 = new char[30]{',','T','h','e','P','h','o','e','n','i','x','K','i','n','g','\0'};

    std::cout << "std::strlen(dest1) : " << std::strlen(dest1) << std::endl;
    std::cout << "std::strlen(source1) : " << std::strlen(source1) << std::endl;

    std::cout << "Concatenating... " << std::endl;
    std::strcat(dest1,source1);

    std::cout << "std::strlen(dest1) : " << std::strlen(dest1) << std::endl;
    std::cout << "dest1 : " << dest1 << std::endl;

    return 0;

}
