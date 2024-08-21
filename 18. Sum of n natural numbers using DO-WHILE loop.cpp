#include <iostream>

int main() {
    int n, sum = 0, i = 1;

    std::cout << "Enter the value of n: ";
    std::cin >> n;

    do {
        sum += i;
        ++i;
    } while (i <= n);

    std::cout << "The sum of " << n << " natural numbers is: " << sum << std::endl;

    return 0;
}
