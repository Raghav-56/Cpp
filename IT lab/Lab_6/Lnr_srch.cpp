#include <iostream>
using namespace std;

int main()
{
    int n,i;
    bool in=false;
    int arr[9]={1,2,3,4,5,6,7,8,9};
    cout<<"Enter Number: "<<endl;
    cin>>n;

    for(i=0;i<9;i++) {
        if(arr[i]==n) {
            cout<<n<<" is at "<< i+1 <<" position in the given array"<<endl;
            in = true;
            break;
        }
    }

    if(in == false) {
        cout<< n <<" is not in the given array"<<endl;
    }

    
    

    
    return 0;
}
