//Call by reference in C++

#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    
    a = a+b;
    b = a - b;
    a = a - b;
    
}

int main() {
    int x,y;
    cout<<"Enter the values of x and y: ";
    cin>>x>>y;
    
    cout<<"Original values: " <<x<<" "<<y<<endl;
    
    swap(x,y);
    
    cout<<"After swap: " << x<<" "<<y<<endl;
    

    return 0;
}
