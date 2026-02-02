#include <iostream>

int main(){
    std::cout << std::endl;
    std::cout << "Non const reference : " << std::endl;
    int age {27};
    int & ref_age{age};

    //const reference

    std::cout << std::endl;
    std::cout << "Const references : " << std::endl;
    age = 30;
    const int& const_ref_age{age};

    std::cout << "age : " << age << std::endl;
    std::cout << "const_ref_age : " << const_ref_age << std::endl;

    return 0;

}
