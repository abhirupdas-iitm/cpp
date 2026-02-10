#include <iostream>
#include <string>

class Feline {
public:
    virtual void sound() const {
        std::cout << "Feline sound\n";
    }
};

class Cat final : public Feline {
public:
    void sound() const override {
        std::cout << "Cat meows\n";
    }
};

int main() {
    Feline* f = new Cat();
    f->sound(); // Dynamic binding works
    delete f;
}
