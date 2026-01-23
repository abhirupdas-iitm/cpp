#include <iostream>

int main(){
    int num1;
    int num2;
    int num3;
    int num4;

    std::cout << "Enter number 1 to which you would like to add 10 to it : " << std::endl;
    std::cin >> num1;

    std::cout << "Enter number 2 from which you would like to subtract 7 : " << std::endl;
    std::cin >> num2;

    std::cout << "Enter number 3 which you would like to get multiplied by 5 times : " << std::endl;
    std::cin >> num3;

    std::cout << "Enter number 4 which you would like to get divided by 17 : " << std::endl;
    std::cin >> num4;

    num1+=10;
    num2-=7;
    num3*=5;
    num4/=17;

    std::cout << "New value of number 1 : " << num1 << std::endl;
    std::cout << "New value of number 2 : " << num2 << std::endl;
    std::cout << "New value of number 3 : " << num3 << std::endl;
    std::cout << "New value of number 4 : " << num4 << std::endl; 

    return 0;

}
