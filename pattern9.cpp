#include <iostream>
using namespace std;

int main() {
    int row,col,i,j;
    cout<<"Enter number of num: ";
    cin>>row;
    col=1;

    for (i=1;i<=row;i++) {
        for (int j=1;j<=col;j=j+1) {
            cout<<"* ";
        }
        cout<<"\n";
        col++;
    }
    return 0;
}
