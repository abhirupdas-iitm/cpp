#include <iostream>
#include <string>

class Shape {
public:
    Shape(const std::string& desc) : m_description(desc) {}

    void draw() const {
        std::cout << "Shape::draw() -> " << m_description << std::endl;
    }

protected:
    std::string m_description;
};

class Oval : public Shape {
public:
    Oval(double x, double y, const std::string& desc)
        : Shape(desc), m_x(x), m_y(y) {}

    void draw() const {
        std::cout << "Oval::draw() -> "
                  << m_description
                  << " (x=" << m_x << ", y=" << m_y << ")\n";
    }

private:
    double m_x{}, m_y{};
};

class Circle : public Oval {
public:
    Circle(double r, const std::string& desc)
        : Oval(r, r, desc), m_radius(r) {}

    void draw() const {
        std::cout << "Circle::draw() -> "
                  << m_description
                  << " (r=" << m_radius << ")\n";
    }

private:
    double m_radius{};
};

int main() {
    Shape shape("Shape1");
    Oval oval(2.0, 3.5, "Oval1");
    Circle circle(3.3, "Circle1");

    Shape* ptr = &shape;
    ptr->draw();   // Shape::draw

    ptr = &oval;
    ptr->draw();   // ❌ Shape::draw (static binding)

    ptr = &circle;
    ptr->draw();   // ❌ Shape::draw (static binding)
}
