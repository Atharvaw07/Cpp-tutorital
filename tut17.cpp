#include<iostream>
using namespace std;

//function overloading in C++
//one function name with different number of arguments or different types of arguments

int add(int a, int b){
    return a+b;
}

int add(int a, int b, int c){
    return a+b+c;
}

int main(){

    cout<<"Sum of 2 and 3 is: "<<add(2,3)<<endl;
    cout<<"Sum of 2,3 and 4 is: "<<add(2,3,4)<<endl;

return 0;

}