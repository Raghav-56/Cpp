#include <iostream>
using namespace std;

void grtr(int x, int y) {
    if(x>y) {
        cout<<x<<" is greater"<<endl;
    }
    else if(y>x) {
        cout<<y<<" is greater"<<endl;
    }
    else {
        cout<<"Both are equal"<<endl;
    }
}

int main() {
    int a,b;
    cout<<"Enter Number(s): ";
    cin>>a>>b;
    grtr(a,b);
    return 0;
}

