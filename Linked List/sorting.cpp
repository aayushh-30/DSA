//bubble sort in linkedlist

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
void sort(Node *&head){
    Node *temp = head;
    while(temp){
        if(temp->data>temp->next->data){
            swap(temp->data,temp->next->data);
        }
        temp = temp->next;
    }
    

}
int main(){

    return 0;
}