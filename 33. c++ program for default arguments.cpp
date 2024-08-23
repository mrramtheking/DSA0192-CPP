#include <iostream>
using namespace std;

// Function to calculate the sum with default arguments
int calculateSum(int a, int b, int c = 0, int d = 0) {
    return a + b + c + d;
}

int main() {
    int a, b, c, d;
    
    cout << "Enter four values (use 0 for any values not being used): ";
    cin >> a >> b >> c >> d;

    int result = calculateSum(a, b, c, d);

    cout << "The sum is: " << result << endl;

    return 0;
}
