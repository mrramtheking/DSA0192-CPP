#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    // Function to input the real and imaginary parts
    void inputData() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    // Overload the binary + operator
    Complex operator + (const Complex &obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    // Function to display the complex number
    void displayData() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1, c2, c3;

    cout << "Enter first complex number:" << endl;
    c1.inputData();

    cout << "Enter second complex number:" << endl;
    c2.inputData();

    // Add two complex numbers using overloaded + operator
    c3 = c1 + c2;

    // Display the results
    cout << "\nFirst Complex Number: ";
    c1.displayData();

    cout << "Second Complex Number: ";
    c2.displayData();

    cout << "Sum of Complex Numbers: ";
    c3.displayData();

    return 0;
}
