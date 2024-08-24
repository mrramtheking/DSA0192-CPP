#include <iostream>
using namespace std;

class Box {
public:
    int length;
private:
    int width;
public:
    void setWidth(int w) {
        width = w;
    }
    int getWidth() {
        return width;
    }
    void display() {
        cout << "Length: " << length << endl;
        cout << "Width: " << getWidth() << endl;
    }
};

int main() {
    Box box;
    box.length = 10;
    box.setWidth(5);
    box.display();
    return 0;
}
