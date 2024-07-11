#include<iostream>
using namespace std;
class Queue{
    int size;
    int *arr;
    int front;
    int rear;
    public:
    Queue(int size){
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void Enqueue(int data){
        if(size != rear){
            arr[rear] = data;
            rear++;    

        }
        else{
            cout<<"FULL"<<endl;
        }
    }

    void Dequeu(){
        if(front == rear) cout<<"EMPTY";
        else{
            arr[front]=-1;
            front++;
            if(front == rear){
                front = rear = 0;
            }
        }
    }
    void empty(){
        if(front==rear)
        cout<<"Empty";
        else
        cout<<"not empty";
    }
};
int main(){

    Queue Q1(5);

    Q1.Enqueue(1);
    Q1.empty();
    
    return 0;
}