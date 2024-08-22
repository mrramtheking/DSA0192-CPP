#include <iostream>
#include <cmath> // For pow function
using namespace std;

int main() {
    double principal, rate, time;
    int n;

    cout << "Enter the principal amount (P): ";
    cin >> principal;

    cout << "Enter the annual rate of interest (R): ";
    cin >> rate;

    cout << "Enter the time period in years (T): ";
    cin >> time;

    cout << "Enter the number of times interest is compounded per year (n): ";
    cin >> n;

    double compoundInterest = principal * pow((1 + (rate / (n * 100))), (n * time)) - principal;

    cout << "The Compound Interest is: " << compoundInterest << endl;

    return 0;
}
