#include <iostream>
using namespace std;

void fact(int n) {
    int f=1;
    for(int i=2;i<=n;i++) {
        f *= i;
    }
    cout<<n<<"!="<<f<<endl;
}

int main() {
    unsigned int n;
    cout<<"Enter Number: ";
    cin>>n;
    //cout<<n;
    
    fact(n);
    
    return 0;
}

