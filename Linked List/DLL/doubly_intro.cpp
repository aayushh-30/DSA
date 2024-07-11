#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertAtBeginning(Node* &head,int data){
    Node* newNode = new Node(data);
    if(head==NULL){
    newNode->next = head;
      head = newNode;
      return;  
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insertAtEnd(Node* &head,int data){
    Node* newNode = new Node(data);
    if(head==NULL){
    newNode->next = head;
      head = newNode;
      return;  
    }
    Node* temp = head;
    while(temp->next){
        temp=temp->next;
    }
    newNode->prev = temp;
    temp->next = newNode;

}

void Traversal(Node* head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<"<==>";
        temp = temp->next;

    }
    cout<<"NULL";
}

void deleteAtEnd(Node* &head){
    Node* temp = head;
    while(temp->next){
        temp = temp->next;
    }
    temp->prev->next = NULL;
    delete temp;

}


    
int main(){
    Node* head = NULL;
    // int arr[]={1,2,3};
    // for(int i=0;i<3;i++){
    //     insertAtBeginning(head,arr[i]);
    // }
    insertAtEnd(head,1);
    insertAtEnd(head,2);
    insertAtEnd(head,3);
    insertAtEnd(head,5);

    Traversal(head);
    cout<<endl;
    deleteAtEnd(head);
    Traversal(head);


    return 0;
}