#include <iostream>
using namespace std;

int main () {
    int col,row,i,j;
    cout<<"Enter row: ";
    cin>>row;
    char c='A';
    col=1;

    for (i=1;i<=row;i++) {
        for (j=1;j<=col;j++) {
            cout<<c<<" ";
        }
        cout<<"\n";
        col++; c++;
    }
    return 0;
}
