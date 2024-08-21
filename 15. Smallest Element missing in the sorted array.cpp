#include <iostream>

int main() {
    int n;

    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    int* array = new int[n];

    std::cout << "Enter the elements of the sorted array: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> array[i];
    }

    int i = 0;
    while (i < n && array[i] == i) {
        ++i;
    }

    std::cout << "The smallest missing element is " << i << std::endl;

    delete[] array;
    return 0;
}
