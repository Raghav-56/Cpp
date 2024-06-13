#include <iostream>
using namespace std;

//void dsp(int arr);
//void mult(int arr);
//void add(int arr);
int main()
{
    int i,j,k;
    int arr1[3][3]={{1,0,0},{0,1,0},{0,0,1}};
    int arr2[3][3]={{2,0,0},{0,2,0},{0,0,2}};
    int arra[3][3]={{0,0,0},{0,0,0},{0,0,0}};
    int arrm[3][3]={{0,0,0},{0,0,0},{0,0,0}};

    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            cout<<arr1[i][j];
        }
    }

    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            cout<<arr2[i][j];
        }
    }


    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            arra[i][j] += arr1[i][j]+arr2[i][j];
        }
    }

    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            cout<<arra[i][j];
        }
    }

    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            for(k=0;k<3;k++) {
                arrm[i][j] += arr1[i][k]+arr2[k][j];
            }
            
        }
    }

    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            cout<<arrm[i][j];
        }
    }
    
    

    
    

    
    return 0;
}

/*void dsp(int arr[]) {
    int i,j;
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            cout<<arr[i][j];
        }
    }
}*/