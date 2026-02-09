#include "player.h"
#include <iostream>

Player::Player(const std::string& fullname,
               int age,
               const std::string& address,
               int career_start_year,
               double salary)
    : Person(fullname, age, address),
      m_career_start_year(career_start_year),
      m_salary(salary)
{
}

Player::~Player() = default;

void Player::play()
{
    // Accessing inherited protected members
    m_full_name = "John Snow";
    m_age = 55;
}

std::ostream& operator<<(std::ostream& out, const Player& player)
{
    out << static_cast<const Person&>(player)
        << ", Career start year: " << player.m_career_start_year
        << ", Salary: " << player.m_salary
        << ", Health factor: " << player.m_health_factor;
    return out;
}
