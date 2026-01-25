#include <iostream>

int main(){
bool red = false;
bool green {true};
bool yellow {false};
bool police_stop{true};

/*
if green: go
if red, yellow: stop
if green and police_stop: stop
*/

    if (red){
        std::cout << "Stop" << std::endl;
    }
    if (yellow){
        std::cout << "slow down" << std::endl;
    }
    if (green){
        std::cout << "go" << std::endl;
    }

    return 0;
}
