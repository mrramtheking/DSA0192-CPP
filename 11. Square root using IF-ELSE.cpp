#include <iostream>
#include <cmath> // For sqrt function

int main() {
    double number, result;

    std::cout << "Enter a number: ";
    std::cin >> number;

    if (number >= 0) {
        result = sqrt(number);
        std::cout << "The square root of " << number << " is " << result << std::endl;
    } else {
        std::cout << "Error: The number is negative, and square roots of negative numbers are not real." << std::endl;
    }

    return 0;
}
