#include <iostream>
using namespace std;

#define MAX 10

void multiplyMatrices(int a[MAX][MAX], int b[MAX][MAX], int result[MAX][MAX], int rowA, int colA, int rowB, int colB) {
    for(int i = 0; i < rowA; i++) {
        for(int j = 0; j < colB; j++) {
            result[i][j] = 0;
            for(int k = 0; k < colA; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int a[MAX][MAX], b[MAX][MAX], result[MAX][MAX];
    int rowA, colA, rowB, colB;

    cout << "Enter rows and columns for matrix A: ";
    cin >> rowA >> colA;
    cout << "Enter rows and columns for matrix B: ";
    cin >> rowB >> colB;

    if (colA != rowB) {
        cout << "Matrix multiplication not possible." << endl;
        return 1;
    }

    cout << "Enter elements of matrix A:" << endl;
    for(int i = 0; i < rowA; i++) {
        for(int j = 0; j < colA; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Enter elements of matrix B:" << endl;
    for(int i = 0; i < rowB; i++) {
        for(int j = 0; j < colB; j++) {
            cin >> b[i][j];
        }
    }

    multiplyMatrices(a, b, result, rowA, colA, rowB, colB);

    cout << "Product of the matrices:" << endl;
    for(int i = 0; i < rowA; i++) {
        for(int j = 0; j < colB; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
