#include <iostream>
#include <string>

class Animal {
public:
    virtual void run() const {
        std::cout << "Animal runs\n";
    }
};

class Dog : public Animal {
public:
    void run() const final override {
        std::cout << "Dog runs\n";
    }
};

/*
Compile error if uncommented
class Bulldog : public Dog {
public:
   void run() const override {}
};
*/

int main() 
{ 
    Dog d; 
    d.run();
}
