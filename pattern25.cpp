#include <iostream>
using namespace std;

int main () {
    int x,num;
    cout<<"Enter the number: ";
    cin>>x;
    

    for  (int i=1;i<=x;i++) {
        for (int j=1;j<=i;j++) {
            cout<<"  ";
        }
        for (int j=1; j<=2*(x-i)+1;j++)  {
            cout<<"* ";
        }
        cout<<"\n";
    }   
    return 0;
}
