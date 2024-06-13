#include <iostream>
using namespace std;

class space {
        int x,y,z;
    public:
        void operator-();
        //space() {}
        space(int a, int b, int c) {
            x=a;y=b;z=c;
        }
        void display();
};

void space :: display() {
    cout<<x<<"\t"<<y<<"\t"<<z<<endl;
}

void space :: operator-() {
    x=-x;y=-y;z=-z;
}

int main() {
    space S(2,3,-2);
    S.display();
    -S;
    S.display();
    
    return 0;
}
