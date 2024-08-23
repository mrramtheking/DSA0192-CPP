#include <iostream>
using namespace std;

float calculateSimpleInterest(float principal, int time, bool isSeniorCitizen) {
    float rate = isSeniorCitizen ? 12.0f : 10.0f; // 12% for senior citizens, 10% for others
    return (principal * rate * time) / 100;
}

int main() {
    float principal;
    int time;
    char senior;
    bool isSeniorCitizen;

    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter time in years: ";
    cin >> time;
    cout << "Is the customer a senior citizen? (y/n): ";
    cin >> senior;

    isSeniorCitizen = (senior == 'y' || senior == 'Y');
    float interest = calculateSimpleInterest(principal, time, isSeniorCitizen);

    cout << "The simple interest is: " << interest << endl;

    return 0;
}
