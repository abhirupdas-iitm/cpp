#include <iostream>
#include <string>


class Shape
{
public:
    Shape() = default;
    Shape(const std::string& description)
        : m_description(description) {}

    virtual ~Shape() = default;

    // Virtual function
    virtual void draw() const
    {
        std::cout << "Shape::draw() called. Drawing "
                  << m_description << std::endl;
    }

protected:
    std::string m_description{};
};


class Oval : public Shape
{
public:
    Oval() = default;

    Oval(double x_radius, double y_radius,
         const std::string& description)
        : Shape(description),
          m_x_radius(x_radius),
          m_y_radius(y_radius) {}

    virtual void draw() const override
    {
        std::cout << "Oval::draw() called. Drawing "
                  << m_description
                  << " with x_radius = " << m_x_radius
                  << " and y_radius = " << m_y_radius
                  << std::endl;
    }

protected:
    double m_x_radius{0.0};
    double m_y_radius{0.0};
};


class Circle : public Oval
{
public:
    Circle() = default;

    Circle(double radius, const std::string& description)
        : Oval(radius, radius, description) {}

    virtual void draw() const override
    {
        std::cout << "Circle::draw() called. Drawing "
                  << m_description
                  << " with radius = " << m_x_radius
                  << std::endl;
    }
};


void draw_shape(const Shape& shape)
{
    shape.draw(); // dynamic binding
}

void draw_shape_through_ptr(const Shape* shape_ptr)
{
    shape_ptr->draw(); // dynamic binding
}


int main()
{
    Shape  shape1("Shape1");
    Oval   oval1(2.0, 3.5, "Oval1");
    Circle circle1(3.3, "Circle1");

    std::cout << "\nPolymorphism (dynamic binding) with references:\n";
    draw_shape(shape1);
    draw_shape(oval1);
    draw_shape(circle1);

    std::cout << "\nPolymorphism (dynamic binding) with pointers:\n";
    draw_shape_through_ptr(&shape1);
    draw_shape_through_ptr(&oval1);
    draw_shape_through_ptr(&circle1);

    std::cout << "\nBase pointer behavior:\n";
    Shape* shape_ptr = &oval1;
    shape_ptr->draw();   // Oval::draw() is called

    return 0;
}
