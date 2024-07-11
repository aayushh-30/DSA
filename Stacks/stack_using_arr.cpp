#include<iostream>
using namespace std;
class Stack{
    public:
    int size;
    int top;
    int *arr;
    Stack(int sz){
        top = -1;
        size = sz;
        arr = new int[sz];

    }

    //pushing
    void push(int a){
        if(top<size){
            top++;
            arr[top] = a;

        }
        else{
            cout<<"Stack is full"<<endl;
        }

    }

    //popping
    void pop(){
        if(top==-1){
            cout<<"Stack is Empty"<<endl;
        }
        else{
            top--;
        }
    }

    //seeking 
    void peep(){
        if(top==-1){
            cout<<"Stack is Empty";
        }
        else{
            cout<<arr[top]<<endl;
        }
        
    }
};
int main(){
    Stack St(4);
    St.push(1);
    St.push(2);
    St.push(3);
    St.push(4);
    St.push(1);
    St.push(1);
}