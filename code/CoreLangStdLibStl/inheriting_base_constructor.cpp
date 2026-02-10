#include <iostream>
#include <string>


class Person {
    friend std::ostream& operator<<(std::ostream& out, const Person& person);

public:
    Person() = default;

    Person(const std::string& fullname, int age, const std::string& address)
        : m_full_name(fullname), m_age(age), m_address(address)
    {
        std::cout << "Person parameterized constructor called\n";
    }

    Person(const Person& source)
        : m_full_name(source.m_full_name),
          m_age(source.m_age),
          m_address(source.m_address)
    {
        std::cout << "Person copy constructor called\n";
    }

    ~Person() = default;

protected:
    std::string m_full_name{"None"};
    int m_age{0};

private:
    std::string m_address{"None"};
};

std::ostream& operator<<(std::ostream& out, const Person& person)
{
    out << "Person [Name: " << person.m_full_name
        << ", Age: " << person.m_age
        << ", Address: " << person.m_address << "]";
    return out;
}


class Engineer : public Person {
    friend std::ostream& operator<<(std::ostream& out, const Engineer& eng);

public:
    // 🔑 Inherit ALL Person constructors
    using Person::Person;

    // Copy constructor (still needed explicitly)
    Engineer(const Engineer& source)
        : Person(source), contract_count(source.contract_count)
    {
        std::cout << "Engineer copy constructor called\n";
    }

    ~Engineer() = default;

protected:
    int contract_count{999999}; // default value
};

std::ostream& operator<<(std::ostream& out, const Engineer& eng)
{
    out << static_cast<const Person&>(eng)
        << ", Contracts: " << eng.contract_count;
    return out;
}


int main()
{
    std::cout << "----- Construct Engineer using inherited constructor -----\n";
    Engineer eng1("Daniel Gray", 41, "Green Sky Oh Blue 33St#75");
    std::cout << "eng1 : " << eng1 << "\n\n";

    std::cout << "----- Copy Engineer eng2 from eng1 -----\n";
    Engineer eng2(eng1);
    std::cout << "eng2 : " << eng2 << "\n";

    return 0;
}
