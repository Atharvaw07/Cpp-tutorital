#include <iostream>
using namespace std;

int main()
{

    //    what is pointer?
    //    pointer is a variable which stores the address of another variable
    int a = 3;
    int *b = &a; // b is a pointer which stores the address of a
    cout<<"Address of a is: "<<&a<<endl;
    cout<<"Address of a is: "<<b<<endl;

    cout<<"Value at address b is: "<<*b<<endl; // dereferencing

    // & --> address of operator
    //  * --> dereference operator

    //pointer to pointer
    int **c = &b;
    cout<<"Address of b is: "<<&b<<endl;
    cout<<"Address of b is: "<<c<<endl;
    cout<<"Value at address c is: "<<*c<<endl;
    cout<<"Value at value at address c is: "<<**c<<endl;

    return 0;
}
