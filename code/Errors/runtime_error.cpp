#include <iostream>

int main(){

    int value = 7/0;
    std::cout << "value : " << value << std:endl;
    return 0;
}

/*
Error it will show:
compile_error.cpp: In function 'int main()':
compile_error.cpp:23:18: warning: division by zero [-Wdiv-by-zero]
   23 |     int value = 7/0;
      |                 ~^~
compile_error.cpp:24:44: error: found ':' in nested-name-specifier, expected '::'
   24 |     std::cout << "value : " << value << std:endl;
      |                                            ^
      |                                            ::
*/

}
