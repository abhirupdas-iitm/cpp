#include <iostream>

int main(){

//Lambda function that takes parameters
    [](double a, double b){
    std::cout << "a + b : " << (a+b) << std::endl;
    }(10.0,5.0);
    
    auto func1 = [](double a, double b){
        std::cout << "a * b : " << (a+b) << std::endl;
    };

    func1(33,34);
    func1(7236781,8132873);
    std::cout << "Done!" << std::endl;

    return 0;

}
