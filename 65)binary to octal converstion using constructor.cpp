#include <iostream>
#include <cmath>
using namespace std;

class BinaryToOctal {
    long long binary;
    int octal;

public:
    BinaryToOctal(long long bin) {
        binary = bin;
        octal = convertToOctal();
    }

    int convertToOctal() {
        int decimal = 0, octalNumber = 0, i = 0;

        // Convert binary to decimal
        while (binary != 0) {
            decimal += (binary % 10) * pow(2, i);
            ++i;
            binary /= 10;
        }

        i = 1;

        // Convert decimal to octal
        while (decimal != 0) {
            octalNumber += (decimal % 8) * i;
            decimal /= 8;
            i *= 10;
        }

        return octalNumber;
    }

    void displayOctal() {
        cout << "The octal equivalent is: " << octal << endl;
    }
};

int main() {
    long long binaryNumber;

    cout << "Enter a binary number: ";
    cin >> binaryNumber;

    BinaryToOctal converter(binaryNumber);
    converter.displayOctal();

    return 0;
}
