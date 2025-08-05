#include <iostream>
#include <cmath>

class Circle {
public:
    double radius;

    Circle(double rr) {
        radius = rr;
    }

    void findArea() {
        std::cout << "Area of circle is " << (M_PI * radius * radius) << std::endl;
    }

    void perimeter() {
        std::cout << "Perimeter of circle is " << (2.0 * M_PI * radius) << std::endl;
    }
};

int main() {
    Circle c(20);

    c.findArea();
    c.perimeter();

    return 0;
}
