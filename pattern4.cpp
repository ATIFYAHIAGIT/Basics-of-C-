#include <iostream>
using namespace std;

int main () {
    int row,num, col, i, j;
    cout<<"Enter number of rows: ";
    cin>>row;
    cout<<"Enter number of columns: ";
    cin>>col;
    
    num=1;

    for (i=1;i<=row;i++) {
        for (j=1;j<=col;j++) {
            cout<<num<<" ";
            num++;
        }
        num=1;
        cout<<"\n";
    }
    return 0;
}
