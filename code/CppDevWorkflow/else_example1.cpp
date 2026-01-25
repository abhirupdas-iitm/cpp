#include <iostream>

int main(){
    int number1 {55};
    int number2 {60};
    //Using else
    std::cout << std::endl;
    std::cout << "using the else clause : " << std::endl;
    
    bool result = (number1 < number2); //Expression yielding the condition
    if(result == true){
        std::cout << number1 << " is less than " << number2 << std::endl;
    }else{
        std::cout << number1 << " is NOT less than " << number2 << std::endl;
    }

    return 0;

}
