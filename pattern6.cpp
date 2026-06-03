#include <iostream>
using namespace std;

int main () {
    int col,row,i,j;
    cout<<"Enter row: ";
    cin>>row;
    cout<<"Enter col: ";
    cin>>col;
    char c='A';

    for (i=1;i<=row;i++) {
        for (j=1;j<=col;j++) {
            cout<<c<<" ";
            c=c+1;
        }
        cout<<"\n";
        c='A';
        }
    return 0;  
}
