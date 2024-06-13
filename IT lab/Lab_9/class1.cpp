#include <iostream>
using namespace std;

class student{
    private:
        int roll_no;
        int marks;
    public:
        void input();
        void output();
};
void student::input(){
    cout<<"Enter roll No. and marks"<<endl;
    cin>>roll_no>>marks;
}
void student::output(){
    cout<<"\nroll no= "<<roll_no<<"\nmarks= "<<marks<<endl;
}   

int main(){
    student s1, s2;

    s1.input();
    s2.input();

    s1.output();
    s2.output();
    
    return 0;
    
}