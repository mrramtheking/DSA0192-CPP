#include <iostream>
#include <cctype>
using namespace std;

bool isValidUsername(string username) {
    // Username must be at least 5 characters long
    if (username.length() < 5) {
        return false;
    }
    // Username must contain only alphanumeric characters
    for (char c : username) {
        if (!isalnum(c)) {
            return false;
        }
    }
    return true;
}

int main() {
    string username;

    cout << "Enter username: ";
    cin >> username;

    if (isValidUsername(username)) {
        cout << "The username is valid." << endl;
    } else {
        cout << "The username is invalid." << endl;
    }

    return 0;
}
