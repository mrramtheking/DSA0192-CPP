#include <iostream>
using namespace std;

int main() {
    int A, B;

    cout << "Enter the first number (A): ";
    cin >> A;

    cout << "Enter the second number (B): ";
    cin >> B;

    while (B != 0) {
        int temp = B;
        B = A % B;
        A = temp;
    }

    cout << "The GCD of the two numbers is: " << A << endl;

    return 0;
}
