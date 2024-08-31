#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;

public:
    Student() {
        name = "Unknown";
    }

    Student(string studentName) {
        name = studentName;
    }

    void printName() {
        cout << "Student Name: " << name << endl;
    }
};

int main() {
    Student student1;
    Student student2("John Doe");

    student1.printName();
    student2.printName();

    return 0;
}
