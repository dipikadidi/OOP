//Overloading Unary operator using friend function

#include<iostream>
using namespace std;

class rectangle
{
    int length, breadth;

    public:
    rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    friend void operator ++(rectangle &r);

    void print () {
        cout <<"Length = " << length << "Breadth= " <<breadth<<endl;
    }

};

void operator ++ (rectangle &r) {
    ++r.length;
    ++r.breadth;
}

int main() {

    rectangle r1(3,4);
    r1.print();
    ++r1;
    r1.print();



    return 0;
}