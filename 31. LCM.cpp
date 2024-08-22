#include <iostream>
using namespace std;

int main() {
    int A, B, maxNum, lcm;

    cout << "Enter the first number (A): ";
    cin >> A;

    cout << "Enter the second number (B): ";
    cin >> B;

    maxNum = (A > B) ? A : B;

    while (true) {
        if (maxNum % A == 0 && maxNum % B == 0) {
            lcm = maxNum;
            break;
        }
        maxNum++;
    }

    cout << "The LCM of the two numbers is: " << lcm << endl;

    return 0;
}
