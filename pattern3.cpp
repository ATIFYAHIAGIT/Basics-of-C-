#include <iostream>
using namespace std;

int main() {
    int row,col,num,i,j;
    cout<<"Enter row: ";
    cin>>row;
    cout<<"Enter col: ";
    cin>>col;

    num=1;
    for (i=1;i<=row;i++) {
        for (j=1;j<=col;j++) {
            cout<<num<<" ";
        }
        cout<<"\n";
        num++;
    }
    return 0;
}