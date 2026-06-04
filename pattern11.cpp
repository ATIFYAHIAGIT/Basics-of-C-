#include <iostream>
using namespace std;

int main () {
    int num,col,row,i,j;
    cout<<"Enter row: ";
    cin>>row;
    col=1;
    num=1;

    
    for (i=1;i<=row;i++) {
        for (j=1;j<=col;j++) {
            cout<<i<<" "; 
            num++;
            
        }
        cout<<"\n"; col++;
    }
return 0;
}

