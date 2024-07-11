#include<iostream>
using namespace std;
class Demo{
    public:
    int a;
    Demo operator+(Demo bb){
        Demo cc;
        cc.a = a + bb.a;

    }
};
int main(){
    Demo a,b,c;
    a.a = 52;
    b.a = 12;
    c= a + b;
    cout<<c.a;


    return 0;
}