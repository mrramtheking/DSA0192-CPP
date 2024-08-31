#include <iostream>
using namespace std;

class PrimeCheck {
    int number;

public:
    PrimeCheck(int num) {
        number = num;
    }

    bool isPrime(int n) {
        if (n <= 1)
            return false;
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0)
                return false;
        }
        return true;
    }

    void checkSumOfTwoPrimes() {
        bool found = false;
        for (int i = 2; i <= number / 2; i++) {
            if (isPrime(i) && isPrime(number - i)) {
                cout << number << " = " << i << " + " << number - i << endl;
                found = true;
            }
        }
        if (!found)
            cout << number << " cannot be expressed as the sum of two prime numbers." << endl;
    }

    ~PrimeCheck() {
        cout << "Destructor called, object destroyed." << endl;
    }
};

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    PrimeCheck pc(num);
    pc.checkSumOfTwoPrimes();

    return 0;
}
