#include<iostream>
using namespace std;

// i will overload binary + operator

class complex {
    int real;
    int imag;

    public:

    complex() {
        real = 0;
        imag = 0;
    }

        complex (int x, int y) {
        real = x;
        imag = y;
    }

    void print() {
        cout <<real<<"+" <<imag <<"i" <<endl;
    }

    complex operator + (complex a) {
        complex temp;
        temp.real = real + a.real;
        temp.imag = imag + a.imag;
        return temp;
    }
};

int main () {

    complex c1(2,3), c2(4,7), c3;
    c3 = c1+c2;
    c3.print();
    return 0;
}