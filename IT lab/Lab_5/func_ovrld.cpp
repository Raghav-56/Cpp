#include <iostream>
using namespace std;

float sum(int a, float b) {
    return a+b;
}
int sum(int a, int b, int c) {
    return a+b+c;
}

int volume(int a) {
    return a*a*a;
}
int volume(int l, int b, int h) {
    return l*b*h;
}
float volume(float r, int h) {
    return 3.14*r*r*h;
}



int main() {
    //cout<<"Sums{sum()}"<<endl;
    cout<<"The Sum of a int and a float is= "<<sum(2,2.4)<<endl;
    cout<<"The Sum of 3 int is= "<<sum(1,3,4)<<endl;
    //cout<<"Volumes{volume()}"<<endl;
    cout<<"The Volume of a cube is= "<<volume(5)<<endl;
    cout<<"The Volume of a cuboid is= "<<volume(2,4,3)<<endl;
    cout<<"The Volume of a cyllinder is= "<<volume(2.3,4)<<endl;

    return 0;
}
