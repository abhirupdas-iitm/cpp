#include <iostream>
#include <string>

// Abstract base class
class Shape {
public:
    Shape(const std::string& desc) : m_description(desc) {}
    virtual ~Shape() = default;

    // Pure virtual functions
    virtual double perimeter() const = 0;
    virtual double surface() const = 0;

protected:
    std::string m_description;
};

// Concrete derived class
class Rectangle : public Shape {
public:
    Rectangle(double w, double h, const std::string& desc)
        : Shape(desc), m_width(w), m_height(h) {}

    double perimeter() const override {
        return 2 * (m_width + m_height);
    }

    double surface() const override {
        return m_width * m_height;
    }

private:
    double m_width{};
    double m_height{};
};

// Concrete derived class
class Circle : public Shape {
public:
    Circle(double r, const std::string& desc)
        : Shape(desc), m_radius(r) {}

    double perimeter() const override {
        return 2.0 * 3.141592653589793 * m_radius;
    }

    double surface() const override {
        return 3.141592653589793 * m_radius * m_radius;
    }

private:
    double m_radius{};
};

int main() {
    // Shape s("base");   // ❌ ERROR: Shape is abstract

    const Shape* rect = new Rectangle(10.0, 5.0, "Rectangle");
    const Shape* circ = new Circle(3.0, "Circle");

    std::cout << "Rectangle surface: " << rect->surface() << std::endl;
    std::cout << "Circle perimeter: " << circ->perimeter() << std::endl;

    delete rect;
    delete circ;
}
