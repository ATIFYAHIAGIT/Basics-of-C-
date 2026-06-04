#include <iostream>
using namespace std;

int main () {
    int row,col,i,j,num;
    cout<<"Enter row: ";
    cin>>row;
    col=1;
    
    num=1;

    for  (i=1;i<=row;i++) {
        for (j=1;j<=col;j++) {
            cout<<num;
            num=num+1;
            cout<<" ";
        }
        cout<<"\n";
        num=1;
        col++;
    }
    return 0;
}
