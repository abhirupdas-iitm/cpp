#include <iostream>
#include "person.h"
#include "player.h"

int main()
{
    Person person1("Daniel Gray", 27, "Blue Sky St 233 #56");
    std::cout << person1 << std::endl;

    std::cout << std::endl;

    Player player1("Alice Brown", 30, "Green Ave 42", 2015, 75000.0);
    player1.play();
    std::cout << player1 << std::endl;

    return 0;
}
