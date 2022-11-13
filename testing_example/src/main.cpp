#include <iostream>

#include "geometry.h"

int main() {
    std::cout << "Example triangle\n";
    std::cout << "A: 10, B: 20, C: 15\n";
    // Setup sides
    double a = 10;
    double b = 20;
    double c = 15;
    Triangle tri(a, b, c);
    if (tri.check()) std::cout << "Correct triangle\n";
    std::cout << "Triangle circumference: " << tri.circumference() << std::endl;
    std::cout << "Triangle area: " << tri.area() << std::endl;

    return 0;
}
