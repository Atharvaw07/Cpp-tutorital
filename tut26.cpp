#include<iostream>
using namespace std;


class Complex{

    int a, b;   

    public:
    //creating a constructor
    //constructor is a special member function with the same name as of the class. It is used to initialize objects of its class.
    //it is automatically invoked whenever an object is created.
    Complex(void); //default constructor declaration

    void printData(){
        cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
    }


};

Complex::Complex(void){
    a = 10;
    b = 0;
    cout<<"Hello world! I am a constructor with no parameters "<<endl;
}


int main(){

    Complex c1;
    c1.printData();


return 0;

}

//properties of constructor
//1. It should be declared in the public section of the class
//2. They are automatically invoked whenever the object is created
//3. They cannot return values and do not have return types
//4. It can have default arguments
//5. We cannot refer to their address
//6. We can have multiple constructors with different parameters (constructor overloading)
    