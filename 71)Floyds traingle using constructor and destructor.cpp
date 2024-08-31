#include <iostream>

using namespace std;

class FloydsTriangle {
private:
    int rows;

public:
    FloydsTriangle(int r) {
        rows = r;
        int number = 1;
        cout << "Floyd's Triangle:\n";
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= i; j++) {
                cout << number << " ";
                number++;
            }
            cout << endl;
        }
    }

    ~FloydsTriangle() {
        cout << "Floyd's Triangle generation complete." << endl;
    }
};

int main() {
    int rows;
    cout << "Enter the number of rows for Floyd's Triangle: ";
    cin >> rows;

    FloydsTriangle triangle(rows);

    return 0;
}
