#include <iostream>
int main(){
    //Declare and initialize at the same time
    std::cout << std::endl;
    std::cout << "Declaring and initializing at the same time : " << std::endl;

    double salaries[5] {12.7,7.5,13.2,8.1,9.3};

    for (size_t i{0}; i<5; ++i){
        std::cout << "salary[" << i << "] : " << salaries[i] << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Declaring and initialization at the same time without declaring the size of the array : " << std::endl;
    double ages[] {23,31,45,86,41};

    for (size_t i{0}; i< std::size(ages); ++i){
        std::cout << "ages[" << i <<  "] : " << ages[i] << std::endl;
    }
    return 0;
}
