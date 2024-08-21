#include <iostream>
#include <cmath> // For cbrt function

int main() {
    double number, result;

    std::cout << "Enter a number: ";
    std::cin >> number;

    result = cbrt(number); // cbrt function from <cmath>
    std::cout << "The cube root of " << number << " is " << result << std::endl;

    return 0;
}
