#include<iostream>
#include<stack>
#include<string>
using namespace std;

//reversing string using stack

// string reverse(string s){
//     stack<char> r;
//     for(int i=0;i<s.length();i++){
//         r.push(s[i]);
//     }
//     string rev = "";
//     while(!r.empty()){
//         rev.push_back(r.top());
//         r.pop();
//     }
//     cout<<rev;
// }

// implementing stack using array
class Stack{
    public:
    int *arr;
    int top;
    int size;

    Stack(int size){
        this->size = size;
        arr = new int (size);
        top = -1;
    }

    //push
    void insert(int x){
        if(size-top>1){
            top++;
            arr[top]=x;
        }
        else{
            cout<<"Stack is Full";
        }
    }

    //pop
    void remove(){
        if(top>=0 && top<size){
            top--;
        }
        else{
            cout<<"stack is empty";
        }
    }

    //peep
    void peep(){
        if(top>=0 && top<size){
            cout<<arr[top];
        }
    }
};

int main(){

    Stack st(5);
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(4);
    st.insert(5);
    st.peep();
    st.remove();
    st.peep();
    

    return 0;
}