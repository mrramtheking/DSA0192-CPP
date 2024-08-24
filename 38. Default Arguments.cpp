#include <iostream>
using namespace std;

void printSum(int a, int b = 5, int c = 10, int d = 15) {
    cout << "Sum: " << a + b + c + d << endl;
}

int main() {
    printSum(10);         // Uses default values for b, c, d
    printSum(10, 15);     // Uses default values for c, d
    printSum(10, 15, 25); // Uses default value for d
    printSum(10, 15, 25, 30); // No default values used
    return 0;
}
