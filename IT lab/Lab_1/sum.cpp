#include <iostream>
using namespace std;

//TSRS
int add(int x,int y){
    return (x+y);
}

int main()
{
    int a,b,c;
    cout << "Enter Numbers: ";
    cin >> a >> b;
    c=add(a,b);
    cout << "Sum of " << a << " and " << b << " = " << c << ".\n";

    return 0;
}