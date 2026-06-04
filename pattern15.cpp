#include <iostream>
using namespace std;

int main () {
    int row,i,j;
    cout<<"Enter number of rows: ";
    cin>>row;
    

    for (i=row;i>=1;i--) {
        for (j=row;j>=1;j--) {
            cout<<j<<" ";
        }
        cout<<"\n"; 
        row--;
    }
    return 0;
}