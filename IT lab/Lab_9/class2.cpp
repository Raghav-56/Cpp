//counter using constructor
#include <iostream>
using namespace std;

class counter{
    private:
        int count;
    public:
        counter(){
            count=0;
        }
        void inc_count (){
            count++;
        }  
        int get_count (){
            return count;
        }
};

int main(){
    counter c1;

    cout<<"initial count= ";
    cout<<c1.get_count();
    c1.inc_count();

    cout<<"\nafter function call= ";
    cout<<c1.get_count();

    return 0;
}