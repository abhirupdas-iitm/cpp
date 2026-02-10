#include <iostream>
#include <string>


class Person
{
public:
    Person() = default;

    Person(const std::string& fullname, int age, const std::string& address)
        : m_full_name(fullname), m_age(age), m_address(address)
    {
    }

    std::string get_full_name() const
    {
        return m_full_name;
    }

    int get_age() const
    {
        return m_age;
    }

    std::string get_address() const
    {
        return m_address;
    }

public:
    std::string m_full_name {"None"};

protected:
    int m_age {0};

private:
    std::string m_address {"None"};
};


class Engineer : private Person
{
public:
    Engineer()
        : Person("Alice Engineer", 35, "Hidden Address")
    {
        contract_count = 5;
    }

    // ---- Resurrection zone ----

protected:
    // Resurrect base-class functions as protected
    using Person::get_full_name;
    using Person::get_age;
    using Person::get_address;

public:
    // Resurrect a data member as public
    using Person::m_full_name;

protected:
    int contract_count {0};
};


int main()
{
    Engineer eng;

    // m_full_name was resurrected as public
    std::cout << "Name        : " << eng.m_full_name << std::endl;

    // These are NOT accessible (still protected)
    // eng.get_age();        // ❌ compile error
    // eng.get_address();    // ❌ compile error

    std::cout << "Program ran successfully." << std::endl;
    return 0;
}
