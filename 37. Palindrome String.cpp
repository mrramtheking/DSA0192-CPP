#include <iostream>
#include <algorithm>
using namespace std;

inline bool isPalindrome(string str) {
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());
    return str == reversedStr;
}

int main() {
    int choice;
    string str;

    cout << "Choose an option: " << endl;
    cout << "1. Check if a string is a palindrome" << endl;
    cout << "2. Exit" << endl;
    cin >> choice;

    if (choice == 1) {
        cout << "Enter the string: ";
        cin >> str;
        if (isPalindrome(str)) {
            cout << "The string is a palindrome." << endl;
        } else {
            cout << "The string is not a palindrome." << endl;
        }
    } else {
        cout << "Exiting program." << endl;
    }

    return 0;
}
