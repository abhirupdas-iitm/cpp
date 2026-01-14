#include <iostream>

int main(){

    //compile time error
    std::cout << "Hello World!" << std::endl
    return 0;
 
/*
Error that will be shown:
$ gcc -std=c++20 compile_error.cpp -o compile_error.exe
compile_error.cpp: In function 'int main()':
compile_error.cpp:6:45: error: expected ';' before 'return'
    6 |     std::cout << "Hello World!" << std::endl
      |                                             ^
      |                                             ;
    7 |     return 0;
      |     ~~~~~~
*/
}		
