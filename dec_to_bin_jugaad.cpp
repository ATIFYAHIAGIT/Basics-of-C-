#include <iostream>
#include <vector>
using namespace std;

int main () {
    int i,p,j,r,t;
    double n,m;
    i=1,p=0;
   
    cout<<"Enter the number: ";
    cin>>n;
    
    m = n; 


    while (n>0) {
        while (i<n) {
            if((n/i)>=0) {
            p++;
            i=i*2;
            }
        }
       
        n=n/2; 
    }
    cout<<"Digits (p): "<<p<<"\n";

    vector<int> arr(p , 0);

    
    t = (int)m; 
    
    for (int k = p - 1; k >= 0; k--) {
        r = t % 2;
        
        if (r != 0) {
            arr[k] = 1;  
        } else {
            arr[k] = 0;  
        }
        
        t = t / 2; 
    }
    
    cout << "Binary Sequence: ";
    for (int k = 0; k < p; k++) {
        cout << arr[k];
    }
    cout << "\n";

    return 0;
}