#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int min_indx = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_indx]) {
                min_indx = j;
            }
        }
        swap(arr[i], arr[min_indx]);
    }
}

void dsp(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    dsp(arr, n);

    selectionSort(arr, n);

    cout << "Sorted array: ";
    dsp(arr, n);

    return 0;
}
