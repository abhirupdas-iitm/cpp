#include <iostream>

int main(){
    int value1;
    int value2;

    std::cout << "Enter value to see postfix in action : ";
    std::cin >> value1;
    std::cout << "Enter value to see prefix in action : ";
    std::cin >> value2;

    //prefix
    std::cout << "The value is (incremented) : " << ++value1 << std::endl; //value is increased before being printed
    std::cout << "The value is (decremented) : " << --value1 << std::endl; //value is same as original because value is decremented before being printed 

    //postfix
    std::cout << "The value is (incrementing) : " << value2++ << std::endl; //value2 is same as being entered because value is incremented after being printed
    std::cout << "The value is (decrementing) : " << value2-- << std::endl; //value2 is not same as original because decrementing will happen later

    return 0; 
}
