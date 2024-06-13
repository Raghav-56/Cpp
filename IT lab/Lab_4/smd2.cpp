#include <iostream>
using namespace std;

int sum(int x, int y) {
    return (x+y);
}
int mult(int x, int y) {
    return (x*y);
}
int dvs(int x, int y) {
    return (x/y);
}

int main() {
    int a,b;
    cout<<"Enter Number(s): ";
    cin>>a>>b;
    cout<<"Sum="<<sum(a,b)<<endl;
    cout<<"Product="<<mult(a,b)<<endl;
    cout<<"Divident="<<dvs(a,b)<<endl;
    return 0;
}

