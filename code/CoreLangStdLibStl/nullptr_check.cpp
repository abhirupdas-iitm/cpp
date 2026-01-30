#include <iostream>

int main(){
    //Verbose nullptr check
    int * p_number{}; //Initialized to nullptr

    if (!(p_number==nullptr)){
        std::cout << "p_number points to a valid address : " << p_number << std::endl;
    }else{
        std::cout << "p_number points to an INVALID address." << std::endl;
    }
    return 0;

}
