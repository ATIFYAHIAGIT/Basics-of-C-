#include <iostream>
using namespace std;

int main (){
    int n,rem,decimal=0,two;
    two=1;
    cout<<"Enter the binary number: ";
    cin>>n;

    while (n>0) {
        rem=n%10;
        n=n/10;
        decimal= rem*two + decimal;
        two=2*two;
    }
    cout<<decimal;
}