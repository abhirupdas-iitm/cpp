#include <iostream>

int main(){
    //Compact nullptr check
    int * p_number{}; //Initialized to null pointer
    if (p_number){
        std::cout << "p_number points to a VALID address : " << p_number << std::endl;
    }
    else{
        std::cout << "p_number points to an INVALID address." << std::endl;
    }
    return 0;
}
