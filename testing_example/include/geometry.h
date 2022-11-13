//
// Created by keret on 2022. 11. 13..
//

#ifndef TESTING_EXAMPLE_GEOMETRY_H
#define TESTING_EXAMPLE_GEOMETRY_H

#include <cmath>

class Geometry {
public:
    virtual ~Geometry() = 0;
    // Calculate the area of the given geometry
    virtual double area() = 0;
    // Calculate the circumference of the geometry
    virtual double circumference() = 0;
    // Check whether the geometry is OK
    virtual bool check() = 0;
};

class Triangle: public Geometry {
private:
    double a;
    double b;
    double c;
public:
    Triangle(double a, double b, double c);

    virtual ~Triangle();

    // Use Heron's formula
    virtual double area();
    // Circumference is the sum of all sides
    virtual double circumference();
    // Use triangle inequalities to check triangle satisfiability
    virtual bool check();
};

class Circle: public Geometry {
private:
    double radius;
public:
    Circle(double radius);

    virtual ~Circle();

    // Conventional fromulas for area & circumference
    virtual double circumference();
    virtual double area();
    // Check if radius is nonnegative
    virtual bool check();
};

#endif //TESTING_EXAMPLE_GEOMETRY_H
