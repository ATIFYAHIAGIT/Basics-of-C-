#include <iostream>
using namespace std;

int main () {
    int row,col=1,i,j,num;
    cout<<"Enter row: ";
    cin>>row;
    
    num=1;

    for (i=1;i<=row;i++) {
        for (j=1;j<=col;j++) {
            cout<<num<<" ";
            num=num-1;
        } 
        cout<<"\n"; col++;
        num=col;
    }
    return 0;
}
