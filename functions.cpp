#include <iostream>
using namespace std;

int factorial(int a, int d) {
    int fact=1;
    for (int i=1;i<=a;i++) {
        fact=i*fact;
    }
    return fact;
}

int summation(int a, int d) {
    int sum=0;
    sum=a+d;
    return sum;
}

int main () {
    int c,d;
    cout<<"ENTER TWO NUMBERS: ";
    cin>>c>>d;

    cout<<factorial(c,d)<<"\n";
    
    cout<<summation(c,d)<<"\n";
    
    cout<<factorial(c*d,c/d)<<"\n";
    
    cout<<summation(c/d,c*d)<<"\n";
    
    return 0;
}
