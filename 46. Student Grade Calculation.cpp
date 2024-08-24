#include <iostream>
using namespace std;

int main() {
    float marks[4];
    float total = 0.0, aggregate;
    char grade;

    cout << "Enter marks for 4 subjects:" << endl;
    for (int i = 0; i < 4; i++) {
        cin >> marks[i];
        total += marks[i];
    }

    aggregate = (total / 400) * 100;

    if (aggregate > 75) {
        grade = 'D'; // Distinction
    } else if (aggregate >= 60) {
        grade = 'F'; // First Division
    } else if (
    else if (aggregate >= 50) {
        grade = 'S'; // Second Division
    } else if (aggregate >= 40) {
        grade = 'T'; // Third Division
    } else {
        grade = 'F'; // Fail
    }

    cout << "Total Marks: " << total << endl;
    cout << "Aggregate: " << aggregate << "%" << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
