#include <iostream>
using namespace std;

void removeDuplicates(int arr[], int &size) {
    if (size == 0) return;

    int uniqueIndex = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] != arr[uniqueIndex]) {
            uniqueIndex++;
            arr[uniqueIndex] = arr[i];
        }
    }
    size = uniqueIndex + 1;
}

int main() {
    int arr[] = {1, 1, 2, 3, 3, 4, 5, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    removeDuplicates(arr, size);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
