#include <iostream>

int main(){
    //Declaring pointers
    int * p_number {}; 
    /*
    These can only store an address of a variable of type int (in this case, otherwise
    that of any corresponding data type we want)
    */

    double * p_fractional_number {}; //This can only store the address of a variable of type 'double'

    //Explicitly initialze to nullptr

    int * p_number1 {nullptr};
    int * p_fractional_number1 {nullptr};

    //Printing sizes of different types of pointers
    std::cout << "Size of number pointer : " << sizeof(p_number) << ", size of int : " << sizeof(int) << std::endl;
    std::cout << "Size of fractional_number pointer : " << sizeof(p_fractional_number) << ", size of double : " << sizeof(double) << std::endl;
    std::cout << "Size of number1 pointer : " << sizeof(p_number1) << ", size of int : " << sizeof(int) << std::endl;
    std::cout << "Size of fractional_number1 pointer : " << sizeof(p_fractional_number1) << ", size of double : " << sizeof(double) << std::endl;

    /*
    Position of the '*' symbol doesn't really matter. All of them work the same
    but `int * pointer_name {nullptr}` is the safest way to do so.
    int* p_number2{nullptr};
    int * p_number3{nullptr};
    int  *p_number4{nullptr};
    */

    int * p_number5{}, other_int_var{5};
    int * p_number6{}, other_int_var6{};

    //While the above may work, it is always better to separate out the two statements as shown below:
    int * p_number7{};
    int other_int_var7{}; //This doesn't leave room for any confusion

    //Initializing pointers and assigning them data

    //We know that pointers store addresses of variables
    int int_var {43};
    int * p_int{&int_var}; //The address of operator (&);

    std::cout << "Int var : " << int_var << std::endl;
    std::cout << "p_int (Address in memory) : " << p_int << std::endl;

    //We can also change the address stored in a pointer any time
    int int_var1 {65};

    int var1 = 126;

    p_int = &int_var1; //Assign a different address to the pointer
    std::cout << "p_int {with different address) : " << p_int << std::endl;

    //Dereferencing a pointer:
    int * p_int2 {nullptr};
    int int_data {56};
    p_int2 = &int_data;

    std::cout << "value : " << *p_int2 << std::endl;
    std::cout << "p_int2 (Address in memory) : " << p_int2 << std::endl;
    
    return 0;
}


