#include<iostream>
using namespace std;


int sum(int a, int b){
    int c = a + b;
    return a+b;

}

//function prototype
int minuss(int a, int b); //declaration

int main(){

    int num1, num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;

    cout<<"Sum is: "<<sum(num1,num2)<<endl;

    cout<<"Difference is: "<<minuss(num1,num2)<<endl;


return 0;

}

//function definition
int minuss(int a, int b){
    return a-b;
}