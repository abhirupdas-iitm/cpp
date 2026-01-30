#include <iostream>

int main(){
    size_t size{10};

    //Different ways to declare an array dynamically and ways to show how they are initialized
    double * p_salaries {new double[size]}; //salaries array will contain garbage values

    int * p_students {new(std::nothrow) int[size]{} }; // All values initialized to 0

    double * p_scores {new(std::nothrow) double[size]{1,2,3,4,5}};
    /*
    Allocating memory space for an array of size 'double vars'. First 5 will be 
    initialized with 1,2,3,4,5 and the rest will be initialized with 0 as usual
    */

    //nullptr check and the use of the allocated array
    if(p_scores){
        //Print out elements. Can use regular array access notation, or pointer arithmetic
        for (size_t i{}; i< size; ++i){
            std::cout << "value : " << p_scores[i] << " : " << *(p_scores + i) << std::endl;
        }
    }

    //Releasing memory [Array version]

    delete[] p_scores;
    p_scores=nullptr;

    delete[] p_students;
    p_students=nullptr;

    delete[] p_salaries;
    p_salaries=nullptr;

    return 0;

}
