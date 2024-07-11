#include<bits/stdc++.h>

using namespace std;


class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }

};


void InsertionAtHead(Node* &head,int data){
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}


void InsertionAtEnd(Node* &head,int data){
    Node* temp = head;
    Node* newNode = new Node(data);
    while(temp->next){
        temp = temp -> next;

    }
    temp -> next = newNode;
}


void Traversal(Node* head){
    while(head){
        cout<<head->data<<" --> ";
        head = head ->next;
    }
    cout<<"null";
}


void DeleteNode(Node* &head,int val){
    Node* temp = head;
    Node* prev = nullptr;
    while(temp->data != val){
        prev = temp;
        temp = temp -> next;
    }
    prev -> next = temp -> next;
}


int LengthOfLinkedList(Node* head){
    int c = 0;
    while(head){
        c++;
        head = head ->next;
    }
    return c;

}


int RecursiveLengthOfLinkedList(Node* head){
    if(head==nullptr) return 0;
    return 1 + RecursiveLengthOfLinkedList(head->next);
}


bool Searching(Node* head,int val){
    if(head==nullptr) return false;
    if(head -> data == val) return true;

    return Searching(head->next,val);
 }


int MiddleOfLinkedList(Node* head){
    Node* fp = head;
    Node* sp = head;
    while(fp && fp->next){
        fp = fp ->next->next;
        sp = sp->next;

    }
    return sp->data;
}


Node* ReverseALinkedList(Node* head){
    Node* current = head;
    Node* prev = nullptr;
    while(current){
        Node* next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

//USing adding at the first method;


bool LoopDetection(Node* head){
    Node* fp = head;
    Node* sp = head;
    while(fp && fp->next){
        fp = fp -> next -> next;
        sp = sp -> next;
        if(fp == sp){
            return true;
        }
    }
    return false;
}


Node* StartingOfLoop(Node* head){
    Node* fp = head;
    Node* sp = head;
    while(fp && fp->next){
        fp = fp -> next -> next;
        sp = sp -> next;
        if(fp == sp){
            break;
        }
    }
    sp = head;
    while(sp!=fp){
        sp = sp -> next;
        fp = fp -> next;
    }

    return sp;
    
}


int CountingNodesINLoop(Node* head){
    Node* fp = head;
    Node* sp = head;
    while(fp && fp->next){
        fp = fp -> next -> next;
        sp = sp -> next;
        if(fp == sp){
            break;
        }
    }
    int c = 0;
    sp = head;
    while(sp!=fp){
        c++;
        sp = sp -> next;
        fp = fp -> next;
    }

    return c;
    
}

Node* OddEvenLinkedList(Node* head){
    Node* temp = head;
    Node* even = nullptr;
    Node* odd = nullptr;
    while(temp){
        if((temp -> data) % 2 == 0){
            Node* t1 = even;
            t1 = new Node(temp->data);
            t1 = t1 -> next;
        }else{
            Node* t2 = odd;
            t2 = new Node(temp->data);
            t2 = t2 -> next;

        }

    }
}

//Merge two Linked List in zig zag manner
Node* mergingTwoLinkedList(Node* L1,Node* L2){
    Node* s1 = L1;
    Node* s2 = L2;
    while(s1!=nullptr && s2!=nullptr){
        Node* t1 = s1->next;
        s1->next = s2;
        Node* t2 = s2->next;
        s2->next = t1;

        s1 = t1;
        s2 = t2;
    }
    return L1;
}

Node* mergeTwoSortedLists(Node* list1, Node* list2) {
        Node* ans;
        if(list1==nullptr)
        return list2;
        if(list2==nullptr)
        return list1;
        if(list1->data>list2->data){
            ans = list2;
            ans->next=mergeTwoSortedLists(list1,list2->next);
        }
        else{
            ans = list1;
            ans->next = mergeTwoSortedLists(list1->next,list2);
        }
        return ans;
        
    }
int main(){
    Node* head = new Node(10);
    InsertionAtEnd(head,20);
    
    InsertionAtEnd(head,30);
    InsertionAtEnd(head,40);

    


    return 0;
}