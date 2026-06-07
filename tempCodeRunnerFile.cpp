//full pyramid of numbers//
#include <iostream>
using namespace std;

int main () {
    int x,num=1,fun;
    cout<<"Enter number: ";
    cin>>x;
    fun=num-1;

    for (int i=1;i<=x;i++) {
        for (int j=1;j<=x-i;j++) {
            cout<<" ";
        }
        for (int j=1;j<=i;j++) {
            cout<<num;
            num++;
        }
        for (int j=2;j<=i; j++) {
            num=i-j+1;
            cout<<num;
            num--;
        }
        cout<<"\n";
        num=1;
    }
    return 0;
}
