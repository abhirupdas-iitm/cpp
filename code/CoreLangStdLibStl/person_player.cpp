#include <iostream>
#include <string>

class Person
{
    friend std::ostream& operator<<(std::ostream& out, const Person& person);

public:
    Person() = default;

    Person(const std::string& first_name_param,
           const std::string& last_name_param)
        : first_name(first_name_param),
          last_name(last_name_param)
    {
    }

    ~Person() = default;

protected:
    std::string first_name {"Mysterious"};
    std::string last_name  {"Person"};
};

std::ostream& operator<<(std::ostream& out, const Person& person)
{
    out << person.first_name << " " << person.last_name;
    return out;
}


class Player : public Person
{
    friend std::ostream& operator<<(std::ostream& out, const Player& player);

public:
    Player() = default;

    Player(const std::string& game_param)
        : m_game(game_param)
    {
    }

    ~Player() = default;

private:
    std::string m_game {"None"};
};

std::ostream& operator<<(std::ostream& out, const Player& player)
{
    out << static_cast<const Person&>(player)
        << " plays " << player.m_game;
    return out;
}


int main()
{
    Person p1("John", "Doe");
    std::cout << p1 << std::endl;

    Player pl1("Chess");
    std::cout << pl1 << std::endl;

    return 0;
}
