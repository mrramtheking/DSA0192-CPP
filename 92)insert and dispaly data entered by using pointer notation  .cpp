#include <iostream>
using namespace std;

int main() {
    int n = 4;
    float arr[n];
    float *ptr = arr;

    cout << "Enter the 4 numbers: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> *(ptr + i);
    }

    cout << "Displaying the data: " << endl;
    for (int i = 0; i < n; i++) {
        cout << *(ptr + i) << endl;
    }

    return 0;
}
