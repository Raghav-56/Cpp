#include <iostream>
using namespace std;

class nums {
    int a,b,c;
    public:
        void input() {
            cout << "Enter Numbers: ";
            cin >> a >> b;
        }
        int add() {
            c = a+b;
            return c;
        }  
        void print_rst() {
            cout << "Sum of " << a << " and " << b << " = " << c << ".\n";
        } 
};




int main()
{
    nums x;
    x.input();
    x.add();
    x.print_rst();
    return 0;
}