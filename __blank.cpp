#include <iostream>
using namespace std;

int main () {
    int i,p,j;
    double n;
    i=1,p=0;
    cout<<"Enter the number: ";
    cin>>n;
    n=n/2 +0.5;

    while (n>0) {
        while (i<n) {
            if((n/i)>=0) {
            p++;
            i=i*2;
            }
        }
        n=n/2;
    }
    cout<<p;
    return 0;
}
