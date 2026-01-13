#include <iostream>
#include <compare>

int main() {
    auto cmp = 10 <=> 20;

    if (cmp < 0)
        std::cout << "10 is less than 20\n";
    else if (cmp > 0)
        std::cout << "10 is greater than 20\n";
    else
        std::cout << "10 is equal to 20\n";

    return 0;
}

