#include <iostream>
using namespace std;
int main() {
    cout<<"Enter the number of rows of pyramid: ";
    int x,c;
    cin>> x;
    c=x;

    for (int i=0;i<x;i++) {
        for (int j=0; j<x-i+1;j++) {
            cout<<" ";
        }
        
        for (int j=0; j<i+1;j++) {
            cout<<"* ";
        }
        cout<<"\n";
        
        
    } 
    return 0;
}
