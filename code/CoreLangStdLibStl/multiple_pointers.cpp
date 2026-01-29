#include <iostream>

int main(){
    //Casde 3 : Multiple pointers pointing to the same address
    std::cout << std::endl;
    std::cout << "Case 3 : Multiple pointers pointing to the same address : " << std::endl;

    int *p_number3 {new int{33}};
    int *p_number4 {p_number3};

    std::cout << std::endl;
    std::cout << "p_number3 - " << p_number3 << " - " << *p_number3 << std::endl;
    std::cout << "p_number4 - " << p_number4 << " - " << *p_number4 << std::endl;

    //Deleting p_number3;

    //p_number4 points to deleted memory. Dereferencing it will lead to
    //undefined behaviour : Crash/garbage or whatever 
    std::cout << std::endl;
    std::cout << "p_number4 (after deleting p_number3) - " << p_number4 << " - " << *p_number4 << std::endl;

    return 0;
}
