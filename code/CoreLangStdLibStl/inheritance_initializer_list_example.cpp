#include <iostream>
#include <string>

class Person {
    friend std::ostream& operator<<(std::ostream& out, const Person& person);

public:
    Person() = default;

    Person(const std::string& fullname, int age, const std::string& address)
        : m_fullname(fullname), m_age(age), m_address(address) {}

    virtual ~Person() = default;

protected:
    std::string m_fullname{"None"};
    int m_age{0};

private:
    std::string m_address{"None"};
};

std::ostream& operator<<(std::ostream& out, const Person& person) {
    out << "Person [Name: " << person.m_fullname
        << ", Age: " << person.m_age
        << ", Address: " << person.m_address << "]";
    return out;
}


class Engineer : public Person {
    friend std::ostream& operator<<(std::ostream& out, const Engineer& eng);

public:
    Engineer() = default;

    Engineer(const std::string& fullname, int age,
             const std::string& address, int contract_count)
        : Person(fullname, age, address),
          m_contract_count(contract_count) {}

    virtual ~Engineer() = default;

protected:
    int m_contract_count{0};
};

std::ostream& operator<<(std::ostream& out, const Engineer& eng) {
    out << "Engineer [Name: " << eng.m_fullname
        << ", Age: " << eng.m_age
        << ", Contracts: " << eng.m_contract_count << "]";
    return out;
}


class CivilEngineer : public Engineer {
    friend std::ostream& operator<<(std::ostream& out, const CivilEngineer& civ);

public:
    CivilEngineer() = default;

    CivilEngineer(const std::string& fullname, int age,
                  const std::string& address,
                  int contract_count,
                  const std::string& specialty)
        : Engineer(fullname, age, address, contract_count),
          m_specialty(specialty) {}

    ~CivilEngineer() = default;

private:
    std::string m_specialty{"None"};
};

std::ostream& operator<<(std::ostream& out, const CivilEngineer& civ) {
    out << "CivilEngineer [Name: " << civ.m_fullname
        << ", Age: " << civ.m_age
        << ", Contracts: " << civ.m_contract_count
        << ", Specialty: " << civ.m_specialty << "]";
    return out;
}


int main() {

    Person person1("John Snow", 27, "Winterfell Cold 33St#75");
    std::cout << "person1 : " << person1 << std::endl;

    std::cout << "------------------------" << std::endl;

    Engineer eng1("Daniel Gray", 41, "Green Sky Oh Blue 33St#75", 12);
    std::cout << "eng1 : " << eng1 << std::endl;

    std::cout << "------------------------" << std::endl;

    CivilEngineer civil_eng1(
        "John Travolta", 51,
        "Tiny Dog 42St#89",
        31,
        "Road Strength"
    );
    std::cout << "civil_eng1 : " << civil_eng1 << std::endl;

    return 0;
}
