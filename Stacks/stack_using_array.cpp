#include<iostream>
using namespace std;
class Stack{
    public:
    int *arr;
    int size;
    int top;

    Stack(int size){
        this->size=size;
        arr = new int[size];
        top = -1;
    }


    //pushing
    void push(int x){
        if(size-top>1){
            top++;
            arr[top]=x;
        }
        else{
            cout<<"Stack is full";
        }
    }

    //pop
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack is Empty";
        }
    }

    //peek
    void peek(){
        if(top>=0){
            cout<<arr[top];
        }
        else{
            cout<<"Stack is Empty";
        }
    }

};
int main(){
    Stack st(4);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    return 0;
}