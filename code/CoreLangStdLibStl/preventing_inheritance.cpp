#include <iostream>

class Plane final {
public:
    Plane() {
        std::cout << "Plane constructed\n";
    }
};

// ❌ Uncommenting this will cause a compile-time error
// class FighterJet : public Plane {};

int main() {
    Plane p;
    return 0;
}
