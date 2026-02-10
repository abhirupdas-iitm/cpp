#include <iostream>
#include <string>


class Shape {
public:
    Shape() = default;
    Shape(const std::string& desc) : m_description(desc) {}

    virtual void draw() const {
        std::cout << "Shape::draw() -> " << m_description << std::endl;
    }

protected:
    std::string m_description{"Shape"};
};


class Oval : public Shape {
public:
    Oval(double x, double y, const std::string& desc)
        : Shape(desc), m_x_radius(x), m_y_radius(y) {}

    void draw() const override {
        std::cout << "Oval::draw() -> "
                  << m_description
                  << " | x_radius=" << m_x_radius
                  << ", y_radius=" << m_y_radius
                  << std::endl;
    }

protected:
    double m_x_radius{0.0};
    double m_y_radius{0.0};
};


class Circle : public Oval {
public:
    Circle(double r, const std::string& desc)
        : Oval(r, r, desc) {}

    void draw() const override {
        std::cout << "Circle::draw() -> "
                  << m_description
                  << " | radius=" << m_x_radius
                  << std::endl;
    }
};


int main() {

    std::cout << "=== Object sizes (polymorphic types) ===\n";
    std::cout << "sizeof(Shape)  : " << sizeof(Shape) << std::endl;
    std::cout << "sizeof(Oval)   : " << sizeof(Oval) << std::endl;
    std::cout << "sizeof(Circle) : " << sizeof(Circle) << std::endl;

    std::cout << "\n=== Dynamic binding through base pointer ===\n";
    Shape* s1 = new Shape("BaseShape");
    Shape* s2 = new Oval(2.0, 3.5, "MyOval");
    Shape* s3 = new Circle(3.3, "MyCircle");

    s1->draw();
    s2->draw();
    s3->draw();

    delete s1;
    delete s2;
    delete s3;

    std::cout << "\n=== Object slicing ===\n";
    Circle circle1(5.0, "BigCircle");

    Shape shape2 = circle1;   // 🔴 SLICING happens here
    shape2.draw();            // Calls Shape::draw(), not Circle::draw()

    std::cout << "\nExplanation:\n";
    std::cout << "- circle1 contains Shape + Oval + Circle parts\n";
    std::cout << "- shape2 contains ONLY the Shape subobject\n";
    std::cout << "- Derived parts are sliced away\n";

    return 0;
}
