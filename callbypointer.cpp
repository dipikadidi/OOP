//call by pointer

#include<iostream>
using namespace std;

void swap (int *p1, int *p2) {
    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;
}

int main () {
    int a, b;
    cout<<"Enter two integers: ";
    cin>>a>>b;
    
    cout<<"Original Values: "<<a<<" "<<b<<endl;
    swap (&a, &b);
    cout<<"After swap: "<<a<<" "<<b;
    
    return 0;
}
