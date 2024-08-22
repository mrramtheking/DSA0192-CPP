#include <iostream>

class Rectangle {
private:
    // Private members to store the dimensions of the rectangle
    double length;
    double width;
    double height;

public:
    // Constructor to initialize the dimensions
    Rectangle(double l, double w, double h = 0) : length(l), width(w), height(h) {}

    // Method to calculate the area of the rectangle
    double calculateArea() const {
        return length * width;
    }

    // Method to calculate the volume of the rectangular prism
    double calculateVolume() const {
        return length * width * height;
    }

    // Method to display the results
    void display() const {
        std::cout << "Rectangle dimensions:\n";
        std::cout << "Length: " << length << "\n";
        std::cout << "Width: " << width << "\n";
        if (height > 0) {
            std::cout << "Height: " << height << "\n";
            std::cout << "Volume: " << calculateVolume() << "\n";
        }
        std::cout << "Area: " << calculateArea() << "\n";
    }
};

int main() {
    double length, width, height;

    // Input dimensions for the rectangle
    std::cout << "Enter the length and width of the rectangle: ";
    std::cin >> length >> width;

    // Create a Rectangle object (height is optional, default to 0 for 2D rectangle)
    Rectangle rect(length, width);

    // Optionally, if you want to calculate volume as well
    std::cout << "Enter the height of the rectangle (0 for 2D rectangle): ";
    std::cin >> height;

    // If height is greater than 0, create a rectangular prism
    if (height > 0) {
        Rectangle prism(length, width, height);
        prism.display();
    } else {
        rect.display();
    }

    return 0;
}
