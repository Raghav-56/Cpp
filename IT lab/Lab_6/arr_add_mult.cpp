#include <iostream>
using namespace std;

void dsp(int arr[]) {
    for(int i=0;i<5;i++) {
        cout<<arr[i]<<", ";
    }
    cout<<endl;
}
//void add(int arr1, int arr2, int* arra);
//void mult(int arr1, int arr2, int* arrm);
int main()
{
    int i,j;
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={2,4,6,8,10};
    int arra[5], arrm[5];

    cout<<"Initially: "<<endl;
    cout<<"arr1:"<<endl;
    dsp(arr1);
    cout<<"arr2:"<<endl;
    dsp(arr2);


    for(i=0;i<5;i++) {
        arra[i] = arr1[i]+arr2[i];
    }
    cout<<"Array Sum: "<<endl;
    dsp(arra);

    for(i=0;i<5;i++) {
        arrm[i] = arr1[i]*arr2[i];
    }
    cout<<"Product: "<<endl;
    dsp(arrm);
    
    
    return 0;
}


void add(int arr1[], int arr2[], int* arra) {
    for(int i=0;i<5;i++) {
        arra[i] = arr1[i]+arr2[i];
    }
}

void mult(int arr1[], int arr2[], int* arrm) {
    for(int i=0;i<5;i++) {
        arrm[i] = arr1[i]*arr2[i];
    }
}