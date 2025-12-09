#include<iostream>

//there are two types of header files
/*
1. system header files: comes with the compiler
2. user defined header files: written by the programmer
*/



using namespace std;    


int main(){
    cout<<"Operators in C++"<<endl;
    int a=4, b=6;
    cout<<"Following are the types of operators in C++"<<endl;
    cout<<"1. Arithmetic Operators"<<endl;
    cout<<"a + b = "<<a+b<<endl;
    cout<<"a - b = "<<a-b<<endl;
    cout<<"a * b = "<<a*b<<endl;
    cout<<"a / b = "<<a/b<<endl;
    cout<<"a % b = "<<a%b<<endl;
    cout<<"a ++ = "<<a++<<endl;
    cout<<"++ a = "<<++a<<endl;
    cout<<"a -- = "<<a--<<endl;
    cout<<"-- a = "<<--a;   

    cout<<endl;

    cout<<"2. Assignment Operators"<<endl;

    cout<<"3. Comparison Operators values comes in boolean"<<endl;
    cout<<"a == b is "<<(a==b)<<endl;
    cout<<"a != b is "<<(a!=b)<<endl;   
    cout<<"a > b is "<<(a>b)<<endl;
    cout<<"a < b is "<<(a<b)<<endl;
    cout<<"a >= b is "<<(a>=b)<<endl;
    cout<<"a <= b is "<<(a<=b)<<endl;
     



    cout<<"4. Logical Operators"<<endl;
    cout<<"(a==b) && (a<b) is "<<((a==b) && (a<b))<<endl;
    cout<<"(a==b) || (a<b) is "<<((a==b) || (a<b))<<endl;
    cout<<"!(a==b) is "<<!(a==b)<<endl;

    cout<<"5. Bitwise Operators"<<endl;
    cout<<"a & b is "<<(a & b)<<endl;
    cout<<"a | b is "<<(a | b)<<endl;
    return 0;
}