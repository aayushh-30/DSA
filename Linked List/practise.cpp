#include<iostream>
#include<vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void Traversal(Node* &Head){
    Node *Temp = Head;
    while(Temp!=NULL){
        cout<<Temp->data<<"-->";
        Temp=Temp->next;

    }
    cout<<"NULL"<<endl;
}

void InsertAtStart(Node* &Head,int x){
    Node *NewNode = new Node(x);
    NewNode->next=Head;
    Head=NewNode;
}


void InsertAtEnd(Node* &Head,int x){
    Node *temp=Head;
    Node *NewNode = new Node(x);
    while(temp->next){
        temp=temp->next;
    }
    temp->next=NewNode;
}

int CountingNodes(Node* &Head){
    Node *temp=Head;int count=0;
    while(temp){
        count++;
        temp=temp->next;
    }
    return count;
}

int MiddleNode(Node *&Head){
    Node *fp=Head;
    Node *pre=NULL;
    Node *sp=Head;
    while(fp!=NULL && fp->next!=NULL){
        pre = sp;
        sp=sp->next;
        fp=fp->next->next;
    }
    return sp->data;
    pre->next = sp->next;
    delete sp;
}

//insert at any position

void insert(Node* &Head,int x,int pos){
    if(pos==1)InsertAtStart(Head,x);
    else{
        Node *temp = Head;
        int cnt=1;
        while(cnt<pos-1 && temp!=NULL){
            temp=temp->next;
        }
        Node* nn = new Node(x);
        nn->next = temp->next;
        temp->next = nn;

    }
}


//printing in reverse order
void reverseprinting(Node* &Head){
    Node *temp = Head;
    if(temp->next == NULL)
    cout<<temp->data<<" ";
    else{
        reverseprinting(temp->next);
        cout<<temp->data<<" ";
    }
}

//finging middle nodes data

//approach 1
int middlenode(Node* &Head){
    Node *sp = Head;
    Node *fp = Head;
    while(fp!=NULL && fp->next!=NULL){
        sp = sp->next;
        fp = fp->next->next;
    }
    return sp->data;
}

//approach 2;
int middlenode2(Node *&Head){
    int count=0;
    Node *temp = Head;
    while(temp){
        count++;
        temp = temp->next;
    }
    temp = Head;
    int middle = (count/2)+1;
    for(int i=1;i<middle;i++){
        temp = temp->next;

    }
    return temp->data;
}

//removing nth node from last

void removing_node(Node* &Head,int x){
    int count = CountingNodes(Head);
    Node *temp = Head;
    for(int i = 1 ; i < count - x ; i++){
        temp = temp->next;
    }
    Node *d = temp->next;
    if(temp->next->next == NULL){
        Node *k = temp->next;
        temp->next = NULL;
        delete k;
    }
    else{
    temp->next = temp->next->next;
    delete d;
    }
}

pair<int,int> findin_max_min(Node* Head){
    if(Head==NULL) return -1;
    int maxi = max(Head->data,findin_max_min(Head->next));

    int mini = min(Head->data,findin_max_min(Head->next))

    return {maxi,mini};

};

int main(){
    Node *Head = NULL;
    Traversal(Head);
    InsertAtStart(Head,100 );
    Traversal(Head);
    InsertAtStart(Head,20 );
    Traversal(Head);
    InsertAtEnd(Head,3);
    Traversal(Head);
    InsertAtEnd(Head,40);
    Traversal(Head);
    InsertAtEnd(Head,50);
    Traversal(Head);
    // reverseprinting(Head);
    // cout<<endl;
    // cout<<middlenode(Head);
    // cout<<endl;
    // cout<<middlenode2(Head);
    // cout<<endl;
    // removing_node(Head,6);
    Traversal(Head);

    cout<<findin_max_min(Head);
    

    return 0;
}