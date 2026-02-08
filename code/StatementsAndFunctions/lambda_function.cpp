#include <iostream>

int main()
{

    auto func = [](){
        std::cout << "Hello World!" << std::endl;
    };
    func();

    std::cout << "Done!" << std::endl;

    return 0;

}
