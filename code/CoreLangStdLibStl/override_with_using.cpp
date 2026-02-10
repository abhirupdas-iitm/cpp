#include <iostream>
#include <string>

class Shape {
public:
    Shape(const std::string& d = "") : desc(d) {}

    virtual void draw() const {
        std::cout << "Shape::draw() -> " << desc << std::endl;
    }

    virtual void draw(int color_depth) const {
        std::cout << "Shape::draw(int) -> depth "
                  << color_depth << std::endl;
    }

protected:
    std::string desc;
};

class Oval : public Shape {
public:
    using Shape::draw; // 🔑 resurrect hidden overloads

    Oval(double xr, double yr, const std::string& d)
        : Shape(d), x(xr), y(yr) {}

    void draw() const override {
        std::cout << "Oval::draw() -> "
                  << desc << std::endl;
    }

private:
    double x{}, y{};
};

int main() {
    Oval o(2.0, 3.5, "Oval1");

    o.draw();        // Oval::draw()
    o.draw(44);     // Shape::draw(int) — restored!
}
