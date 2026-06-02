#include <iostream>
using namespace std;

int main () {
    int row,num, i, j;
    cout<<"Enter number of rows: ";
    cin>>row;
    
    num=row;

    for (i=1;i<=row;i++) {
        for (j=1;j<=row;j++) {
            cout<<num<<" ";
            num--;
        }
        num=row;
        cout<<"\n";
    }
    return 0;
}

