#include <iostream>
#include <cmath>

using namespace std;

class Shape {
private:
    double area;

public:
    Shape(double radius) {
        area = M_PI * radius * radius;
        cout << "Area of Circle: " << area << endl;
    }

    Shape(double length, double width) {
        area = length * width;
        cout << "Area of Rectangle: " << area << endl;
    }

    Shape(double a, double b, double c) {
        double s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "Area of Triangle: " << area << endl;
    }
};

int main() {
    Shape circle(5.0);
    Shape rectangle(4.0, 6.0);
    Shape triangle(3.0, 4.0, 5.0);

    return 0;
}
