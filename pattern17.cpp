#include <iostream>
using namespace std;

int main (){
    int row,col,i,j,loc,num;
    cout<<"Enter number of rows: ";
    cin>>row;
    col=row;
    loc=0;

    for (i=row;i>=1;i--) {
        for(j=col;j>=1;j--) {
            cout<<"  ";
        }
        for (j=1;j<=loc;j=j+1) {
            cout<<"* ";
        }
        cout<<"*";
        cout<<"\n";
        col--;
        loc++;
}
    return 0;
}