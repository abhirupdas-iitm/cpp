#include <iostream>
#include <vector>

class Animal {
public:
    virtual void speak() const = 0;
    virtual ~Animal() = default;
};

class Dog final : public Animal {
public:
    void speak() const override {
        std::cout << "Dog barks\n";
    }
};

class Cat final : public Animal {
public:
    void speak() const override {
        std::cout << "Cat meows\n";
    }
};

int main() {
    std::vector<Animal*> animals {
        new Dog(),
        new Cat()
    };

    for (const auto& a : animals) {
        a->speak();
        delete a;
    }
}
