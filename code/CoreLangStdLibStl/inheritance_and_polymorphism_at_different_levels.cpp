#include <iostream>
#include <string>


class Animal {
public:
    Animal(const std::string& name) : m_name(name) {}
    virtual ~Animal() = default;

    virtual void breathe() const {
        std::cout << m_name << " is breathing." << std::endl;
    }

protected:
    std::string m_name;
};


class Feline : public Animal {
public:
    Feline(const std::string& name) : Animal(name) {}

    virtual void run() const {
        std::cout << m_name << " is running." << std::endl;
    }
};

class Bird : public Animal {
public:
    Bird(const std::string& name) : Animal(name) {}

    virtual void fly() const {
        std::cout << m_name << " is flying." << std::endl;
    }
};


class Dog : public Feline {
public:
    Dog(const std::string& color, const std::string& name)
        : Feline(name), m_color(color) {}

    void breathe() const override {
        std::cout << "Dog (" << m_color << ") breathes loudly." << std::endl;
    }

private:
    std::string m_color;
};

class Cat : public Feline {
public:
    Cat(const std::string& pattern, const std::string& name)
        : Feline(name), m_pattern(pattern) {}

    void breathe() const override {
        std::cout << "Cat (" << m_pattern << ") breathes quietly." << std::endl;
    }

private:
    std::string m_pattern;
};

class Pigeon : public Bird {
public:
    Pigeon(const std::string& color, const std::string& name)
        : Bird(name), m_color(color) {}

    void breathe() const override {
        std::cout << "Pigeon (" << m_color << ") breathes softly." << std::endl;
    }

private:
    std::string m_color;
};

class Crow : public Bird {
public:
    Crow(const std::string& color, const std::string& name)
        : Bird(name), m_color(color) {}

    void breathe() const override {
        std::cout << "Crow (" << m_color << ") breathes sharply." << std::endl;
    }

private:
    std::string m_color;
};


int main() {

    Dog dog1("dark gray", "dog1");
    Cat cat1("black stripes", "cat1");
    Pigeon pigeon1("white", "pigeon1");
    Crow crow1("black", "crow1");

    std::cout << "\n--- Animal polymorphism ---\n";
    Animal* animals[] = { &dog1, &cat1, &pigeon1, &crow1 };
    for (const auto* animal : animals) {
        animal->breathe();
    }

    std::cout << "\n--- Feline polymorphism ---\n";
    Feline* felines[] = { &dog1, &cat1 };
    for (const auto* feline : felines) {
        feline->run();
    }

    std::cout << "\n--- Bird polymorphism ---\n";
    Bird* birds[] = { &pigeon1, &crow1 };
    for (const auto* bird : birds) {
        bird->fly();
    }

    return 0;
}
