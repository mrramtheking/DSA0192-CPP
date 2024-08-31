#include <iostream>
using namespace std;

class SeriesSum {
    int n;
public:
    
    SeriesSum() {
        n = 0;
    }


    SeriesSum(int num) {
        n = num;
    }

    int sumSeries() {
        int sum = 0;
        for (int i = 1; i <= n; ++i) {
            sum += i;
        }
        return sum;
    }
};

int main() {
    int number;

    cout << "Enter the value of n: ";
    cin >> number;

    SeriesSum series(number);

    cout << "The sum of the series 1 + 2 + ... + " << number << " is: " << series.sumSeries() << endl;

    return 0;
}
