#include<iostream>
using namespace std;
class node{
    public:
    node *pre;
    int data;
    node *nxt;

    node(int x){
        pre = NULL;
        data = x;
        nxt = NULL;
    }
};

//traversal of thr node
void Traversal(node *& head){
    node *temp = head;
    while(temp){
        cout<<temp->data<<"<==>";
        temp = temp->nxt;
    }
    cout<<"NULL"<<endl;
}

//insertion of the node
void InsertAtStart(node* &head,int x){
    node *newnode = new node(x);
    head->pre = newnode;
    newnode->nxt = head;
    head = newnode;
}

//insertion at the end
void InsertAtEnd(node* &head,int x){
    node *temp = head;
    while(temp->nxt){
        temp = temp->nxt;
    }
    node *newnode = new node(x);
    newnode->pre = temp;
    temp->nxt = newnode;
}

//insert at any position k
void Insert(node* &head,int x,int pos){
    if(pos==1) InsertAtStart(head,x);
    else{
        node *pn = NULL;
        node *temp = head;
        int count = 1;
        while(count<pos && temp!=NULL){
            pn = temp;
            temp = temp->nxt;
            count++;
        }
        node *newnode = new node(x);
        newnode->nxt = temp;
        newnode->pre = pn;
        if(temp!=NULL)
        temp->pre = newnode;
        pn->nxt = newnode;
    }
}
int main(){
    node *node1 = new node(0);
    node *head = node1;
    Traversal(head);
    InsertAtStart(head,5);
    Traversal(head);
    InsertAtEnd(head,50);
    Traversal(head);
    InsertAtEnd(head,500);
    Traversal(head);
    Insert(head,21,1);
    Traversal(head);
    Insert(head,22,6);
    Traversal(head);



    return 0;
}