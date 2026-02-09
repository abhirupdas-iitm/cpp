#ifndef PLAYER_H
#define PLAYER_H

#include "person.h"
#include <ostream>

class Player : public Person
{
    friend std::ostream& operator<<(std::ostream& out, const Player& player);

public:
    Player() = default;
    Player(const std::string& fullname,
           int age,
           const std::string& address,
           int career_start_year,
           double salary);

    ~Player();

    void play();

private:
    int m_career_start_year {0};
    double m_salary {0.0};
    int m_health_factor {10}; // 0–10
};

#endif // PLAYER_H
