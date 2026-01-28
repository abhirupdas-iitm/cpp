#include <iostream>

int main(){
    /*
    We can use normal pointer to char like we've been doing for double, int
    and anything else really.
    */

    char * p_char_var {nullptr};
    char char_var {'A'};

    p_char_var = &char_var;

    std::cout << "The value stored in p_char_var is : " << * p_char_var << std::endl;

    char char_var1 {'C'};
    p_char_var = &char_var1;

    std::cout << "The value stored in p_char_var is : " << * p_char_var << std::endl;

    /*
    Pointer to char can also do something special. 
    You can initialize with a string literal : C-String
    */
 
    const char * p_message {"Hello World!"};
    std::cout << * p_message << std::endl;

    return 0;
}

