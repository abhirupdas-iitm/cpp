#include <iostream>

int main(){
    //Tools
    const int Pen {10};
    const int Marker {20};
    const int Eraser {30};
    const int Rectangle {40};
    const int Circle {50};
    const int Ellipse {60};
    int tool {Pen};
    switch (tool){
        case Pen: {
            std::cout << "Active tool is pen" << std::endl;
        }
        break;
        case Marker: {
            std::cout << "Active tool is Marker" << std::endl;
        }
        break;
        default: {
            std::cout << "Can't match any tool" << std::endl;
        }
    }
    /*
    not using the break statement will cause a logical error called 'fallthrough' where all cases
    get executed, ignoring the conditional programming altogether.
    */
    return 0;
}
