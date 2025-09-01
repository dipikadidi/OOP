//i will overload plus operator using friend function

#include<iostream>
using namespace std;

class length {
    int feet, inches;
    public:
    length(){
        feet = 0;
        inches = 0;
    }

    length(int x, int y) {
        feet = x;
        inches = y;
    }

    friend length operator + (length, length);

    void print() {
        cout << "Feet = " << feet << "  inches= " << inches << endl;

    }
};

length operator + (length x, length y) {
    length r;
    r.feet = x.feet + y.feet;
    r.inches = y.inches + x.inches;

    r.feet = r.feet + r.inches/12;
    r.inches = r.inches%12;

    return r;
    
}


int main () {
    length l1(4,5);
    length l2(6,9);
    length l3;

    l3 = l1+l2;

    l3.print();

    return 0;
}