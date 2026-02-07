#include <iostream>
#include <string_view>

int max_value(int a, int b){
    return (a > b) ? a : b;
}

double max_value(double a, double b){
    return (a > b) ? a : b;
}

std::string_view max_value(std::string_view a, std::string_view b){
    return (a > b) ? a : b;
}

int main(){
    std::cout << max_value(3, 7) << std::endl;
    std::cout << max_value(2.5, 1.4) << std::endl;
    std::cout << max_value("apple", "banana") << std::endl;
}

