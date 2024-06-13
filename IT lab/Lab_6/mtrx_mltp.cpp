#include <iostream>
#include <vector>

using namespace std; // Add this line to use the standard namespace

// Function to multiply two matrices
vector<vector<int>> matrixMultiplication(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    int n = A.size(); // Number of rows in matrix A
    int m = A[0].size(); // Number of columns in matrix A
    int p = B[0].size(); // Number of columns in matrix B

    // Initialize the result matrix with zeros
    vector<vector<int>> result(n, vector<int>(p, 0));

    // Perform matrix multiplication
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < p; ++j) {
            for (int k = 0; k < m; ++k) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    return result;
}

int main() {
    // Example matrices
    vector<vector<int>> A = {{1, 2}, {3, 4}};
    vector<vector<int>> B = {{5, 6}, {7, 8}};

    // Multiply matrices A and B
    vector<vector<int>> result = matrixMultiplication(A, B);

    // Print the result
    cout << "Matrix A:" << endl;
    for (const auto& row : A) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    cout << "Matrix B:" << endl;
    for (const auto& row : B) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    cout << "Result of matrix multiplication:" << endl;
    for (const auto& row : result) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
