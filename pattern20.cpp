#include <iostream>
using namespace std;

int main () {
    int row,num=1;
    cout<<"Enter number: ";
    cin>>row;
    

    for (int i=1;i<=row;i++) {
        for (int j=1;j<=row-i;j++) {
            cout<<" ";
        }
        for (int j=1;j<=i;j++) {
            cout<<num;
            num++;
        }
        cout<<"\n"; num=1;
    }
    return 0;
}