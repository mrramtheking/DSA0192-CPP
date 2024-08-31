#include <iostream>
using namespace std;

// Function to sort an array using pointers
void sortArray(int* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(arr + i) > *(arr + j)) {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

int main() {
    int arr[100], n = 0, num;

    cout << "Enter Infinite Numbers and (-1 To Stop Reading)" << endl;
    while (true) {
        cin >> num;
        if (num == -1)
            break;
        arr[n] = num;
        n++;
    }

    sortArray(arr, n);

    cout << "The Ascending order is given below:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
