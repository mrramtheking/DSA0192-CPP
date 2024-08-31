#include <iostream>

using namespace std;

int main() {
    int num = 10;           
    float decimal = 5.5;   
    char character = 'A';   

    cout << "Address of num: " << &num << endl;
    cout << "Address of decimal: " << &decimal << endl;
    cout << "Address of character: " << &character << endl;

    return 0;
}
