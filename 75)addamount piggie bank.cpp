#include <iostream>

using namespace std;

class AddAmount {
private:
    int amount;

public:
    AddAmount() {
        amount = 50;
    }

    AddAmount(int additionalAmount) {
        amount = 50 + additionalAmount;
    }

    void displayAmount() {
        cout << "Final amount in the Piggie Bank: $" << amount << endl;
    }
};

int main() {
    AddAmount obj1;
    AddAmount obj2(30);

    cout << "Without adding any amount: ";
    obj1.displayAmount();

    cout << "After adding $30: ";
    obj2.displayAmount();

    return 0;
}
