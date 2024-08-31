#include <iostream>
using namespace std;

class TrianglePattern {
    int n;
public:
    TrianglePattern() {
        n = 1;
    }

    TrianglePattern(int num) {
        n = num;
    }

    void printPattern() {
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= i; ++j) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int number;

    cout << "Enter the number of rows: ";
    cin >> number;

    TrianglePattern pattern(number);
    pattern.printPattern();

    return 0;
}
