#ifndef CYLINDER_H
#define CYLINDER_H

class Cylinder
{
private:
    double base_radius {};
    double height {};

public:
    // Constructors
    Cylinder();
    Cylinder(double radius_param, double height_param);

    // Getters
    double get_base_radius() const;
    double get_height() const;

    // Setters
    void set_base_radius(double radius_param);
    void set_height(double height_param);

    // Behavior
    double volume() const;
};

#endif
