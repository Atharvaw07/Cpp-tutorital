#include<iostream>
using namespace std;

//call by value vs call by reference

void swapbyvalue(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;

}


//call by reference using pointers
void swapbyreferencepointer(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}

//call by reference using reference variables
void swapbyreferencereference(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;

}




int main(){

    int x = 4, y = 5;
    cout<<"Before swapping in main function: "<<endl;
    cout<<"Value of x is: "<<x<<endl;
    cout<<"Value of y is: "<<y<<endl;

    swapbyvalue(x,y); //values of x and y are passed so copies are made

    cout<<"After calling swapbyvalue function in main function: "<<endl;
    cout<<"Value of x is: "<<x<<endl;
    cout<<"Value of y is: "<<y<<endl;


    cout<<"As we see values are not swapped in main function as we used call by value"<<endl;

//call by reference using pointers

    swapbyreferencepointer(&x,&y); //addresses of x and y are passed

    cout<<"After calling swapbyreference function in main function: "<<endl;
    cout<<"Value of x is: "<<x<<endl;
    cout<<"Value of y is: "<<y<<endl;

    cout<<"As we see values are swapped in main function as we used call by reference"<<endl;

    //call by reference using reference variables
    swapbyreferencereference(x,y); //references of x and y are passed





return 0;

}