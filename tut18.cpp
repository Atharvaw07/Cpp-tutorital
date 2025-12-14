#include <iostream>
using namespace std;

// oops in C++
// object oriented programming system
// definations
// classes-> blueprint of objects
// objects-> instance of class
// data abstraction-> showing only essential things to user and hiding internal details
// encapsulation-> wrapping data and functions into single unit
// inheritance-> deriving new classes from existing classes
// polymorphism-> ability to take more than one form
// dynamic binding-> code which is resolved during runtime
// message passing-> sending message to objects to invoke methods

// syntax of class

class Employee
{
    // class body
private:
    int a, b, c; // private members can only be accessed by member functions of class

public:
    int d, e;                             // public members can be accessed from outside the class
    void setData(int a1, int b1, int c1); // declaration of member function
    void getData()
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
        cout << "The value of c is: " << c << endl;
        cout << "The value of d is: " << d << endl;
        cout << "The value of e is: " << e << endl;
    }
};

void Employee ::setData(int a1, int b1, int c1)
{ // defination of member function using scope resolution operator
    a = a1;
    b = b1;
    c = c1;
}

int main()
{

    Employee atharva; // object creation
    atharva.d = 34;
    atharva.e = 67;
    atharva.setData(1, 2, 3); // calling member function using object
    atharva.getData();        // calling member function using object

    return 0;
}