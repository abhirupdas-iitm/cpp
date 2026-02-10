// smart_pointer_collection.cpp
#include <iostream>
#include <string>
#include <memory>

class Shape {
public:
    Shape(std::string desc = "") : m_description(desc) {}
    virtual void draw() const {
        std::cout << "Shape::draw() : " << m_description << std::endl;
    }
    virtual ~Shape() = default;

protected:
    std::string m_description;
};

class Oval : public Shape {
public:
    Oval(double x, double y, std::string desc)
        : Shape(desc), m_x(x), m_y(y) {}

    void draw() const override {
        std::cout << "Oval::draw() : " << m_description
                  << " x=" << m_x << " y=" << m_y << std::endl;
    }

private:
    double m_x{}, m_y{};
};

class Circle : public Oval {
public:
    Circle(double r, std::string desc)
        : Oval(r, r, desc) {}

    void draw() const override {
        std::cout << "Circle::draw() : " << m_description << std::endl;
    }
};

int main() {
    std::shared_ptr<Shape> shapes[] = {
        std::make_shared<Circle>(12.2, "circle4"),
        std::make_shared<Oval>(10.0, 20.0, "oval4")
    };

    for (const auto& s : shapes) {
        s->draw();
        std::cout << std::endl;
    }
}
