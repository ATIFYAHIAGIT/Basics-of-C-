#include <iostream>
using namespace std;

int main () {
    int r,c,n,x;
    cout<<"Enter your number: ";
    cin>>n;
    x=0;

    for(r=1;r<=n+1;r++) {
        for(c=1;c<=n-r+1;c++) {
            cout<<" ";
        }
        for  (c=1;c<=x;c++) {
            cout<<x;
        }
        cout<<"\n";
        x=r;
    }
}
