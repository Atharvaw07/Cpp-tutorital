#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    void printData()
    {
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex c1(5, 7);
    c1.printData();

    Complex c2(10); // b will be initialized to 0
    c2.printData();
    return 0;
}