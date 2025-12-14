#include <iostream>
using namespace std;

class Complex; // forward declaration

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex o1, Complex o2);
    int sumCompComplex(Complex o1, Complex o2);
};

class Complex
{
    int a, b;

    //indicating that these functions are friends of Complex class
    friend int Calculator::sumRealComplex(Complex o1, Complex o2);

    friend int Calculator::sumCompComplex(Complex o1, Complex o2);


    //to make the entire Calculator class as friend
    // friend class Calculator;

public:
    void setData(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printData()
    {
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{

    Complex c1, c2;
    c1.setData(1, 4);
    c2.setData(5, 8);

    Calculator calc;
    int result = calc.sumRealComplex(c1, c2);
    cout << "The sum of real parts of c1 and c2 is: " << result << endl;

    int result2 = calc.sumCompComplex(c1, c2);
    cout << "The sum of complex parts of c1 and c2 is: " << result2 << endl;

    return 0;
}