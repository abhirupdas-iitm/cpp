#include <iostream>

int main(){
    /*
    Initializing the pointer with dynamic memory. Dynamically allocating memory at run time and making 
    a pointer point to it. 
    */

    int * p_number4{nullptr};
    p_number4 = new int;

    /*
    From the above snippet, we are dynamically allocating space for a single int on the heap. This memory belongs to 
    our program now on. The system can no longer use it for anything else, until we return it. after this line executes,
    we will have a valid memory location allocated. The size of the allocated memory will be such that it can store the type 
    pointed to  by the pointer.
    */

    *p_number4 = 77; //Writing into dynamically allocated memory
    std::cout << std::endl;
    std::cout << "Dynamically allocating memory : " << std::endl;
    std::cout << "*p_number4 : " << *p_number4 << std::endl;

    //It is also possible to initialize the pointer with a valid address upon declaration. Not with a `nullptr`
    std::cout << std::endl;

    int * p_number5 {new int}; //Memory location contains junk value
    int *p_number6 {new int (22)}; // using direct initialization
    int * p_number7 {new int {23}}; // using uniform initialization

    std::cout << std::endl;
    std::cout << "Initializing with valid memory address at declaration : " << std::endl;
    std::cout << "p_number5 : " << p_number5 << std::endl;
    std::cout << "*p_number5 : " << *p_number5 << std::endl;
    std::cout << std::endl;
    std::cout << "p_number6 : " << p_number6 << std::endl;
    std::cout << "*p_number6 : " << *p_number6 << std::endl;
    std::cout << std::endl;
    std::cout << "p_number7 : " << p_number7 << std::endl;
    std::cout << "*p_number7 : " << *p_number7 << std::endl;

    //Remembering to release the memory
    delete p_number5;
    p_number5 = nullptr;

    delete p_number6;
    p_number6 = nullptr;

    delete p_number7;
    p_number7 = nullptr;

    return 0;
}
