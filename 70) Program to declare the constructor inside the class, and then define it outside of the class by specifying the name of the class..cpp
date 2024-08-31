#include <iostream>

using namespace std;

class Shape {
private:
    double length;
    double width;

public:
    Shape(double l, double w);  // Constructor declaration

    double getArea();
};

// Constructor definition outside the class
Shape::Shape(double l, double w) {
    length = l;
    width = w;
}

// Member function definition outside the class
double Shape::getArea() {
    return length * width;
}

int main() {
    Shape rectangle(4.0, 6.0);
    cout << "Area of Rectangle: " << rectangle.getArea() << endl;

    return 0;
}
