#include <iostream>
using namespace std;

int main () {
    int x;
    cout<<"Enter the number of pixels should be even: ";
    cin>>x;

    if (x%2==1) {
        cout<<"Error, hehehehe";
    }
    else {
        for (int i=1;i<=x;i++)  {
            for (int j=0;j<=x-i;j++) {
            cout<<"* ";        
        }   
            for (int j=2;j<=i;j++) {
                cout<<"    ";
            }
            for (int j=0;j<=x-i;j++) {
            cout<<"* ";  
        }
        cout<<"\n";
    } 
        for (int i=0;i<=x-1;i++) {
            for (int j=0;j<=i;j++) {
                cout<<"* ";
            }
            for (int j=2;j<=x-i;j++) {
                cout<<"    ";
            }
            for (int j=0;j<=i;j++) {
            cout<<"* ";  
        }
        cout<<"\n";
        }
    }
return 0;
}