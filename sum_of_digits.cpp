#include <iostream>
using namespace std;

int main () {
    int x,sum=0;
    cout<<"Enter your number: ";
    cin>>x;

    while (x>0) {
        sum=x%10 + sum;
        x=x/10;
    }
    cout<<sum;
    return 0;
}
