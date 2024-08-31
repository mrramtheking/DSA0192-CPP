#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    int roll_number;
    string name;
    string address;
    string city;
    int marks1, marks2, marks3;
public:
    void getDetails() {
        cout << "Enter student roll number: ";
        cin >> roll_number;
        cin.ignore(); 
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter student address: ";
        getline(cin, address);
        cout << "Enter student city: ";
        getline(cin, city);
        cout << "Enter the marks1: ";
        cin >> marks1;
        cout << "Enter the marks2: ";
        cin >> marks2;
        cout << "Enter the marks3: ";
        cin >> marks3;
    }
};

class Report : public Student {
public:
    void displayReport() {
        cout << "\nStudent Details:\n";
        cout << "********************\n";
        cout << "The student roll number: " << roll_number << endl;
        cout << "The student name: " << name << endl;
        cout << "The student address: " << address << endl;
        cout << "The student city: " << city << endl;
        cout << "Marks1: " << marks1 << endl;
        cout << "Marks2: " << marks2 << endl;
        cout << "Marks3: " << marks3 << endl;

        int totalMarks = marks1 + marks2 + marks3;
        float percentage = totalMarks / 3.0;
        cout << "Total percentage: " << percentage << endl;

        char grade;
        if (percentage >= 75) {
            grade = 'A';
        } else if (percentage >= 50) {
            grade = 'B';
        } else if (percentage >= 35) {
            grade = 'C';
        } else {
            grade = 'F';
        }
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Report studentReport;
    studentReport.getDetails();
    studentReport.displayReport();

    return 0;
}
