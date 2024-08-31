#include <iostream>
using namespace std;

class CubeCalculator {
    int n;
public:
    CubeCalculator(int num) : n(num) {}

    ~CubeCalculator() {
        cout << "Cubes of numbers from 1 to " << n << " are:\n";
        for (int i = 1; i <= n; ++i) {
            cout << "Cube of " << i << " is " << (i * i * i) << endl;
        }
    }
};

int main() {
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    CubeCalculator calc(number);

    return 0;
}
