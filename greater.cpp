//Write a program to create a class PERSON with data members 
//name and age. 
//Overload the greater than (>) symbol, to display the name of elder one.

#include<iostream>
#include<string>
using namespace std;

class person {
    string name;
    int age;

    public:    
    person (string n=" ", int a=0) {
        name = n;
        age = a;
    }


    void getdata() {
        cout<<"Enter name" << endl;
        cin>>name;
        cout<<"Enter age" << endl;
        cin>>age;
    }

    void print () {
        cout<<"greater =" << name <<endl;
    }

    friend void operator > (person p1, person p2);
   

};

void operator > (person p1, person p2) {
    if (p1.age > p2.age){
        p1.print();

    }

    else {
        p2.print();
    }
}


int main()
{
    person p1, p2;
    p1.getdata();
    p2.getdata();

    p1>p2;

  

    return 0;
}