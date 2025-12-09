#include<iostream>
using namespace std;    


int main(){

    //loops in C++
    //1. for loop
    cout << "For Loop:" << endl;
    for(int i=1; i<=5; i++){
        cout << "Iteration " << i << endl;
    }

    //2. while loop
    cout << "While Loop:" << endl;
    int j = 1;
    while(j <= 5){
        cout << "Iteration " << j << endl;
        j++;
    }

    //3. do-while loop
    cout << "Do-While Loop:" << endl;
    int k = 1;
    do{
        cout << "Iteration " << k << endl;
        k++;
    }while(k <= 5);     

    return 0;
}