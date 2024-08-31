#include <iostream>

using namespace std;

 
class Base1 {
protected:
    int x;

public:
    void setX(int value) {
        x = value;
    }
};

 
class Base2 {
protected:
    int y;

public:
    void setY(int value) {
        y = value;
    }
};

 
class Derived : public Base1, public Base2 {
public:
    int sum() {
        return x + y;
    }
};

int main() {
    Derived obj;
    int x, y;

    cout << "enter value of x: ";
    cin >> x;
    obj.setX(x);

    cout << "enter value of y: ";
    cin >> y;
    obj.setY(y);

    cout << "Sum = " << obj.sum() << endl;

    return 0;
}
