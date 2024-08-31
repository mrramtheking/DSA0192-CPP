#include <iostream>

using namespace std;

class AreaCalculator {
public:
    void printArea(int side) {
        cout << side * side << endl;
    }

    void printArea(int length, int breadth) {
        cout << length * breadth << endl;
    }
};

int main() {
    AreaCalculator calculator;

    calculator.printArea(7);
    calculator.printArea(7, 8);

    return 0;
}
