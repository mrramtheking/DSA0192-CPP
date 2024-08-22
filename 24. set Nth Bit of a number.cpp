#include <iostream>
using namespace std;

int main() {
    int number, n;

    cout << "Enter the number: ";
    cin >> number;

    cout << "Enter the position of the bit to set (0-based index): ";
    cin >> n;

    // Set the Nth bit
    number |= (1 << n);

    cout << "The number after setting the " << n << "th bit is: " << number << endl;

    return 0;
}
