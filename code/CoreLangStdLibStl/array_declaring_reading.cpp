 #include <iostream>

int main(){
    //Declaring an array
    int scores[10]; //An array storing 10 integers

    //Reading values
    std::cout << std::endl;
    std::cout << "Reading out score values (manually) : " << std::endl;
    std::cout << "Scores[0] : " << scores[0] << std::endl;
    std::cout << "Scores[1] : " << scores[1] << std::endl;
    std::cout << "Scores[2] : " << scores[2] << std::endl;
    std::cout << "Scores[3] : " << scores[3] << std::endl;
    std::cout << "Scores[4] : " << scores[4] << std::endl;
    std::cout << "Scores[5] : " << scores[5] << std::endl;
    std::cout << "Scores[6] : " << scores[6] << std::endl;
    std::cout << "Scores[7] : " << scores[7] << std::endl;
    std::cout << "Scores[8] : " << scores[8] << std::endl;
    std::cout << "Scores[9] : " << scores[9] << std::endl;
    
    std::cout << std::endl;
    std::cout << "Reading out score values (using a loop) : " << std::endl;
    //We can also do this using loops
    for (size_t i{0}; i<10; ++i){
        std::cout << "scores[" << i << "] : " << scores[i] << std::endl;
    }

    return 0;
}
