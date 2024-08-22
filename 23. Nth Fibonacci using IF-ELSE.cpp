#include <iostream>

int main() {
    int N, fibonacci, first = 0, second = 1;

    std::cout << "Enter the value of N: ";
    std::cin >> N;

    if (N == 1) {
        fibonacci = first;
    } else if (N == 2) {
        fibonacci = second;
    } else {
        for (int i = 3; i <= N; ++i) {
            fibonacci = first + second;
            first = second;
            second = fibonacci;
        }
    }

    std::cout << "The " << N << "th Fibonacci number is: " << fibonacci << std::endl;

    return 0;
}
