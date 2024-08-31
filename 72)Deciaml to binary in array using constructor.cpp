#include <iostream>

using namespace std;

class DecimalToBinary {
public:
    DecimalToBinary(int decimalNumber) {
        cout << "Binary equivalent: ";
        convertToBinary(decimalNumber);
        cout << endl;
    }

private:
    void convertToBinary(int n) {
        if (n == 0) {
            return;
        }
        convertToBinary(n / 2);
        cout << (n % 2);
    }
};

int main() {
    int number;

    cout << "Enter a decimal number: ";
    cin >> number;

    DecimalToBinary binaryConverter(number);

    return 0;
}
