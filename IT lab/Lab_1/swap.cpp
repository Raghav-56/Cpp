#include <iostream>
using namespace std;

void swap(int &x,int &y) {
    x=x+y;
    y=x-y;
    x=x-y;
}

void prnt(int a,int b) {
    cout<<"\na="<<a<<", b="<<b<<".\n";
}

int main()
{
    int a,b;
    cout << "Enter Numbers: ";
    cin >> a >> b;

    cout<<"Initially:";
    prnt(a,b);

    swap(a,b);

    cout<<"After swaping:";
    prnt(a,b);    

    return 0;
}