#include <iostream>
using namespace std;

int main () {
    int x,num=1;
    cout<<"Enter number: ";
    cin>>x;

    for (int i=1;i<=x;i++) {
        for (int j=1;j<=x-i;j++) {
            cout<<" ";
            }
            num=i;
        for (int j=1;j<=i;j++) {
            cout<<num;
            num--;
        }
        cout<<"\n";
    }
}
