#include <iostream>
using namespace std;

void swapv(int x, int y) {
    /*x = x + y;
    y = x - y;
    x = x - y;*/
    int t;
    t =x;
    x =y;
    y =t;
}

void swapr(int *x, int *y) {
    /**x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;*/
    int t;
    t =*x;
    *x =*y;
    *y =t;
}
void dsp(int x, int y) {
    cout<<x<<"\t"<<y<<endl;
}

int main()
{
    int a,b;
    cout<<"Enter Number(s): ";
    cin>>a>>b;

    cout<<"Initially: "<<endl;
    dsp(a,b);

    swapv(a,b);
    cout<<"Call by Value: "<<endl;
    dsp(a,b);

    swapr(&a,&b);
    cout<<"Call by reference: "<<endl;
    dsp(a,b);

    return 0;
}

 