#include <iostream>
using namespace std;

int main() {
    int a=100;
    int* p1=&a;
    int** p2=&p1;

    cout<<"Value of a: \n"                      <<a<<"\t"<<*p1<<"\t"<<**p2  <<endl;
    cout<<"Value of p1/Address of a: \n"        <<&a<<"\t"<<p1<<"\t"<<*p2   <<endl;
    cout<<"Value of of p2/Address of p1: \n"    <<&p1<<"\t"<<p2             <<endl;
    cout<<"Address of p2: \n"                   <<&p2                       <<endl;

    return 0;
}
