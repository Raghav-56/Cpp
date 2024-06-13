#include <iostream>
using namespace std;

int sum(int *x, int *y) {
    return (*x+*y);
}

int main()
{
    int a,b;
    cout<<"Enter Number(s): ";
    cin>>a>>b;
    cout<<sum(&a,&b)<<"\n";
    return 0;
}

