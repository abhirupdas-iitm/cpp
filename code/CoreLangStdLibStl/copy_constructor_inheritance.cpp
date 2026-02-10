#include <iostream>
#include <string>


class Person {
    friend std::ostream& operator<<(std::ostream& out, const Person& p);

public:
    Person() = default;

    Person(const std::string& fullname, int age, const std::string& address)
        : m_full_name(fullname), m_age(age), m_address(address)
    {
        std::cout << "Person parameterized constructor called\n";
    }

    // Copy constructor
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

std::ostream& operator<<(std::ostream& out, const Person& p)
{
    out << "Person [Name: " << p.m_full_name
        << ", Age: " << p.m_age
        << ", Address: " << p.m_address << "]";
    return out;
}


class Engineer : public Person {
    friend std::ostream& operator<<(std::ostream& out, const Engineer& e);

public:
    Engineer() = default;

    Engineer(const std::string& fullname,
             int age,
             const std::string& address,
             int contracts)
        : Person(fullname, age, address),
          contract_count(contracts)
    {
        std::cout << "Engineer parameterized constructor called\n";
    }

    //Proper copy constructor with inheritance
    Engineer(const Engineer& source)
        : Person(source),                  // <-- base copy constructor
          contract_count(source.contract_count)
    {
        std::cout << "Engineer copy constructor called\n";
    }

    ~Engineer() = default;

private:
    int contract_count{0};
};

std::ostream& operator<<(std::ostream& out, const Engineer& e)
{
    out << static_cast<const Person&>(e)
        << ", Contracts: " << e.contract_count;
    return out;
}


int main()
{
    std::cout << "----- Creating Engineer eng1 -----\n";
    Engineer eng1(
        "Daniel Gray",
        41,
        "Green Sky Oh Blue 33St#75",
        12
    );

    std::cout << "\neng1 : " << eng1 << "\n";

    std::cout << "\n----- Copying Engineer eng2 from eng1 -----\n";
    Engineer eng2(eng1);

    std::cout << "\neng2 : " << eng2 << "\n";

    return 0;
}
