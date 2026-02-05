#include <iostream>
#include <iomanip>
#include <cstring>

int main(){
    //Finding last occurrence

    std::cout << std::endl;
    std::cout << "std::strrchr : " << std::endl;

    char input[] = "/home/Admin/hello.cpp";
    char * output = std::strrchr(input, '/');
    if(output)
        std::cout << output+1 << std::endl; 
    /*
    +1 because we want to start printing the past 
    character found by std::strrchr
    */

    return 0;

}
