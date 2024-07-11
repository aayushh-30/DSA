#include<iostream>
#include<stack>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int x){
        data = x;
        next = NULL;
    }
};

class Stack{
    public:
    node* head;
    int size;
    int count;
    Stack(int s){
        head = NULL;
        size = s;
        count = -1;
    }
    
    void push(int k){
        if(size-count>1){
            count++;
            node* temp = new node(k);
            temp->next = head;
            head = temp;
        }
        else{
            cout<<"Stack is Full"<<endl;
        }
    }
    void peek(){
        if(head==NULL){
            cout<<"Stack is Empty"<<endl;
        }
        else{
            cout<<head->data;
        }
    }
    void pop(){
        if(head==NULL){
            cout<<"Stack is Empty"<<endl;
        }
        else{
            count--;
            node*temp = head;
            head=head->next;
            delete(temp);
        }

    }
};
int main(){
    Stack st(3);
    st.push(1);
    st.push(2);
    st.push(3);
    st.peek();
    st.pop();
    st.peek();
    st.push(4);
    st.peek();

    
}