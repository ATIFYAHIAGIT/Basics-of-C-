#include <iostream>
using namespace std;

int main () {
    int n,rem,bin,dig;
    bin=0,dig=1;

    cout<<"Enter the number in decimal form:  ";
    cin>>n;

    while (n>0) {
        rem=n%2;
        n=n/2;
        bin=rem*dig + bin;
        dig=dig*10;
    }
    cout<<"The Binary form of the entered decimal number is: "<<bin;
    return 0;
}
