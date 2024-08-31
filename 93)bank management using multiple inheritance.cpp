#include <iostream>
#include <string>
using namespace std;

class Customer {
protected:
    string name;
    int acc_number;
    string acc_type;
    float balance;
public:
    Customer() : balance(30) {}  // Initialize balance with 30
    void getDetails() {
        cout << "Enter Customer Name : ";
        cin >> name;
        cout << "Enter Account Number  : ";
        cin >> acc_number;
        cout << "Enter Account Type    : ";
        cin >> acc_type;
    }
};

class Saving : public Customer {
public:
    void deposit() {
        float amount;
        cout << "Enter amount to Deposit : ";
        cin >> amount;
        balance += amount;
        cout << "Amount Deposited Successfully\n";
    }

    void withdraw() {
        float amount;
        cout << "Balance :- " << balance << endl;
        cout << "Enter amount to be withdraw : ";
        cin >> amount;
        if (amount > balance) {
            cout << "Insufficient Balance!\n";
        } else {
            balance -= amount;
            cout << "Balance Amount After Withdraw: " << balance << endl;
        }
    }

    void displayBalance() {
        cout << "Balance :  " << balance << endl;
    }

    void displayFullDetails() {
        cout << "Customer Name : " << name << endl;
        cout << "Account Number  : " << acc_number << endl;
        cout << "Account Type    : " << acc_type << endl;
        cout << "Balance :  " << balance << endl;
    }
};

int main() {
    char accChoice;
    Saving customer;
    
    cout << "Enter S for saving customer and C for current a/c customer : ";
    cin >> accChoice;

    customer.getDetails();

    int choice;
    do {
        cout << "\nChoose Your Choice\n";
        cout << "1)   Deposit\n";
        cout << "2)   Withdraw\n";
        cout << "3)   Display Balance\n";
        cout << "4)   Display with full Details\n";
        cout << "5)   Exit\n";
        cout << "Enter Your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            customer.deposit();
            break;
        case 2:
            customer.withdraw();
            break;
        case 3:
            customer.displayBalance();
            break;
        case 4:
            customer.displayFullDetails();
            break;
        case 5:
            cout << "Thank You for Banking with us..\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
