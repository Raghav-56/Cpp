#include <iostream>
using namespace std;

int main()
{
    int iarr[11] = {10,11,12,13,14,15,16,17,18,19,20};
    int arr[11] = {10,12,13,14,15,16,17,18,19,20};
    /*for (int i =0;i<10;i++) {
        cout<<"Enter number:";
        cin>>arr[i];
    }*/
    for (int i =0;i<=10;i++) {
        if(arr[i]==iarr[i]) {
            continue;
        }
        else {
            cout<<iarr[i]<<" is the missing no.\n";
            break;
        }
    }
    
    return 0;
}
