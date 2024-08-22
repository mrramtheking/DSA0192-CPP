#include <iostream>

class Arithmetic {
private:
    double num1, num2;

public:
    // Constructor to initialize the numbers
    Arithmetic(double a, double b) : num1(a), num2(b) {}

    // Function to perform addition
    double add() const {
        return num1 + num2;
    }

    // Function to perform subtraction
    double subtract() const {
        return num1 - num2;
    }

    // Function to perform multiplication
    double multiply() const {
        return num1 * num2;
    }

    // Function to perform division
    double divide() const {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            std::cerr << "Error: Division by zero is not allowed." << std::endl;
            return 0; // Return 0 or handle error as needed
        }
    }
};

int main() {
    double a, b;

    // Input the numbers
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    // Create an object of Arithmetic class
    Arithmetic arithmetic(a, b);

    // Perform and display the operations
    std::cout << "Addition: " << arithmetic.add() << std::endl;
    std::cout << "Subtraction: " << arithmetic.subtract() << std::endl;
    std::cout << "Multiplication: " << arithmetic.multiply() << std::endl;
    std::cout << "Division: " << arithmetic.divide() << std::endl;

    return 0;
}
