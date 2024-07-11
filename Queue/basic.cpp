#include<iostream>
#include<queue>
#include<stack>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int k){
        data = k;
        next = NULL;
    }
};
class queue{
    private:
    node* front;
    node* rear;
    queue(){
        front = rear = NULL;
    }

    public:
    bool isempty(){
        return front==NULL;
    }
    void enqueue(int x){
        node* temp = new node(x);
        if(isempty()){
            front = rear = temp;
        }
        else{
            temp->next = rear;
            rear = temp;
        }

    }
    void deque(){
        if(isempty()){
            cout<<"empty";
        }
        else{
            node* temp = front;
            front = front->next;
            delete(temp);
        }
    }
};
int main(){
    
    return 0;
}