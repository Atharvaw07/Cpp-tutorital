#include<iostream>
using namespace std;

int main(){

    cout<< "Tell me your age: " << endl;
    int age;
    cin >> age;
    if(age<18){
        cout << "You are a minor." << endl;
    }
    else{
        cout << "You are an adult." << endl;
    }


    //switch case
    cout << "Enter a number between 1 and 3: " << endl;
    int number;
    cin >> number;
    switch(number){ 

        case 1:
            cout << "You entered one." << endl;
            break;
        case 2:
            cout << "You entered two." << endl;
            break;
        case 3:
            cout << "You entered three." << endl;
            break;
        default:
            cout << "Number out of range." << endl;
    }





    return 0;
}