#include <iostream>
#include <iomanip>
using namespace std;

class Employee {
private:
    string name;
    int id;
    double basicSalary, hra, da, gp, np;

public:
    void getDetails() {
        cout << "Enter the employee name: ";
        cin >> name;
        cout << "Enter the employee id: ";
        cin >> id;
        cout << "Enter the basic salary: ";
        cin >> basicSalary;
        cout << "Enter the hra: ";
        cin >> hra;
        cout << "Enter the da: ";
        cin >> da;
        calculatePay();
    }

    void calculatePay() {
        gp = basicSalary + hra + da;
        np = gp - 500; // Assuming a fixed deduction of 500 for simplicity
    }

    void displayDetails() {
        cout << setw(12) << name << setw(8) << id << setw(8) << basicSalary 
             << setw(8) << hra << setw(8) << da << setw(8) << gp << setw(8) << np << endl;
    }
};

int main() {
    int n;
    cout << "****************" << endl;
    cout << "Employee details" << endl;
    cout << "****************" << endl;
    cout << "Enter the number of employees: ";
    cin >> n;

    Employee employees[n];

    for (int i = 0; i < n; i++) {
        employees[i].getDetails();
    }

    cout << endl << "EMPLOYEE NAME    ID    BASIC    HRA    DA     GP     NP" << endl;
    for (int i = 0; i < n; i++) {
        employees[i].displayDetails();
    }

    return 0;
}
