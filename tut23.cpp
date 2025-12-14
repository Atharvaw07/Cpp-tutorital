#include<iostream>
using namespace std;

//friend function in C++

class Complex{
    int a,b;
    public:
        void setNumber(int n1,int n2){
            a = n1;
            b = n2;
        }

        friend Complex sumComplex(Complex o1, Complex o2); //friend function declaration

        void printNumber(){
            cout<<"Your complex number is: "<<a<<" + "<<b<<"i"<<endl;
        }




}; 

Complex sumComplex(Complex o1, Complex o2){ //friend function definition
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}


int main(){

    Complex c1,c2;
    c1.setNumber(1,4);
    c1.printNumber();
    c2.setNumber(5,8);
    c2.printNumber();    

    Complex c3 = sumComplex(c1,c2); //friend function call
    c3.printNumber();
    return 0;
}

//properties of friend function
//1. Not in the scope of class
//2. Since it is not in the scope of class, it cannot be called from the
//   object of that class. c1.sumComplex() is invalid
//3. Can be invoked without the help of any object
//4. Usually contains the objects as arguments
//5. Can be declared inside public or private section of the class
//6. It cannot access the members directly by their names and needs object_name.member_name to access any member.
//7. It can be declared as a friend in multiple classes.
//8. It is not considered in the concept of data hiding as it can access private data members of the class. 
//9. Should be used sparingly as it breaks the encapsulation concept of OOPs.
