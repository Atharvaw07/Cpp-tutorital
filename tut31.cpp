#include<iostream>
using namespace std;

//copy constructor in C++

class Number{
    int a;
    public:
        Number(){  //default constructor
            a = 0;
        }

        Number(int num){ //parameterized constructor
            a = num;
        }

        //copy constructor
        Number(Number &obj){
            cout<<"Copy constructor called!!"<<endl;
            a = obj.a;
        }

        void display(){
            cout<<"The number is: "<<a<<endl;
        }
};


int main(){
    Number x, y, z(45);
    x.display();
    y.display();
    z.display();

    Number z1(z); //copy constructor invoked
    z1.display();

    Number z2 = z; //copy constructor invoked
    z2.display();

return 0;

}