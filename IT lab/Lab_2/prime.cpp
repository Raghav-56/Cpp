#include <iostream>
using namespace std;

#include <cmath>

bool chpr2(int a);
bool chpr1(int a);

int main() {
    int a;
    bool p=true;

    cout<<"Enter Number: ";
    cin>>a; //cout<<a;
    
    p=chpr1(a);

    if(p==false) {
        cout<<a<<" is Not a Prime number\n";
    }
    else {
        cout<<a<<" is a Prime number\n";
    }

    return 0;
}

bool chpr1(int a) {
    if (a<0) {
        cerr<<"Number negative.\n";
        exit(1);
    }
    else if (a == 0 || a == 1) {
        return false;   
    }
    else {
        return chpr2(a);
    }
}

bool chpr2(int a) {
    int b,i;
    b=sqrt(a); //cout<<b;

    for(i=2;i<=b;++i) {
        if(a%i==0) {
            return false;
        }
    }
    return true;
}