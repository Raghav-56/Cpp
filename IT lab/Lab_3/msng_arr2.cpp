#include <iostream>
using namespace std;

//#include <algorithm> // if dealing with unsorted array // not needed in current form...(can improve for loop with it though)


void chm(int iarr[],int rarr[]);

int main()
{
    int iarr[11]={10,11,12,13,14,15,16,17,18,19,20};
    int rarr[11]={10,17,11,20,13,14,15,16,19};

    chm(iarr,rarr);

    return 0;
}

void chm(int iarr[],int rarr[]) {
    int il=11,rl=11,i,r;
    bool chm;

    //il = sizeof(iarr)/sizeof(*iarr);
    rl=sizeof(rarr)/sizeof(*rarr); //cout<<rl<<endl;

    for(i=0;i<il;i++) { //i=10;i<20;i++   
        chm=true;
        for(r=0;r<rl;r++) {
            if(iarr[i]==rarr[r]) { // i==rarr[r]
                chm=false;
                break;
            }
        }
        if(chm==true) {
            cout<<iarr[i]<<" is a missing no."<<endl;
        }
    }
}


/*
    int main() {
        //sort(rarr[0],rarr[11]);


        //int* rarr = new int[rl]{10,13,14,15,16,17,18,19,20};
        /*
        cout<<"Enter number of elements: "<<endl;
        cin>>rl;
            cout<<"Enter "<<n<<"numbers: "<<endl;
        for (int i =0;i<rl;i++) {
            cin>>rarr[i];
        }*/
        //delete rarr;


        //int mn=il-rl; //cout<<mn<<endl;
        //int* mnarr = new int[mn]; */
        



