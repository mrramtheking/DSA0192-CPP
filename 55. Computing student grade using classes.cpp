#include <iostream>
#include <iomanip>  // For formatting output
using namespace std;

class Student {
private:
    string name;
    string regNo;
    float mark1, mark2, mark3;
    float average;
    char grade;

public:
    // Function to input student data
    void inputData() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Registration Number: ";
        getline(cin, regNo);
        cout << "Enter Mark 1: ";
        cin >> mark1;
        cout << "Enter Mark 2: ";
        cin >> mark2;
        cout << "Enter Mark 3: ";
        cin >> mark3;
        cin.ignore(); // To consume the newline character after entering marks
    }

    // Function to calculate average marks
    void calculateAverage() {
        average = (mark1 + mark2 + mark3) / 3;
    }

    // Function to assign grade based on average
    void assignGrade() {
        if (average > 90)
            grade = 'S';
        else if (average > 80)
            grade = 'A';
        else if (average > 70)
            grade = 'C';
        else if (average > 60)
            grade = 'D';
        else if (average > 50)
            grade = 'E';
        else
            grade = 'F';
    }

    // Function to display student data
    void displayData() const {
        cout << left << setw(20) << name
             << setw(15) << regNo
             << setw(10) << mark1
             << setw(10) << mark2
             << setw(10) << mark3
             << setw(10) << fixed << setprecision(2) << average
             << grade << endl;
    }
};

int main() {
    const int NUM_STUDENTS = 10;
    Student students[NUM_STUDENTS];

    cout << "Enter details for " << NUM_STUDENTS << " students:\n\n";
    for (int i = 0; i < NUM_STUDENTS; ++i) {
        cout << "Student " << i + 1 << ":\n";
        students[i].inputData();
        students[i].calculateAverage();
        students[i].assignGrade();
        cout << endl;
    }

    cout << "\nStudent Records:\n";
    cout << left << setw(20) << "Name"
         << setw(15) << "RegNo"
         << setw(10) << "Mark1"
         << setw(10) << "Mark2"
         << setw(10) << "Mark3"
         << setw(10) << "Average"
         << "Grade" << endl;
    cout << string(75, '-') << endl;

    for (int i = 0; i < NUM_STUDENTS; ++i) {
        students[i].displayData();
    }

    return 0;
}
