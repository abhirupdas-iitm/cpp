#include <iostream>

int main(){
    //Checking if a character is a digit
    std::cout << std::endl;
    std::cout << "std::isdigit : " << std::endl;

    char statement[] {"Mr Hamilton owns 221 cows. That's a lot of cows! The kid exclaimed."};
    std::cout << "statement : " << statement << std::endl;

    int digit_count{};

    for (auto character : statement){
        if (std::isdigit(character)){
            std::cout << "Found digit : " << character << std::endl;
            ++digit_count;
        }
    }
    std::cout << "Found " << digit_count << " digits in the same statement string" << std::endl;

    return 0;

}
