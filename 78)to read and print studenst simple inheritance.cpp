#include <iostream>
#include <string>

using namespace std;

class BasicInfo {
protected:
    string name;
    int age;
    char gender;

public:
    void getBasicInfo() {
        cout << "Enter student's basic information:\n";
        cout << "Name?: ";
        getline(cin, name);
        cout << "Age?: ";
        cin >> age;
        cout << "Gender? (M/F): ";
        cin >> gender;
    }

    void printBasicInfo() {
        cout << "Name: " << name << ", Age: " << age << ", Gender: " << gender << endl;
    }
};

class ResultInfo : public BasicInfo {
private:
    int totalMarks;
    char grade;
    double percentage;

public:
    void getResultInfo() {
        cout << "Enter student's result information:\n";
        cout << "Total Marks?: ";
        cin >> totalMarks;
        cout << "Grade?: ";
        cin >> grade;

         
        percentage = (totalMarks / 500.0) * 100;
    }

    void printResultInfo() {
        cout << "Total Marks: " << totalMarks << ", Percentage: " << percentage << "%, Grade: " << grade << endl;
    }
};

int main() {
    ResultInfo student;

    cin.ignore(); 
    student.getBasicInfo();
    student.getResultInfo();

    student.printBasicInfo();
    student.printResultInfo();

    return 0;
}
