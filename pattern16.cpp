#include <iostream>
using namespace std;

int main ()  {
    int row,col,i,j;
    cout<<"Enter number of rows: ";
    cin>>row;
    col=1;

    for (i=1;i<=row;i++) {
        for (j=1;j<=col;j++) {
            cout<<row-j+1<<" ";
        }
        cout<<"\n";col++;
    }
    return 0;
}
            