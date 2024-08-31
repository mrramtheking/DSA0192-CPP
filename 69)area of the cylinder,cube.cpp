#include <iostream>
#include <cmath>

using namespace std;

class Shape {
private:
    double volume;

public:
    Shape(double side) {
        volume = pow(side, 3);
        cout << "Volume of Cube: " << volume << endl;
    }

    Shape(double radius, double height) {
        volume = M_PI * pow(radius, 2) * height;
        cout << "Volume of Cylinder: " << volume << endl;
    }
};

int main() {
    Shape cube(3.0);
    Shape cylinder(2.0, 5.0);

    return 0;
}
