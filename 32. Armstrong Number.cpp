#include <iostream>
#include <cmath> // For pow function
using namespace std;

int main() {
    int number, originalNumber, digit, sum = 0;

    cout << "Enter a number: ";
    cin >> number;

    originalNumber = number;

    while (number > 0) {
        digit = number % 10;
        sum += pow(digit, 3); // Cube the digit and add to sum
        number /= 10; // Remove the last digit
    }

    if (sum == originalNumber) {
        cout << "The number is an Armstrong number." << endl;
    } else {
        cout << "The number is not an Armstrong number." << endl;
    }

    return 0;
}
