#include <iostream>

using namespace std;

class A {
private:
    int x;

protected:
    void setX(int value) {
        x = value;
    }

    int getX() {
        return x;
    }
};

class B : private A {
public:
    void setData(int value) {
        setX(value);
    }

    void displayData() {
        cout << "Here x is the protected data member of class A, class A is inherited privately to class B." << endl;
        cout << "In private inheritance, only protected data members and member functions can be accessed by the derived class." << endl;
        cout << "Value of x: " << getX() << endl;
    }
};

int main() {
    B obj;
    int value;
    
    cout << "Value of x: ";
    cin >> value;
    
    obj.setData(value);
    obj.displayData();
    
    return 0;
}
