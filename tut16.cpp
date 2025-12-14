#include<iostream>
using namespace std;

//recursion in C++
//basically a function which calls itself is known as recursion

int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1); //function calling itself
}

int fibnonacci(int n){

    if(n<2){
        return 1;
    }

    return fibnonacci(n-2)+ fibnonacci(n-1);

}

int main(){

    //factorial of a number using recursion
    int n;
    cout<<"Enter a number to find factorial: ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is: "<<factorial(n)<<endl;

    cout<<"fibnonacci value at given number is: "<<fibnonacci(n)<<endl;






return 0;

}