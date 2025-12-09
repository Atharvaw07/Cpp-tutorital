#include<iostream>
#include<iomanip>
using namespace std;


int main(){

    const int size = 5;

    // size=10; // Error: assignment of read-only variable 'size'

    //manipulator endl
    //endl is used to insert a new line in the output and flush the output buffer


    //operator precedence
    int a = 10;
    int b = 20;
    int c = 30;
    int result = a + b * c; // multiplication has higher precedence than addition
    cout << "Result of a + b * c: " << result << endl; // Output: 610

    //give me table for operator precedence
    cout << left << setw(20) << "Operator" << setw(15) << "Precedence" << "Associativity" << endl;
    cout << left << setw(20) << "()" << setw(15) << "Highest" << "Left to Right" << endl;
    cout << left << setw(20) << "*, /, %" << setw(15) << "High" << "Left to Right" << endl;
    cout << left << setw(20) << "+, -" << setw(15) << "Medium" << "Left to Right" << endl;
    cout << left << setw(20) << "=" << setw(15) << "Lowest" << "Right to Left" << endl;     

/*
    Operator            Precedence     Associativity
()                  Highest        Left to Right
*, /, %             High           Left to Right
+, -                Medium         Left to Right
=                   Lowest         Right to Left

*/







    return 0;
}