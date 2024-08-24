#include <iostream>
using namespace std;

int main() {
    int number, i;

    cout << "Enter a number to print its multiplication table: ";
    cin >> number;

    cout << "Multiplication Table for " << number << ":" << endl;
    for (i = 1; i <= 10; i++) {
        cout << number << " x " << i << " = " << number * i << endl;
    }

    return 0;
}
