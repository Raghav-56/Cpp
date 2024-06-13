#include <iostream>
using namespace std;


//New Line
void nl() {
    cout<<"\n";
}



// Various different Pattern Functions

/*square
n "*";

****
****
****
****
*/
void str_sq(int n) {
    int i,j;
    cout<<"star(*) square: \n";
    for(i=1;i<=n;i++)
    {
        for (j=1;j<=n;j++)
        {
            cout << "*";
        }
        nl();
    }
    nl();
}

/*left-facing triangle
i "*";

*
**
***
****
*/
void str_lf_tri(int n) {
    int i,j;
    cout<<"star(*) left-facing triangle: \n";
    for(i=1;i<=n;i++) {
        for (j=1;j<=i;j++) {
            cout << "*";
        }
        nl();
    }
    nl();
}

/*right-facing triangle
n-i " ";i "*";
   *
  **
 ***
****
*/
void str_rf_tri(int n) {
    int i,j;
    cout<<"star(*) right-facing triangle: \n";
    for(i=1;i<=n;i++)
    {
        for (j=1;j<=n-i;j++)
        {
            cout << " ";
        }
        for (j=1;j<=i;j++)
        {
            cout << "*";
        }
        nl();
    }
    nl();
}

/*up pyramid
n-i " ";i "* "

   *
  * *
 * * *
* * * *
*/
void str_u_pyr(int n) {
    int i,j;
    cout<<"star(*) up pyramid: \n";
    for(i=1;i<=n;i++)
    {
        for (j=1;j<=n-i;j++)
        {
            cout << " ";
        }
        for (j=1;j<=i;j++)
        {
            cout << "* ";
        }
        nl();
    }
    nl();
}

/*down pyramid
i-1 " ";n-i+1 "* " OR [i=0...; <(!=)] i " ";n-i "* "

* * * *
 * * *
  * *
   *
*/
void str_d_pyr(int n) {
    int i,j;
    cout<<"star(*) down pyramid: \n";
    for(i=1;i<=n;i++)
    {
        for (j=0;j<=i;j++)
        {
            cout << " ";
        }
        for (j=0;j<=n-i;j++)
        {
            cout << "* ";
        }
        nl();
    }
    nl();
}


void ptrn(int ptr,int n) {
    switch (ptr)
    {
    case 1:
        str_sq(n);
        break;
    case 2:
        str_lf_tri(n);
        break;
    case 3:
        str_rf_tri(n);
        break;
    case 4:
        str_u_pyr(n);
        break;
    case 5:
        str_d_pyr(n);
        break;
    default:
        //cout<<"Error: Wrong no entered\n";
        cerr<<"Error: Wrong no entered\n";
        break;
    }
}




int main()
{
    int ptr,n;

    cout<<"Choose the pattern(Enter corresponding number):\n1.Square\n2.Left-facing Trinagle\n3.Right-facing Tringle\n4.Up Pyramid\n5.Down pyramid\n\n->";
    cin>>ptr;
    nl();

    cout << "Enter number of line(s): ";
    cin >> n;
    nl();

    ptrn(ptr,n);

    return 0;
}
