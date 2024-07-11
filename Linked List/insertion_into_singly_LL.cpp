#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

void Insertion_at_beg(Node* &Head,int x){
    Node *new_Node=new Node(x);
    //New Node Created
    new_Node->next=Head;
    Head=new_Node;
}

void Insertion_at_end(Node* &Head,int x){
    Node *new_Node=new Node(x);
    Node *temp=Head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_Node;
}

void Insertion_at_othr(Node* &Head,int x,int k){
    int i=1;
    Node *new_Node=new Node(x);
    Node *temp=Head;
    while(i<k){
        temp=temp->next;
        i++;
    }
    new_Node->next=temp->next;
    temp->next=new_Node;

}

void Traversal(Node* &Head){
    Node *temp=Head;
    while(temp!=NULL){
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int countingNode(Node* Head){ //counting number of nodes
    int count=0;
    Node *temp=Head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
void remove_repeats(Node *Head){
    Node *temp=Head,*del=Head;
    while(temp){
        while(temp->next!=NULL && temp->data==temp->next->data){
            del=temp->next;
            temp->next=temp->next->next;
            free(del);
        }
        temp=temp->next;
        
    }
}

void delete_at_Head(Node* &Head){
    Node* temp=Head;
    Head=Head->next;
    free(temp);
}

int intersection(Node* &Head1,Node* &Head2){
    Node *pt1 = Head1;
    int l1=0;
    Node *pt2 = Head2;
    int l2 = 0;
    while(pt1){
        l1++;
        pt1 = pt1 -> next;
    }
    while(pt2){
        l2++;
        pt2 = pt2 -> next;
    }
    
    int d;

    if(l1>l2){
        d = l1-l2;
        pt1 = Head1;
        pt2 = Head2;
    }
    else{
        d = l2 - l1;
        pt1 = Head2;
        pt2 = Head1;
    }

    while(d){
        pt1 = pt1 -> next;
        d--;
    }
    while(pt1!=NULL && pt2!=NULL){
        if(pt1==pt2){
            return pt1->data;
        }
        pt1 = pt1 -> next;
        pt2 = pt2 -> next;
    }
    return -1;
    
}


int main(){
    Node *Head = NULL;
    Insertion_at_beg(Head,20);
    Traversal(Head);
    Insertion_at_beg(Head,20);
    Traversal(Head);
    Insertion_at_beg(Head,3);
    Insertion_at_othr(Head,3,1);
    Traversal(Head);
    Insertion_at_end(Head,20);
    Traversal(Head);
    remove_repeats(Head);
    Traversal(Head);
    return 0;
}