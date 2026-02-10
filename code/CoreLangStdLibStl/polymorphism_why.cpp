#include <iostream>
#include <vector>
#include <string>

class Shape {
public:
    Shape(const std::string& desc) : m_description(desc) {}
    virtual ~Shape() = default;

    virtual void draw() const = 0; // pure virtual

protected:
    std::string m_description;
};

class Oval : public Shape {
public:
    Oval(double x, double y, const std::string& desc)
        : Shape(desc), m_x(x), m_y(y) {}

    void draw() const override {
        std::cout << "Oval -> " << m_description
                  << " (" << m_x << ", " << m_y << ")\n";
    }

private:
    double m_x{}, m_y{};
};

class Circle : public Shape {
public:
    Circle(double r, const std::string& desc)
        : Shape(desc), m_radius(r) {}

    void draw() const override {
        std::cout << "Circle -> " << m_description
                  << " (r=" << m_radius << ")\n";
    }

private:
    double m_radius{};
};

void draw_shape(const Shape& shape) {
    shape.draw();  // polymorphic call
}

int main() {
    Circle c1(3.3, "Circle1");
    Oval o1(2.0, 3.5, "Oval1");

    draw_shape(c1);
    draw_shape(o1);

    std::vector<Shape*> shapes {
        new Circle(1.1, "C2"),
        new Oval(4.0, 2.0, "O2"),
        new Circle(5.5, "C3")
    };

    std::cout << "\nDrawing from collection:\n";
    for (Shape* s : shapes) {
        s->draw();
        delete s;
    }
}
