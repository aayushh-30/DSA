#include<iostream>
using namespace std;
class A{
    public:
    void show(){
        cout<<"Base class";
    }
};
class B:public A{
    public:
    void show(){
    cout<<"Derived class";
    }
};
int main (){

    B aa;
    aa.show();

    return 0;

}