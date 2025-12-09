#include<iostream>
using namespace std;

int a=4; // global variable


void sum(){
    cout<<a;
}

void greet(){
    cout<<"Hello from greet function"<<endl;
}



int main(){

    int a=8; // local variable
    int b=9;
    float pi =3.14;
    char letter='v';
    bool is_true = true;

    cout<<"Value of global a is: "<<::a<<endl; // accessing global variable using scope resolution operator but if we don't use :: then it will access local variable

    sum(); // calling sum function this will print global a

    cout<< is_true << endl; // boolean value will be printed as 1 for true and 0 for false

    cout<<"\n this is the value of a="<<a<< "the value of b= "<<b;
    cout<<"\n Hello world";
    return 0;
}
