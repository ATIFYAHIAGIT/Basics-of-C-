#include <iostream>
using namespace std;

int main () {
    int n,rem,dec,pval;
    dec=0,rem=0;pval=1;
    cout<<"Enter your number: ";
    cin>>n;

    while (n>0) {
        rem=n%10;
        n=n/10;
        dec=rem*pval +dec;
        pval=8*pval;
    }
    cout<<dec;
    return 0;
}
