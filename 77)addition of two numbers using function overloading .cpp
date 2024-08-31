#include <iostream>

using namespace std;

class Add {
private:
    int value;

public:
    Add() : value(0) {}

    Add(int v) : value(v) {}

    Add operator+(const Add& obj) {
        Add result;
        result.value = this->value + obj.value;
        return result;
    }

    void displaySum() {
        cout << "Sum: " << value << endl;
    }
};

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    Add a1(num1);
    Add a2(num2);
    Add sum = a1 + a2;

    sum.displaySum();

    return 0;
}
