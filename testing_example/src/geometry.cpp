//
// Created by keret on 2022. 11. 13..
//

#include "geometry.h"

Geometry::~Geometry() {}

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
    return (a + b > c) && (b + c > a) && (a + c > b);
}