#include <iostream>
#include <cmath>
#include <ctime>
#include <vector>
using namespace std;

int main() {

    srand(time(0));

    int n, i, j, t, k, c, r;
    bool scambi(true);

    do {
        cout<<"Quanti numeri generare?"<<endl;
        cin>>n;
    } while (n<=0);

    vector<int>l(n);
    for (i=0; i<n; i++) {
        l[i]= 4+(rand() % 7);
    }

    i=0;
    while (i<n && scambi==true) {
        scambi=false;
        j=0;

        while (j<(n-1)-i) {
            if (l[j]>l[j+1]) {

                t=l[j];
                l[j]=l[j+1];
                l[j+1]=t;

                scambi=true;
            }
            j=j+1;
        }
        i=i+1;
    }
    
    cout<<"Lunghezze dei listelli: ";
    for (i=0; i<n; i++) {
        cout<<l[i]<<"; ";
    }

    c=0;
    if (n>4) {
        for (i=0; i<=n-2; i++) {
            k=i+1;

            if (l[i]=l[k]) {
                c=c+1;;
            }
        }

        r=c/2;
        cout<<"Rettangoli: "<<r<<endl;
    }
    else
    {
        cout<<"Non puoi creare rettangoli"<<endl;
    }
}