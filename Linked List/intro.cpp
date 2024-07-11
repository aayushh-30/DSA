#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int x){
        this->data = x;
        this->next = NULL;
    }
};

void InsertAtBegining(Node* &Head,int val){
    Node* newNode = new Node(val);
    newNode->next = Head;
    Head = newNode;
}

void InserAtEnd(Node* &Head,int val){
    Node* newNode = new Node(val);
    Node* prev = NULL;
    Node* temp = Head;
    while(temp){
        prev = temp;
        temp = temp->next;
    }
    prev->next = newNode;
}

void Traversal(Node* &Head){
    Node* temp = Head;
    while(temp){
        cout<<temp->data<<" --> ";
        temp = temp->next;
    }cout<<"NULL"<<endl;
}

int CountNode(Node* &Head){
    int count=0;
    Node* temp = Head;
    while(temp){
        //cout<<temp->data<<" --> ";
        count++;
        temp = temp->next;
    }
    return count;
}

void InsertAtPosition(Node* &Head,int pos,int val){
    if(pos<=CountNode(Head)){
        if(pos==1){
            InsertAtBegining(Head,val);
        }
        else if(pos==CountNode(Head)){
            InserAtEnd(Head,val);
        }
        else{
            Node* temp = Head;
            Node* prev = NULL;
            for(int i=1;i<pos;i++){
                prev = temp;
                temp = temp->next;
            }
            Node* newNode = new Node(val);
            prev->next = newNode;
            newNode->next = temp;
        }
    }

}

int middlenode(Node* &Head){
    Node* fp = Head;
    Node* sp = Head;
    while(fp!=NULL && fp->next!=NULL){
        fp = fp->next->next;
        sp=sp->next;
    }
    return sp->data;
}


int LastNode(Node* &Head){
    Node* temp = Head;
    while(temp->next->next){
        temp = temp->next;
    }
    cout<<temp->data<<endl;
}

//deletion
void DeletionAtFirst(Node* &Head){
    Node* temp = Head;
    Head = Head->next;
    delete temp;

}

void DeletionAtEnd(Node* &Head){
    Node* temp = Head;
    while(temp->next->next){
        temp = temp->next;
    }
    temp->next = NULL;
}

void DeleteAtPosition(Node* &Head,int pos){
    Node* temp = Head;
    Node* prev = NULL;
    for(int i = 1;i < pos;i++){
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    delete temp;
}

void PrintingReverse(Node* &Head){
    Node* temp = Head;
    if(temp->next == NULL){
        cout<<temp->data;
    }
    else{
        PrintingReverse(temp->next);
        cout<<temp->data<<"-->";
    }
}


int main(){
    Node* head = NULL;
    InsertAtBegining(head,10);
    InsertAtBegining(head,20);
    InsertAtBegining(head,30);
    InserAtEnd(head,40);
    InserAtEnd(head,50);
    InsertAtPosition(head,5,2);
    Traversal(head);
    //int k = middlenode(head);
    //cout<<k;
    DeletionAtFirst(head);
    Traversal(head);
    DeletionAtEnd(head);
    Traversal(head);
    DeleteAtPosition(head,1);
    Traversal(head);
    PrintingReverse(head);
   
    return 0; 
}