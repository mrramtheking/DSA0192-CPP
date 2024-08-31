#include <iostream>
using namespace std;

class Circle {
protected:
    double radius;
public:
    void getRadius() {
        cout << "Enter the radius: ";
        cin >> radius;
    }
    double areaCircle() {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Circle {
protected:
    double length, breadth;
public:
    void getDimensions() {
        cout << "Enter the length: ";
        cin >> length;
        cout << "Enter the breadth: ";
        cin >> breadth;
    }
    double areaRectangle() {
        return length * breadth;
    }
};

class Cylinder : public Rectangle {
protected:
    double height;
public:
    void getHeight() {
        cout << "Enter the height: ";
        cin >> height;
    }
    double volumeCylinder() {
        return areaRectangle() * height;
    }
};

int main() {
    Circle circle;
    circle.getRadius();
    cout << "The area = " << circle.areaCircle() << endl;

    Rectangle rectangle;
    rectangle.getDimensions();
    cout << "The area = " << rectangle.areaRectangle() << endl;

    Cylinder cylinder;
    cylinder.getRadius();
    cylinder.getDimensions();
    cylinder.getHeight();
    cout << "The volume of the cylinder is: " << cylinder.volumeCylinder() << endl;

    return 0;
}
