#include <iostream>
using namespace std;

int main() {
    float taxableIncome, tax;

    // Input the taxable income from the user
    cout << "Enter the taxable income: ";
    cin >> taxableIncome;

    // Calculate the tax based on the given conditions
    if (taxableIncome <= 60000) {
        tax = 0;
    } else if (taxableIncome > 60000 && taxableIncome <= 150000) {
        tax = taxableIncome * 0.05;
    } else if (taxableIncome > 150000 && taxableIncome <= 500000) {
        tax = taxableIncome * 0.1;
    } else {
        tax = taxableIncome * 0.15;
    }

    // Display the calculated tax
    cout << "The calculated tax is: " << tax << endl;

    return 0;
}
