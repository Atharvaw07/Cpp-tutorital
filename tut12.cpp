#include<iostream>
using namespace std;

//arrays
int main(){

    int marks[4] ={23,45,56,89};
    cout<<"Marks of student 1 is: "<<marks[0]<<endl;
    cout<<"Marks of student 2 is: "<<marks[1]<<endl;    
    cout<<"Marks of student 3 is: "<<marks[2]<<endl;
    cout<<"Marks of student 4 is: "<<marks[3]<<endl;

    int mathmarks[4]; //declaration of array with size 4
    mathmarks[0] = 34;
    mathmarks[1] = 45;
    mathmarks[2] = 56;  
    mathmarks[3] = 67;

    cout<< "printing using for loop"<<endl;
    for(int i=0;i<4;i++){
        cout<< "mathmarks fo the studnent "<<i+1<<" is: "<<mathmarks[i]<<endl;
    }

    int size=sizeof(mathmarks)/sizeof(int);
    cout<<"Size of the array is: "<<size<<endl;

    //with while loop
    cout<< "printing using while loop"<<endl;
    int i =0;
    while(i< 4){
         cout<< "mathmarks fo the studnent "<<i+1<<" is: "<<mathmarks[i]<<endl;
         i++;
    }

    //to change the value of array
    marks[2] = 99;
    cout<<"New marks of student 3 is: "<<marks[2]<<endl;


    //pointer and array
    cout<<"Using pointer to access array"<<endl;
    int* p = marks; //pointing to first element of array name itself acts address no need to use & and give the address of first element
    cout<<"Address of marks is: "<<marks<<endl;
    cout<<"Address of marks is: "<<p<<endl;

    cout<<"Value of marks[0] and *p is: "<<*p<<endl;
    cout<<"Value of marks[1] and *(p+1) is: "<<*(p+1)<<endl;
    cout<<"Value of marks[2] and *(p+2)  is: "<<*(p+2)<<endl;       
    cout<<"Value of marks[3] and *(p+3) is: "<<*(p+3)<<endl;









return 0;

}