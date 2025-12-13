#include <iostream>
using namespace std;

//structures in C++
typedef struct employee
{
    /* data */
    int eid;
    char favchar;
    float salary;
} ep;


//Unions in C++

union money
{
    /* data */
    //can use only one at a time all share same memory location
    int rice;
    char car;
    float pounds;
};

int main()
{
    ep shubham;  //struct employee shubham typedef as ep used to replace struct employee;
    shubham.eid = 100;
    struct employee atharva;
    atharva.eid = 1;
    atharva.favchar = 'a';
    atharva.salary = 12000;

    cout << "Employee id is: " << atharva.eid << endl;
    cout << "Employee favchar is: " << atharva.favchar << endl;
    cout << "Employee salary is: " << atharva.salary << endl;



    union money m1;
    m1.rice = 34;   
    cout<<"Value of rice is: "<<m1.rice<<endl;
    m1.car = 'c'; //overwrites value of rice
    cout<<"Value of car is: "<<m1.car<<endl;

    cout<<"Value of rice is garbage value as overwritten by c: "<<m1.rice<<endl; //garbage value as car overwrote rice



    //enum in C++
    enum meal
    {
        breakfast,
        lunch,
        dinner
    };  

    meal m2 = lunch;
    cout<<"Value of lunch is: "<<m2<<endl; //by default breakfast=0,lunch=1,dinner=2

    return 0;
}