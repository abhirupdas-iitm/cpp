#include <iostream>
/*
while if statements haven't been taught yet, understanding the concept of 
boolean wouldn't have easy in an abstract way
*/
int main(){
    bool red_light {true};
    bool green_light {false};

    if (red_light == true){
        std::cout << "Stop!" << std::endl;
    }else{
        std::cout << "Go through!" << std::endl;
    }
    
    return 0;
}
