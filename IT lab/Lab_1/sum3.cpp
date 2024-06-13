#include <iostream>
using namespace std;

class nums {
        int a,b;
    public:
        void take(){
            cout<<"Enter Numbers: ";
            cin>>a>>b;
        }
        void add(){    
            cout<<"Sum of "<<a<<" and "<<b<<" = "<<a+b<<endl;

        }
};


int main(){
    nums X;
    X.take();
    X.add();
    return 0;
}