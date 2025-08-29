#include<iostream>
using namespace std;

//i will now overload a > operator using friend function

class A; //forward declare
class B {
    int b;
    public:
    void getb() {
        cout <<"Enter the value of b"<<endl;
        cin>> b;
    }

    friend void operator > (A x, B y);
};

class A {
    int a;
    public:
    void geta() {
        cout<<"Enter the value of a"<<endl;
        cin>> a;        
    }

    friend void operator > (A x, B y);
};

void operator > (A x, B y){
    x.a > y.b ? cout << "x is greater" : cout << "y is greater";
}

int main () {

    A x;
    B y;

    x.geta();
    y.getb();

    x>y;
    
    return 0;



}