#include <iostream>
using namespace std;

int main() {
    int num1, num2, choice;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Enter choice (1: Add, 2: Subtract, 3: Multiply, 4: Divide, 5: Modulus): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Addition: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Subtraction: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Multiplication: " << num1 * num2 << endl;
            break;
        case 4:
            if (num2 != 0)
                cout << "Division: " << num1 / num2 << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        case 5:
            if (num2 != 0)
                cout << "Modulus: " << num1 % num2 << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
