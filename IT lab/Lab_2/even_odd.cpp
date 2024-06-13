#include <iostream>
using namespace std;

void evod(int n) {
    if (n%2==0) {
        cout<<"Number entered is Even\n";
    }
    else {
        cout<<"Number entered is Odd\n";
    }
}

int main() {
    int a;
    cout<<"Enter Number: ";
    cin>>a;
    
    evod(a);

    //cout<<a;
    return 0;
}
