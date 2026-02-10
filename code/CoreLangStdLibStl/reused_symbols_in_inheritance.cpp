#include <iostream>


class Parent {
public:
    Parent() = default;

    Parent(int value) : m_var(value) {}

    void print_var() const {
        std::cout << "Parent::m_var = " << m_var << std::endl;
    }

protected:
    int m_var{0};
};


class Child : public Parent {
public:
    Child(int value) : m_var(value) {}  // initializes CHILD's m_var only

    // This hides Parent::print_var()
    void print_var() const {
        std::cout << "Child::m_var = " << m_var << std::endl;
    }

    void show_values() const {
        std::cout << "Child::m_var  = " << m_var << std::endl;
        std::cout << "Parent::m_var = " << Parent::m_var << std::endl;
    }

private:
    int m_var{0}; // hides Parent::m_var
};


int main()
{
    Child child(33);

    // Calls Child::print_var()
    child.print_var();

    // Explicitly call Parent::print_var()
    child.Parent::print_var();

    std::cout << "--------" << std::endl;

    // Show both variables
    child.show_values();

    return 0;
}
