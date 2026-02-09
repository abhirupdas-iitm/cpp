#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <ostream>

class Person
{
    friend std::ostream& operator<<(std::ostream& out, const Person& person);

public:
    Person() = default;
    Person(const std::string& fullname, int age, const std::string& address);
    ~Person();

    // Getters
    std::string get_full_name() const;
    int get_age() const;
    std::string get_address() const;

protected:
    std::string m_full_name {"None"};
    int m_age {0};

private:
    std::string m_address {"None"};
};

#endif // PERSON_H
