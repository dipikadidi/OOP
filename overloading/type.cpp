//Design a class TIME with hour and minutes. Write a program to convert integer type to TIME class type.

#include<iostream>
using namespace std;

class TIME {
    int hour, minutes;

    public:
    TIME() {
        hour = 0;
        minutes = 0;

    }


    TIME (int h, int m) {
        hour = h;
        minutes = m;
    }

    void print(){
        cout<<"hour = " <<hour<<"minutes = "<<minutes<<endl;

    } 



     // Conversion from int to TIME (constructor)
    TIME(int x) {
        hour = x / 60;
        minutes = x % 60;
    }


};

int main () {
    TIME t1;
    int x;

    cout<<"Enter an integer to conveert into time"<<endl;
    cin>>x;

    t1 = x;

    t1.print();

    return 0;


}