#include <iostream>

void function_name(){
    //Operations

    //return return_type
}

/*
Function that takes a single parameter, 
and doesn't give back the result explicitly
*/

void enter_bar(int age){
    if(age > 18){
        std::cout << "You're " << age << " years old, Please proceed." << std::endl;
    }else{
        std::cout << "Sorry, you're too young for this. No offense! " << std::endl;
    }
}

/*
Function that takes multiple parameters and 
returns the result of the computation
*/

int max(int a, int b){
    if(a>b)
        return a;
    else
        return b;
}

//Function that doesn't take parameters and returns nothing
void say_hello(){
    std::cout << "Hello there" << std::endl;
    return; //You could omit this return statement for functions returning void
}

//Function that takes no parameters and return something
int lucky_number(){
    return 99;
}

int main(int argc, char **argv)
{
    //Declaring and using functions.
    int a_value {14};
    int b_value {10};

    int a {33};
    int b {41}; //Show that parameters and arguments can have the same name

    std::cout << "Calling the enter_bar function : " << std::endl;
    enter_bar (22); //Function call

    int maximum_number {max(a_value,b_value)};
    /*
    Function call - This can store the return value
    in a variable and we can use that later on 
    */

    std::cout << "max(" << a_value << "," << b_value << ") : " << maximum_number << std::endl;

    //Direct Function Call
    std::cout << "max(" << a << "," << b_value << ") : " << max(a,b) << std::endl;

    std::cout << "Calling say_hello method : " << std::endl;
    say_hello(); // Function call
    return 0;

}
