#include<iostream>
using namespace std;

//arrays of objects in C++

class Employee{

    int id;
    int salary;

    public:
    void setId(void){
        salary = 122;
        cout<<"Enter id: ";
        cin>>id;
    }

    void getId(void){
        cout<<"Id is: "<<id<<endl;
    }

};


class Complex{
    int a,b;
    public:
        void setData(int v1, int v2){
            a = v1;
            b = v2;
        }

        void getSumofComplex(Complex c1, Complex c2){
            a = c1.a + c2.a;
            b = c1.b + c2.b;
        }

        void printNumber(){
            cout<<"Your complex number is: "<<a<<" + "<<b<<"i"<<endl;
        }
};

int main(){

    Employee athrva, shubham, rohan;

    athrva.setId();
    athrva.getId();

    Employee fb[3]; //array of objects
    for(int i=0; i<3; i++){
        fb[i].setId();
        fb[i].getId();
    }


    Complex c1, c2, c3;
    c1.setData(1,4);
    c1.printNumber();
    c2.setData(5,8);
    c2.printNumber();
    c3.getSumofComplex(c1, c2);
    c3.printNumber();    




return 0;

}