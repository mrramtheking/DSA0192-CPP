#include <iostream>

using namespace std;

class Base1 {
public:
    void showBase1() {
        cout << "This is Base1 class." << endl;
    }
};

class Base2 {
public:
    void showBase2() {
        cout << "This is Base2 class." << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void showDerived() {
        cout << "This is Derived class, inheriting from both Base1 and Base2." << endl;
    }
};

int main() {
    Derived obj;

    obj.showBase1();
    obj.showBase2();
    obj.showDerived();

    return 0;
}
