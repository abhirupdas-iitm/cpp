// stream_insertable_interface_demo.cpp
#include <iostream>
#include <string>

/*
Interface-like abstract class
*/
class StreamInsertable {
public:
    virtual ~StreamInsertable() = default;
    virtual void stream_insert(std::ostream& out) const = 0;
};

/*
 * Non-member operator<< using the interface
 */
std::ostream& operator<<(std::ostream& out, const StreamInsertable& obj) {
    obj.stream_insert(out);   // dynamic dispatch
    return out;
}

/*
Concrete class implementing the interface
*/
class Point2D : public StreamInsertable {
public:
    Point2D(double x, double y) : m_x(x), m_y(y) {}

    void stream_insert(std::ostream& out) const override {
        out << "Point2D(" << m_x << ", " << m_y << ")";
    }

private:
    double m_x{};
    double m_y{};
};

int main() {
    Point2D p{3.5, 4.2};

    std::cout << p << std::endl;

    // Polymorphic usage
    StreamInsertable* iface = &p;
    std::cout << *iface << std::endl;
}
