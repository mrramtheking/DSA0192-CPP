#include <iostream>
using namespace std;

class TrianglePattern {
    int rows;

public:
    
    TrianglePattern() {
        rows = 5; 
    }


    TrianglePattern(int r) {
        rows = r;
    }

    void printPattern() {
        for (int i = 1; i <= rows; ++i) {
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
