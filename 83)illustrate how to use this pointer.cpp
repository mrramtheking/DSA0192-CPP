#include <iostream>

using namespace std;

class Box {
private:
    double length;
    double width;
    double height;

public:
    // Constructor with parameters
    Box(double length, double width, double height) {
        this->length = length;
        this->width = width;
        this->height = height;
    }

    // Method to calculate volume
    double calculateVolume() {
        return this->length * this->width * this->height;
    }

    // Method to display dimensions
    void displayDimensions() {
        cout << "Length: " << this->length << endl;
        cout << "Width: " << this->width << endl;
        cout << "Height: " << this->height << endl;
    }
};

int main() {
    Box box1(5.0, 3.0, 2.0);  

    box1.displayDimensions();
    cout << "Volume of the box: " << box1.calculateVolume() << endl;

    return 0;
}
