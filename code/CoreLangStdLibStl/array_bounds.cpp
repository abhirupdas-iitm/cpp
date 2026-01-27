#include <iostream>

int main(){
    int numbers[] {1,2,3,4,5,6,7,8,9,0};

    //Reading beyond bounds: This will read garbage values or crash our program
    std::cout << "Below, a garbage value is printed" << std::endl;
    std::cout << "numbers[12] : " << numbers[12] << std::endl;

    /*
    Writing beyond bounds. The compiler allows it but you don't own the memory index at 12
    , so other programs may modify it and our program may read bogus data at a later time.
    This can even corrupt data used by other parts of our program.
    */
    std::cout << std::endl;
    numbers[12] = 1000;
    std::cout << "After assigning a value at that specific index, the assigned value is printed" << std::endl;
    std::cout << "numbers[12] : " << numbers[12] << std::endl;
    
    return 0;
}
