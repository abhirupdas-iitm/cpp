#include <iostream>

int main(){
    int * p_number {new int{67}}; //Points to some address, let's call that address1
    //Should delete and reset here

    int number{55}; //lives at address2

    p_number = &number;
    /*
    Now p_number points to address2, but address1 is still in use by our program. But
    our program has lost access to that memory location and we have no way left to 
    refer to it. This is called memory leak.
    */

    //Double Allocation
    int *p_number1 {new int{55}};

    //Using the pointer, should delete and reset here
    p_number1 = new int{44}; //memory with int{55} leaked.

    return 0;
}
