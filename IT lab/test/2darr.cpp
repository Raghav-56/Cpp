#include <iostream>
using namespace std;

int main() {
    const int r = 3;
    const int c = 3;

    int arr1[r][c] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr2[r][c] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};

    int* ra = new int[r*c];

    int* ptr1 = &arr1[0][0];
    int* ptr2 = &arr2[0][0];

    for (int i = 0; i < r * c; ++i) {
        *ra = *ptr1 + *ptr2;
        ++ptr1;
        ++ptr2;
        ++ra;
    }

    cout << "Sum of the two 2D arrays: " << endl;
    ra = ra - r * c;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << *(ra+i*c+j) << ", ";
        }
        cout << endl;
    }

    delete[] ra;


    return 0;
}
