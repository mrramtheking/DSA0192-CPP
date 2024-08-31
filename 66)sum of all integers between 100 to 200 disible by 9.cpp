#include <iostream>
using namespace std;

class DivisibleByNine {
    int count;
    int sum;

public:
    DivisibleByNine() {
        count = 0;
        sum = 0;
        findNumbers();
    }

    void findNumbers() {
        for (int i = 100; i <= 200; i++) {
            if (i % 9 == 0) {
                count++;
                sum += i;
                cout << i << " ";
            }
        }
        cout << endl;
    }

    void displayResult() {
        cout << "Count of numbers divisible by 9 between 100 and 200: " << count << endl;
        cout << "Sum of numbers divisible by 9 between 100 and 200: " << sum << endl;
    }

    ~DivisibleByNine() {
        cout << "Destructor called, object destroyed." << endl;
    }
};

int main() {
    DivisibleByNine obj;
    obj.displayResult();

    return 0;
}
