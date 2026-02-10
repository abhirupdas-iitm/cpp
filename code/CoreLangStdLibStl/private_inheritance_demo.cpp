#include <iostream>
#include <string>


class Person
{
    friend std::ostream& operator<<(std::ostream& out, const Person& person);

public:
    Person() = default;

    Person(const std::string& fullname, int age, const std::string& address)
        : m_full_name(fullname), m_age(age), m_address(address)
    {
    }

    ~Person() = default;

protected:
    std::string m_full_name {"None"};
    int m_age {0};

private:
    std::string m_address {"None"};
};

std::ostream& operator<<(std::ostream& out, const Person& person)
{
    out << "Person [Name: " << person.m_full_name
        << ", Age: " << person.m_age << "]";
    return out;
}


class Engineer : private Person
{
    friend std::ostream& operator<<(std::ostream& out, const Engineer& eng);

public:
    Engineer()
    {
        m_full_name = "Engineer Name";
        m_age = 40;
        contract_count = 3;
    }

    ~Engineer() = default;

    void build_something()
    {
        std::cout << "Engineer is building something..." << std::endl;
    }

protected:
    int contract_count {0};
};

std::ostream& operator<<(std::ostream& out, const Engineer& eng)
{
    out << "Engineer [Name: " << eng.m_full_name
        << ", Age: " << eng.m_age
        << ", Contracts: " << eng.contract_count << "]";
    return out;
}


class CivilEngineer : public Engineer
{
    friend std::ostream& operator<<(std::ostream& out,
                                     const CivilEngineer& ce);

public:
    CivilEngineer()
    {
        m_speciality = "Road Construction";
        contract_count = 7;   // OK: protected in Engineer
        // m_full_name and m_age are NOT accessible here
    }

    ~CivilEngineer() = default;

    void build_road()
    {
        std::cout << "Civil engineer is building a road..." << std::endl;
    }

private:
    std::string m_speciality {"None"};
};

std::ostream& operator<<(std::ostream& out, const CivilEngineer& ce)
{
    out << "CivilEngineer [Contracts: " << ce.contract_count
        << ", Speciality: " << ce.m_speciality << "]";
    return out;
}


int main()
{
    Engineer eng;
    std::cout << eng << std::endl;
    eng.build_something();

    std::cout << std::endl;

    CivilEngineer civil;
    std::cout << civil << std::endl;
    civil.build_road();

    return 0;
}
