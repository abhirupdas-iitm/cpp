// animal_stream_interface_demo.cpp
#include <iostream>
#include <string>

/*
 * Interface
 */
class StreamInsertable {
public:
    virtual ~StreamInsertable() = default;
    virtual void stream_insert(std::ostream& out) const = 0;
};

std::ostream& operator<<(std::ostream& out, const StreamInsertable& obj) {
    obj.stream_insert(out);
    return out;
}

/*
 * Base polymorphic hierarchy
 */
class AnimalSI : public StreamInsertable {
public:
    explicit AnimalSI(std::string desc) : m_description(std::move(desc)) {}

    void stream_insert(std::ostream& out) const override {
        out << "Animal[" << m_description << "]";
    }

    virtual void breathe() const {
        std::cout << "Animal breathing\n";
    }

protected:
    std::string m_description;
};

class BirdSI : public AnimalSI {
public:
    BirdSI(std::string wing_color, std::string desc)
        : AnimalSI(std::move(desc)), m_wing_color(std::move(wing_color)) {}

    void stream_insert(std::ostream& out) const override {
        out << "Bird[" << m_description
            << ", wings=" << m_wing_color << "]";
    }

    void fly() const {
        std::cout << "Bird flying\n";
    }

private:
    std::string m_wing_color;
};

int main() {
    AnimalSI animal{"generic-animal"};
    BirdSI bird{"white", "pigeon"};

    std::cout << animal << std::endl;
    std::cout << bird << std::endl;

    // Interface-based polymorphism
    StreamInsertable* objects[] = { &animal, &bird };

    for (const auto* obj : objects) {
        std::cout << *obj << std::endl;
    }
}
