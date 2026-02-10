#include <iostream>
#include <string>


class Person {
public:
    Person() {
        std::cout << "Person constructor called\n";
    }

    virtual ~Person() {
        std::cout << "Person destructor called\n";
    }
};


class Engineer : public Person {
public:
    Engineer() {
        std::cout << "Engineer constructor called\n";
    }

    ~Engineer() override {
        std::cout << "Engineer destructor called\n";
    }
};


class CivilEngineer : public Engineer {
public:
    CivilEngineer() {
        std::cout << "CivilEngineer constructor called\n";
    }

    ~CivilEngineer() override {
        std::cout << "CivilEngineer destructor called\n";
    }
};


int main()
{
    std::cout << "----- Creating CivilEngineer object -----\n";
    CivilEngineer civil_eng1;

    std::cout << "\n----- Leaving scope (destructors run) -----\n";
    return 0;
}
