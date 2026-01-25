#include <iostream>

int main(){
    bool green {false};
    std::cout << std::endl;
    std::cout << "Police officer stops(verbose)" << std::endl;
    bool police_stop {false};
    if(green){
        if(police_stop){
            std::cout << "Stop" << std::endl;
        }
        else{
            std::cout << "Gp" << std::endl;
        }
    }
    return 0;
    //there is another way to implement a nested-if statement
    std::cout << std::endl;
    std::cout << "Police officer stops(less verbose)" << std::endl;
    if(green and !police_stop){
        std::cout << "Go" << std::endl;
    }else{
        std::cout << "Stop" << std::endl;
    }
    return 0;
}


