#include <iostream>

class Animal {
public:
    virtual void breathe() const {
        std::cout << "Animal breathes\n";
    }
};

class Cat final : public Animal {
public:
    virtual void breathe() const {
        std::cout << "Cat breathes\n";
    }
};

int main() {
    Animal* a = new Cat();
    a->breathe();
    delete a;
}
