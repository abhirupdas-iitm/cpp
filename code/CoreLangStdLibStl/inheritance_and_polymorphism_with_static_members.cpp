#include <iostream>
#include <memory>
#include <vector>
#include <string>


class Shape {
public:
    Shape() {
        ++m_count;
    }

    Shape(const std::string& description)
        : m_description(description)
    {
        ++m_count;
    }

    virtual ~Shape() {
        --m_count;
    }

    virtual void draw() const {
        std::cout << "Shape::draw() called for : "
                  << m_description << std::endl;
    }

    static int get_count() {
        return m_count;
    }

protected:
    std::string m_description{"shape"};

public:
    static int m_count;
};

// Definition of static member
int Shape::m_count = 0;


class Ellipse : public Shape {
public:
    Ellipse() {
        ++m_count;
    }

    Ellipse(double x_radius, double y_radius,
            const std::string& description)
        : Shape(description),
          m_x_radius(x_radius),
          m_y_radius(y_radius)
    {
        ++m_count;
    }

    ~Ellipse() override {
        --m_count;
    }

    void draw() const override {
        std::cout << "Ellipse::draw() called for : "
                  << m_description
                  << " | x_radius = " << m_x_radius
                  << ", y_radius = " << m_y_radius
                  << std::endl;
    }

    static int get_count() {
        return m_count;
    }

private:
    double m_x_radius{0.0};
    double m_y_radius{0.0};

public:
    static int m_count;
};

// Definition of static member
int Ellipse::m_count = 0;


int main() {

    std::cout << "===== Shape objects =====" << std::endl;

    Shape s1("shape1");
    std::cout << "Shape count : " << Shape::m_count << std::endl;

    Shape s2("shape2");
    std::cout << "Shape count : " << Shape::m_count << std::endl;

    Shape s3;
    std::cout << "Shape count : " << Shape::m_count << std::endl;

    std::cout << "-----------------------------" << std::endl;

    std::cout << "===== Ellipse objects =====" << std::endl;

    Ellipse e1(10, 12, "ellipse1");
    std::cout << "Shape count   : " << Shape::m_count << std::endl;
    std::cout << "Ellipse count : " << Ellipse::m_count << std::endl;

    std::cout << "-----------------------------" << std::endl;

    std::cout << "===== Polymorphic behavior =====" << std::endl;

    {
        std::vector<std::shared_ptr<Shape>> shapes;

        shapes.push_back(
            std::make_shared<Ellipse>(10, 10, "ellipse_at_0"));
        shapes.push_back(
            std::make_shared<Ellipse>(12, 43, "ellipse_at_1"));

        for (const auto& s : shapes) {
            s->draw();
        }

        std::cout << "Shape count (nested scope)   : "
                  << Shape::m_count << std::endl;
        std::cout << "Ellipse count (nested scope) : "
                  << Ellipse::m_count << std::endl;
    }

    std::cout << "-----------------------------" << std::endl;

    std::cout << "After nested scope:" << std::endl;
    std::cout << "Shape count   : " << Shape::m_count << std::endl;
    std::cout << "Ellipse count : " << Ellipse::m_count << std::endl;

    return 0;
}
