#include <iostream>
using namespace std;

int main () {
    int row,col,i,j;
    cout<<"Enter number of rows: ";
    cin>>row;
    col=row;

    for (i=row;i>=1;i--) {
        for (j=col;j>=1;j--) {
            cout<<"* ";
        }
        cout<<"\n"; col--;
    }
    return 0;
}