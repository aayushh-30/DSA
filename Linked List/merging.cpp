#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
Node* Merged(Node* l1,Node* l2,Node* &ans){
    while(l1 && l2){
        if(l1->data < l2->data){
            ans->next = l1;
            l1= l1->next;
        }
        else{
            ans->next = l2;
            l2 = l2->next;
        }
        ans = ans->next;
    }


}
int main(){

    Node* ans = new Node(0);

    return 0;
}