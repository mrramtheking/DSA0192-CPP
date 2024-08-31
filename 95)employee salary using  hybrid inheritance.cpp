#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    int emp_id;
    string name;
    float basic_salary;
public:
    void getDetails() {
        cout << "Enter Employee ID: ";
        cin >> emp_id;
        cin.ignore(); // To clear the newline character from the input buffer
        cout << "Enter Employee Name: ";
        getline(cin, name);
        cout << "Enter basic salary of Employee: ";
        cin >> basic_salary;
    }
};

class Allowances : virtual public Employee {
protected:
    float HRA;
    float DA;
public:
    void calculateAllowances() {
        HRA = 0.10 * basic_salary; // 10% of basic salary as HRA
        DA = 0.05 * basic_salary;  // 5% of basic salary as DA
    }
};

class Deductions : virtual public Employee {
protected:
    float PF;
    float tax;
public:
    void calculateDeductions() {
        PF = 0.05 * basic_salary; // 5% of basic salary as PF
        tax = 0.02 * basic_salary; // 2% of basic salary as tax
    }
};

class Salary : public Allowances, public Deductions {
    float gross_salary;
    float net_salary;
public:
    void calculateSalary() {
        calculateAllowances();
        calculateDeductions();
        gross_salary = basic_salary + HRA + DA;
        net_salary = gross_salary - PF - tax;
    }

    void displaySalary() {
        cout << "\nGross Salary = Rs." << gross_salary << endl;
        cout << "Net Salary = Rs." << net_salary << endl;
    }
};

int main() {
    Salary empSalary;
    empSalary.getDetails();
    empSalary.calculateSalary();
    empSalary.displaySalary();

    return 0;
}
