#include<iostream>
using namespace std;
class node{
    public:
    node *prev;
    int data;
    node *next;

    node(int d){
        this->prev = NULL;
        this->data = d;
        this->next = NULL;
    }
};
void nodeatstart(node* &head,int val){
    if(head==NULL){
    node *newnode = new node(val);
    // newnode->prev = head;
    head = newnode;
    }
    else{
        node *newnode = new node(val);
        newnode->next = head;
        head->prev = newnode;
        head  = newnode;
    }
}
void traversal(node *head){
    node *temp = head;
    while(temp){
        cout<<temp->data<<"<==>";
        temp = temp ->next;
    }
    cout<<"NULL";
    cout<<endl;
}
int main(){
    node *head = NULL;
    nodeatstart(head,1);
    traversal(head);
    nodeatstart(head,2);
    traversal(head);

    return 0;
}