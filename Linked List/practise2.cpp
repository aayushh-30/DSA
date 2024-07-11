#include<iostream>
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
void IAB(node* &root,int val){
    node* newNode = new node(val);
    newNode->next = root;
    root = newNode;
}

node* IAE(node* &root,int val){
    if(root==NULL){
        root = new node(val);
        return root;
    }
    else
    return IAE(root->next,val);
}
void RAB(node* &root){
    root = root -> next;
}

void IAE2(node* &root,int val){
    node* temp = root;
    if(root==NULL){
        root = new node(val);
        return;
    }
    while(temp->next){
        temp = temp->next;
    }
    temp->next = new node(val);
}

void traversal(node* root){
    node* temp = root;
    while(temp){
        cout<<temp->data<<"-->";
        temp= temp->next;
    }cout<<"NULL";
}

node* reverse(node* &root){
    node* prev = NULL;
    node* curr = root;
    while(curr!=NULL){
        node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void reverse_traversal(node* root){
    node* temp = root;
    if(temp== NULL){
        return;
    }
    reverse_traversal(temp->next);
    cout<<root->data<<" ";
}
int main(){
    node* head = NULL;
    IAE(head,1);
    
    IAE(head,2);
    
    IAE(head,3);

    traversal(head);
    cout<<endl;
    RAB(head);
    traversal(head);


    cout<<endl;

    
    

    return 0;
}