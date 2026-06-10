#include <iostream>
using namespace std;

int main (){
    int n,rem,decimal=0,two,x,octal=0,pval=1;
    two=1;
    cout<<"Enter the binary number: ";
    cin>>n;

    while (n>0) {
        rem=n%10;
        n=n/10;
        decimal= rem*two + decimal;
        two=2*two;
    }
    x=decimal;

    while (x>0) {
        rem=x%8;
        x=x/8;
        octal = rem*pval + octal;
        pval=pval*10;
    }
    cout<<octal;
}