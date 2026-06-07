#include <iostream>
using namespace std;
int main() {

    cout<<"Enter the number of rows of pyramid: ";
    int x,c;
    cin>> x;


    for (int i=0;i<x;i=i+1) {
        for (int j=0; j<x-i;j=j+1) {
            cout<<"  ";
        }
        
        for (int j=0; j<=2*i;j=j+1) {
            cout<<"* ";
        }
        cout<<"\n";
}
    return 0;
}

