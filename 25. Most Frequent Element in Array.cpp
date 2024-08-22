#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    unordered_map<int, int> frequency;
    int maxFreq = 0;
    int mostFrequent;

    for (int num : arr) {
        frequency[num]++;
        if (frequency[num] > maxFreq) {
            maxFreq = frequency[num];
            mostFrequent = num;
        }
    }

    cout << "The most frequent element is: " << mostFrequent << endl;

    return 0;
}
