#include <iostream>
#include <string>

class Shape {
public:
    Shape(const std::string& desc) : m_description(desc) {}
    virtual ~Shape() = default;

    virtual void draw() const {
        std::cout << "Shape::draw() -> " << m_description << std::endl;
    }

protected:
    std::string m_description;
};

class Oval : public Shape {
public:
    Oval(double x, double y, const std::string& desc)
        : Shape(desc), m_x(x), m_y(y) {}

    void draw() const override {
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

    void draw() const override {
        std::cout << "Circle::draw() -> "
                  << m_description
                  << " (r=" << m_radius << ")\n";
    }

private:
    double m_radius{};
};

int main() {
    Shape* s1 = new Shape("Shape");
    Shape* s2 = new Oval(2.0, 3.5, "Oval");
    Shape* s3 = new Circle(3.3, "Circle");

    s1->draw();
    s2->draw();
    s3->draw();

    delete s1;
    delete s2;
    delete s3;
}
