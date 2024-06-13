#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter Int Number(s): ";
    cin>>a;
    if(!a) {
        cout<<"Invalid input, only integer allowed. ";
    }
    else {
        cout<<"Valid input. ";//<<a;
    }
    

    
    return 0;
}
