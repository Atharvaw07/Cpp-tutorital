#include<iostream>
using namespace std;

class BankDeposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;

    public:
    BankDeposit(){}; //default constructor
    //parameterized constructor with 3 parameters
    BankDeposit(int p, int y, float r); //r can be a value like 0.04
    BankDeposit(int p, int y, int r);   //r can be a value like 14

    void showData(){
        cout<<"Principal amount was "<<principal<<endl;
        cout<<"Return value after "<<years<<" years is "<<returnValue<<endl;
    }
};

BankDeposit::BankDeposit(int p, int y, float r){
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;

    for(int i=0; i<years; i++){
        returnValue = returnValue*(1 + interestRate);
    }
}

BankDeposit::BankDeposit(int p, int y, int r){
    principal = p;
    years = y;
    interestRate = float(r)/100;
    returnValue = principal;

    for(int i=0; i<years; i++){
        returnValue = returnValue*(1 + interestRate);
    }
}


int main(){

    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout<<"Enter principal amount, years and interest rate (in decimal): "<<endl;
    cin>>p>>y>>r;
    bd1 = BankDeposit(p, y, r); //calling parameterized constructor
    bd1.showData();

    cout<<"Enter principal amount, years and interest rate (in percentage): "<<endl;
    cin>>p>>y>>R;
    bd2 = BankDeposit(p, y, R); //calling parameterized constructor
    bd2.showData();

return 0;

}