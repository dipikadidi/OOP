//Write a program to create a class PERSON with data members name and age. Overload the greater than (>) symbol, to display the name of elder one.

#include <iostream>
#include <string>
using namespace std;

class PERSON {
    string name;
    int age;
public:
    PERSON(string n, int a) {
        name = n;
        age = a;
    }

    // Overloading > operator
    bool operator>(PERSON p) {
        return (age > p.age);
    }

    string getName() {
        return name;
    }
};

int main() {
    PERSON p1("Ram", 25);
    PERSON p2("Shyam", 30);

    if (p1 > p2)
        cout << "Elder: " << p1.getName() << endl;
    else
        cout << "Elder: " << p2.getName() << endl;

    return 0;
}