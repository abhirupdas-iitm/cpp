#include <iostream>
int main(){
    int int_value{45};
    double double_value{33.65};

    int& reference_to_int_value_1{int_value}; //Assign through initialization
    int& reference_to_int_value_2 = int_value; //Assign through assignment
    double& reference_to_double_value_1{double_value};

    //If we try to declare and initialize in one statement, `int& some_reference;`, an error will be shown

    std::cout << "int value : " << int_value << std::endl;
    std::cout << "double value : " << double_value << std::endl;
    std::cout << std::endl;
    std::cout << "reference_to_int_value1 : " << reference_to_int_value_1 << std::endl;
    std::cout << "reference_to_int_value2 : " << reference_to_int_value_2 << std::endl;
    std::cout << "reference_to_double_value1 : " << reference_to_double_value_1 << std::endl;
    std::cout << std::endl;
    std::cout << "&int value : " << &int_value << std::endl;
    std::cout << "&double value : " << &double_value << std::endl;
    std::cout << std::endl;
    std::cout << "&reference_to_int_value1 : " << &reference_to_int_value_1 << std::endl;
    std::cout << "&reference_to_int_value2 : " << &reference_to_int_value_2 << std::endl;
    std::cout << "&reference_to_double_value1 : " << &reference_to_double_value_1 << std::endl;
    std::cout << std::endl;
    std::cout << "sizeof(int) : " << sizeof(int) << std::endl;
    std::cout << "sizeof(int&) : " << sizeof(int&) << std::endl;
    std::cout << "sizeof(reference_to_int_value1) : " << sizeof(reference_to_int_value_1) << std::endl;

    return 0;
}
