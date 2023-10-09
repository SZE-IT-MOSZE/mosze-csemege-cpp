//
// Created by keret on 2022. 11. 13..
//

#include "geometry.h"

Geometry::~Geometry() {}

// Triangle definition

Triangle::Triangle(double a, double b, double c): a(a), b(b), c(c) {}

Triangle::~Triangle() noexcept = default;

double Triangle::area() {
    double s = (a + b + c)/2.0;
    return std::sqrt(s * (s - a) * (s - b) * (s - c));
}

double Triangle::circumference() {
    return a + b + c;
}

bool Triangle::check() {
    return (a > 0.0) && (b > 0.0) && (c > 0.0) && (a + b > c) && (b + c > a) && (a + c > b);
}

// Circle definition

Circle::Circle(double radius): radius(radius) {}

Circle::~Circle() noexcept = default;

double Circle::circumference() {
    return 2 * radius * M_PI;
}

double Circle::area() {
    return radius*radius * M_PI;
}

bool Circle::check() {
    return radius > 0.0;
}