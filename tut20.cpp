#include <iostream>
using namespace std;

// object memory allocation in C++

class Shop
{

    int itemid[100];
    float itemprice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; } // member function to initialize counter
    void setprice(void);
    void displayprice(void);
};

void Shop ::setprice(void)
{
    cout << "Enter item id: ";
    cin >> itemid[counter];
    cout << "Enter price of item: ";
    cin >> itemprice[counter];
    counter++;
}

void Shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with id  " << itemid[i] << " is " << itemprice[i] << endl;
    }
}

int main()
{

    Shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();
    return 0;
}