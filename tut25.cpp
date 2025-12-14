#include<iostream>
using namespace std;

class Y; // forward declaration

class X {
    int data;
    public:
        void setValue(int value) {
            data = value;
        }

        friend void add(X o1, Y o2);
};

class Y{
    int num;
    public:
        void setValue(int value) {
            num = value;
        }
        friend void add(X o1, Y o2);

};

 void add(X o1, Y o2){
  cout<<"Addition of data is: "<<o1.data + o2.num<<endl;
}


int main(){

    X a;
    a.setValue(5);
    Y b;
    b.setValue(7);
    add(a,b);

return 0;

}