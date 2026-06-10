#include <iostream>
using namespace std;

int main () {
    int x,rem;
    long long binary,pval;
    binary=0,pval=1;
    cout<<"Enter your number: ";
    cin>>x;

    while (x>0) {
        rem=x%2;
        x=x/2;
        binary = rem*pval + binary;
        pval=pval*10;
    }
    cout<<binary;
    return 0;
}