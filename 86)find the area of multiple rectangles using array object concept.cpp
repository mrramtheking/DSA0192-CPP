#include <iostream>

using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
 
    void setDimensions(int l, int b) {
        length = l;
        breadth = b;
    }

     
    int calculateArea() {
        return length * breadth;
    }
};

int main() {
    int n;

    cout << "Enter the number of rectangles: ";
    cin >> n;

   
    Rectangle rectangles[n];

    for (int i = 0; i < n; i++) {
        int l, b;
        cout << "Enter length and breadth of rectangle " << i + 1 << ": ";
        cin >> l >> b;
        rectangles[i].setDimensions(l, b);
    }

    cout << "\nAreas of the rectangles:\n";
    for (int i = 0; i < n; i++) {
        cout << "Area of rectangle " << i + 1 << ": " << rectangles[i].calculateArea() << endl;
    }

    return 0;
}
