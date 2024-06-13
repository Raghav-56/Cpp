#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double p = 10000, r = 5, t = 2;

    cout<<"Enter Principal ammount:"<<endl;
    cin>>p;
    cout<<"Enter rate of interest:"<<endl;
    cin>>r;
    cout<<"Enter time:"<<endl;
    cin>>t;


    double a = p * pow((1 + r/ 100), t);

    double cpdi = a - p;

    cout << "Compound interest is $" << cpdi << endl;

    return 0;
}
