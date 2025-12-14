#include<iostream>
using namespace std;

//static data members and methods in C++

class Employee
{
    int id;
    static int count; //static data member declaration

    public:
    void setData(void){ 
        cout<<"Enter id: ";
        cin>>id;
        count++;
    }
    void getData(void){
        cout<<"Id of employee is: "<<id<<" and employee number is: "<<count<<endl;
    }

    static void getCount(void){ //static method
        //cout<<id; //static method cannot access non-static data members
        cout<<"The value of count is: "<<count<<endl;
    }

   
};

int Employee::count; //static data member definition and initialization

//static data member is shared among all objects of class
//if not used static then each object will have its own copy of count
//static method can only access static data members

int main(){

    Employee atharva, shubham, rohan;
    atharva.setData();
    atharva.getData();
    Employee::getCount();

    shubham.setData();
    shubham.getData();
    Employee::getCount();


    rohan.setData();
    rohan.getData();
    Employee::getCount();

return 0;

}