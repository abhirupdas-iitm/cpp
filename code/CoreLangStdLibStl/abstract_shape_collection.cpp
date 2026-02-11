#include <iostream>
#include <vector>
#include <memory>

// Abstract base class
class Shape {
public:
    virtual ~Shape() = default;
    virtual double surface() const = 0;
};

// Derived class
class Rectangle : public Shape {
public:
    Rectangle(double w, double h) : m_w(w), m_h(h) {}
    double surface() const override {
        return m_w * m_h;
    }
private:
    double m_w{}, m_h{};
};

// Derived class
class Circle : public Shape {
public:
    Circle(double r) : m_r(r) {}
    double surface() const override {
        return 3.141592653589793 * m_r * m_r;
    }
private:
    double m_r{};
};

int main() {
    std::vector<std::unique_ptr<Shape>> shapes;

    shapes.push_back(std::make_unique<Rectangle>(4.0, 6.0));
    shapes.push_back(std::make_unique<Circle>(2.0));

    for (const auto& s : shapes) {
        std::cout << "Surface: " << s->surface() << std::endl;
    }
}
