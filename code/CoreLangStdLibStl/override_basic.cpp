#include <iostream>
#include <string>

class Shape {
public:
    Shape(const std::string& desc = "") : m_description(desc) {}
    virtual ~Shape() = default;

    virtual void draw() const {
        std::cout << "Shape::draw() -> " << m_description << std::endl;
    }

protected:
    std::string m_description;
};

class Oval : public Shape {
public:
    Oval(double xr, double yr, const std::string& desc)
        : Shape(desc), m_x_radius(xr), m_y_radius(yr) {}

    void draw() const override {
        std::cout << "Oval::draw() -> "
                  << m_description
                  << " (x=" << m_x_radius
                  << ", y=" << m_y_radius << ")\n";
    }

private:
    double m_x_radius{};
    double m_y_radius{};
};

class Circle : public Oval {
public:
    Circle(double r, const std::string& desc)
        : Oval(r, r, desc) {}

    void draw() const override {
        std::cout << "Circle::draw() -> "
                  << m_description << std::endl;
    }
};

int main() {
    Shape* s1 = new Shape("Base shape");
    Shape* s2 = new Oval(2.0, 3.5, "Oval1");
    Shape* s3 = new Circle(3.3, "Circle1");

    s1->draw();
    s2->draw();
    s3->draw();

    delete s1;
    delete s2;
    delete s3;
}
