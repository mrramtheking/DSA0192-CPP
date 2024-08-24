#include <iostream>
#include <iomanip>
using namespace std;

class Employee {
public:
    string empName;
    int empId;
    string address;
    string mailId;
    string mobileNo;
    float basicPay;

    Employee(string name, int id, string addr, string mail, string mobile, float bp)
        : empName(name), empId(id), address(addr), mailId(mail), mobileNo(mobile), basicPay(bp) {}

    virtual void calculateSalary() = 0; // Pure virtual function
};

class Programmer : public Employee {
public:
    Programmer(string name, int id, string addr, string mail, string mobile, float bp)
        : Employee(name, id, addr, mail, mobile, bp) {}

    void calculateSalary() {
        float DA = basicPay * 0.97;
        float HRA = basicPay * 0.10;
        float PF = basicPay * 0.12;
        float SCF = basicPay * 0.001;
        float grossSalary = basicPay + DA + HRA;
        float netSalary = grossSalary - PF - SCF;

        cout << fixed << setprecision(2);
        cout << "Programmer Pay Slip" << endl;
        cout << "Name: " << empName << endl;
        cout << "Employee ID: " << empId << endl;
        cout << "Basic Pay: " << basicPay << endl;
        cout << "Gross Salary: " << grossSalary << endl;
        cout << "Net Salary: " << netSalary << endl;
    }
};

// Define similar classes for AssistantProfessor, AssociateProfessor, and Professor

int main() {
    Programmer prog("John Doe", 1234, "123 Main St", "john.doe@example.com", "123-456-7890", 50000);
    prog.calculateSalary();
    return 0;
}
