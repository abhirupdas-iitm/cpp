#include <iostream>

int main(int argc, char **argv){
    {
        int local_var {33};
        int * local_pt_var = new int;
    }
    //Releasing and Resetting dynamically allocated memory
    int *p_number4{nullptr};
    p_number4 = new int;

    //After all the uses have been made of the pointer, we can release and reset it as well
    delete p_number4;
    p_number4 = nullptr;
    return 0;
}
