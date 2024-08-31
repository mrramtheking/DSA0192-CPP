#include <iostream>

using namespace std;

class Complex {
public:
    int real;
    int imaginary;

   
    void setValues(int r, int i) {
        real = r;
        imaginary = i;
    }

    
    void display() {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }
};

int main() {
    
    Complex obj;

 
    Complex *ptr = &obj;
 
    ptr->setValues(1, 54);
 
    ptr->display();

    return 0;
}
