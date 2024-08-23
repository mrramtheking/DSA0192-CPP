#include <iostream>
using namespace std;

int getperson(int age) {
    return age;
}

void checkVotingEligibility(int age) {
    int eligibleAge = 18;

    if (age >= eligibleAge) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are not eligible to vote. You need to wait " 
             << (eligibleAge - age) << " more years." << endl;
    }
}

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    int personAge = getperson(age);
    checkVotingEligibility(personAge);

    return 0;
}
