#include <iostream>

int main() {
    int number, sum = 0, i = 1;

    std::cout << "Enter a number: ";
    std::cin >> number;

    while (i <= number / 2) {
        if (number % i == 0) {
            sum += i;
        }
        ++i;
    }

    if (sum == number) {
        std::cout << number << " is a perfect number." << std::endl;
    } else {
        std::cout << number << " is not a perfect number." << std::endl;
    }

    return 0;
}
