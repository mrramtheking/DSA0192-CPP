#include <iostream>
using namespace std;

class ReverseNumber {
    int num;
public:
    ReverseNumber() {
        num = 0;
    }

    ReverseNumber(int n) {
        num = n;
    }

    int reverse() {
        int reversed = 0;
        while (num > 0) {
            reversed = reversed * 10 + num % 10;
            num /= 10;
        }
        return reversed;
    }
};

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    ReverseNumber reverseNum(number);

    cout << "The reverse of the number is: " << reverseNum.reverse() << endl;

    return 0;
}
