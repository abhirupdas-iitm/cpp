#include <iostream>

int main(){

    //Handling the exception

    /*
    Handling the problem in a way that makes sense for our application. For example, 
    in case the user is trying to allocate memory to store information regarding something
    and it fails, then a proper message should be displayed on the interface level.
    */

    for (size_t i{};i<10000000000; ++i){
        try{
            int * lots_of_ints3 {new int[10000000]};
        }catch (std::exception& ex){
            std::cout << "Caught exception ourselves : " << ex.what() << std::endl;
        }
    }
    return 0;
}
