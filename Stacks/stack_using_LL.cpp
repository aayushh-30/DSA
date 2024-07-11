#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
class Stack{
    public:
    int size;
    Node *head;
    Node *top;
    int count;

    Stack(int size){
        this->size = size;
        Node* head = NULL;
        top = NULL;
        count = -1;
    }

    //push
    void push(int x){
        if(size-count>1){
            count++;
            Node *newnode = new Node(x);
            newnode->next = head;
            head = newnode;
            top = newnode;
        }
        else{
            cout<<"STACK IS FULL"<<endl;
        }

    }

    void pop(){
        Node *prev = NULL;
        Node *curr = head;
        if(top!=NULL){
            count--;
            while(curr){
                prev = curr;
                curr = curr->next;
                
            }
            top = top->next;
            Node *temp = curr;
            prev->next = NULL;
            delete(temp);
            
        }
        else if (top==NULL){

            cout<<"Stack is empty";

        }
    }

    void peek(){
        Node* temp = head;
        while(temp->next){
            temp=temp->next;
        }
        cout<<temp->data;
    }

};
int main(){
    Stack st(3);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.pop();
    st.peek();
    return 0;
}