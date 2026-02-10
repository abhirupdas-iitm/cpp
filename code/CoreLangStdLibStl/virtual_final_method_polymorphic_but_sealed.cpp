#include <iostream>

class Bird {
public:
    virtual void fly() const final {
        std::cout << "Bird flies\n";
    }
};

/*
Illegal override
class Crow : public Bird {
public:
    void fly() const override {}
};
*/

int main() {
    Bird b;
    b.fly();
}
