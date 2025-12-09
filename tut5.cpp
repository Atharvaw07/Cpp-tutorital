// Input/Output stream library
#include <iostream> //-- for std::cout, std::endl
using namespace std;  // -- to avoid prefixing std::

int main() {
    int num1, num2;
    cout << "Enter num1: \n"; // prompt user for input /insertion operator
    cin >> num1;             // read first integer /extraction operator
    cout << "Enter num2: \n"; // prompt user for input
    cin >> num2;             // read second integer

    cout << "Sum is: " << num1 + num2 << endl; // output the sum


    return 0;
}

//list of the data type size in c++
/*
Data Type       Size    
bool            1 byte
char            1 byte  
wchar_t        2 bytes
char16_t      2 bytes
char32_t      4 bytes
short          2 bytes  
int            4 bytes
long           4 bytes
long long     8 bytes
float          4 bytes
double         8 bytes
long double   10 bytes
void           1 byte (only for pointer)
*/
// Note: Size may vary based on the system architecture
