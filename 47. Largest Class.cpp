#include <iostream>
using namespace std;

class Largest {
    int a, b, m;
public:
    void setData(int x, int y, int z) {
        a = x;
        b = y;
        m = z;
    }

    friend void find_Max(Largest l);
};

void find_Max(Largest l) {
    int max = l.a;
    if (l.b > max) max = l.b;
    if (l.m > max) max = l.m;

    cout << "The largest number is: " << max << endl;
}

int main() {
    Largest obj;
    obj.setData(10, 20, 15);
    find_Max(obj);
    return 0;
}
