#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int x ,int y); // default constructor declaration
    void printData()
    {
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};

Complex::Complex(int x, int y)
{
    a = x;
    b = y;
    cout << "Hello world! I am a constructor with parameters " << endl;
}


int main()
{
    Complex c1(5, 7);
    c1.printData();

    return 0;
}