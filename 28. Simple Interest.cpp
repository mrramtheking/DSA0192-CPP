#include <iostream>
using namespace std;

int main() {
    double principal, rate, time;

    cout << "Enter the principal amount (P): ";
    cin >> principal;

    cout << "Enter the rate of interest (R): ";
    cin >> rate;

    cout << "Enter the time period in years (T): ";
    cin >> time;

    double simpleInterest = (principal * rate * time) / 100;

    cout << "The Simple Interest is: " << simpleInterest << endl;

    return 0;
}
