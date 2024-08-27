#include <iostream>
using namespace std;

class series {
private:
    int n;

public:
    // Function to get the input number
    void input() {
        cout << "Enter the number of terms for Fibonacci series: ";
        cin >> n;
    }

    // Function to display the Fibonacci series
    void show() {
        int a = 0, b = 1, next;
        cout << "Fibonacci series: ";
        for (int i = 1; i <= n; ++i) {
            cout << a << " ";
            next = a + b;
            a = b;
            b = next;
        }
        cout << endl;
    }
};

int main() {
    series obj;
    obj.input();  // Get the number of terms
    obj.show();   // Display the Fibonacci series

    return 0;
}
