#include<iostream>
using namespace std;
class Rectangle{
    public:
    int length;
    int breadth;

    Rectangle(){//constructors used to initialise value; //constructor without parameter
        length=4;
        breadth=0;
    }

    Rectangle(int x,int y){//constructor with parameter;
        length=x;
        breadth=y;
    }

    Rectangle(Rectangle& r){//copy constructor used to copy one object into other kind of data;
        length=r.length;
        breadth=r.breadth;
    }
};

int main(){
    Rectangle r1;
    cout<<r1.length<<endl<<r1.breadth<<endl;

    Rectangle r2(8,8);
    cout<<r2.breadth<<endl<<r2.length<<endl;

    Rectangle *R3=new Rectangle(6,7);
    cout<<R3->length<<endl<<R3->breadth<<endl;

    return 0;
}