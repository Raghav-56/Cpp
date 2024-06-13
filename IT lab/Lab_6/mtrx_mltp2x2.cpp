#include <iostream>

using namespace std; // Add this line to use the standard namespace

// Function to multiply two matrices
void matrixMultiplication(int A[][2], int B[][2], int result[][2], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < n; ++k) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    const int n = 2; // Size of matrices (2x2)

    // Example matrices (2x2)
    int A[n][n] = {{1, 2}, {3, 4}};
    int B[n][n] = {{5, 6}, {7, 8}};
    int result[n][n];

    // Multiply matrices A and B
    matrixMultiplication(A, B, result, n);

    // Print the result
    cout << "Matrix A:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Matrix B:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Result of matrix multiplication:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
