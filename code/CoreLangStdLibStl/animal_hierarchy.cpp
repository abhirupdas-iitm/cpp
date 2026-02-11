#include <iostream>
#include <string>

class Animal {
public:
    Animal(const std::string& desc) : m_description(desc) {}
    virtual ~Animal() = default; // REQUIRED for dynamic_cast

    virtual void breathe() const {
        std::cout << "Animal::breathe for " << m_description << std::endl;
    }

protected:
    std::string m_description;
};

class Feline : public Animal {
public:
    Feline(const std::string& fur, const std::string& desc)
        : Animal(desc), m_fur_style(fur) {}

    virtual void run() const {
        std::cout << "Feline " << m_description << " is running\n";
    }

    void do_some_feline_thingy() const {
        std::cout << "Doing feline-only behavior\n";
    }

protected:
    std::string m_fur_style;
};

class Dog : public Feline {
public:
    Dog(const std::string& fur, const std::string& desc)
        : Feline(fur, desc) {}

    void bark() const {
        std::cout << "Dog barking: Woof!\n";
    }
};

int main() {
    Animal* animal = new Feline("stripes", "feline1");

    Feline* feline = dynamic_cast<Feline*>(animal);
    if (feline) {
        feline->do_some_feline_thingy();
    }

    delete animal;
    return 0;
}
