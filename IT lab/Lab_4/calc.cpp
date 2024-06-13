#include <iostream>
using namespace std;





char op() {
    char op;
    cout<<"\n1.Addition(+).\n2.Subtraction(-).\n3.Multiplication(*).\n4.Division(/).\n5.Show More Options(m)\nEnter the Symbole of Operation you want to perform: "<<endl;
    cin>>op;
    //cout<<op<<endl;
    return op;
}

char mrop() {
    char op;
    cout<<"\n1.Rem()\nEnter the Symbole of Operation you want to perform: "<<endl;
    cin>>op;
    //cout<<op<<endl;
    return op;
}

float calc(float a,float b,char op) {
    float c;
    switch (op)
    {
        case '+':
            c = a+b;
            break;
        case '-':
            c = a-b;
            break;
        case '*':
            c = a*b;
            break;
        case '/':
            c = a/b;
            break;
        case 'm':
            mrop();
        default:
            cout<<"Invalid Symbol!!\n";
            break;
    }
    return c;
}



int main()
{
    float a,b,c;
    char op;
    cout<<"Enter two Numbers(): "<<endl;
    cin>>a>>b;
    //cout<<a<<b<<endl;

    op = op();
    
    c = calc(a,b,op);

    cout<<"The Result="<<c<<endl;

    return 0;
}
