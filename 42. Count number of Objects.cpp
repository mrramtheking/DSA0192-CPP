#include <iostream>
using namespace std;

class Counter {
public:
    static int count;

    Counter() {
        count++;
    }
    
    static void displayCount() {
        cout << "Number of objects created: " << count << endl;
    }
};

int Counter::count = 0;

int main() {
    Counter c1, c2, c3;
    Counter::displayCount();  // Output: Number of objects created: 3
    return 0;
}
