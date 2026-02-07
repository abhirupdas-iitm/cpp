#include <iostream>


//Variable : Declaration and definition
double weight {};

double add(double a, double b){
    return a+b;
}

struct Point
{
    double m_x;
    double m_y;
};

int main(){

    double result = add(10,20);
    std::cout << "result : " << result << std::endl;

    return 0;

}
