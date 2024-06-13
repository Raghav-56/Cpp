#include <iostream>
using namespace std;


int bnrySrch(int arr[], int l, int r, int k) {

    while (l <= r) {
        int m = l + (r - l) / 2;

        if (arr[m] == k) {
            return m;
        } else if (arr[m] < k) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }

    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 72};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    cout<<"Enter number: ";
    cin>>k;

    int r = bnrySrch(arr, 0, n - 1, k);

    if (r != -1) {
        cout << "Element " << k << " found at index " << r << endl;
    } else {
        cout << "Element " << k << " not found in the array." << endl;
    }

    return 0;
}
