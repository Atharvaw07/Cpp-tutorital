#include<iostream>
using namespace std;    

int main(){

    float d=34.56f;
    double e= 45.6789;
    long double f= 4567.890123l;

    cout<<"The size of float is "<<sizeof(d)<<" bytes"<<endl;
    cout<<"The size of double is "<<sizeof(e)<<" bytes"<<endl;
    cout<<"The size of long double is "<<sizeof(f)<<" bytes"<<endl;
    cout<<"The value of 34.45 is "<<sizeof(34.45)<<" bytes"<<endl; //by default it is double if we don't specify f or l



    cout<<"the vlaue of d is "<<d<<endl;
    cout<<"the vlaue of e is "<<e<<endl;
    cout<<"the vlaue of f is "<<f<<endl;



    //reference variable
    float x=455.67;
    float &y = x; // y is reference variable to x it is another name to x and both will point to same memory location and any changes made to y will reflect in x
    cout<<"the value of x is "<<x<<endl;
    cout<<"the value of y is "<<y<<endl;


    // Typecasting
    int a=45;
    float b=45.67;
    cout<<"the value of a is "<<(float)a<<endl; // converting int to float
    cout<<"the value of a is "<<int(b)<<endl; // converting float to int





    return 0;



}