#include <iostream>
using namespace std;

int main () {
    int n,rem,octal=0,pval=1;
    cout<<"Enter your number: ";
    cin>>n;

    while (n>0) {
        rem=n%8;
        n=n/8;
        octal = rem*pval + octal;
        pval=pval*10;
    }
    cout<<octal;
    return 0;
}
