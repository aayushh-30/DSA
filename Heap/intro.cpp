#include<bits/stdc++.h>
using namespace std;
class Heap{
    int *arr;
    int size;
    int TotalSize;

    Heap(int k){
        arr = new int[k];
        size = 0;
        TotalSize = k;
    }

    void insert(int val){
        if(TotalSize==size){
            cout<<"Overflowed"<<endl;
            return;
        }
        
        arr[size] = val;
        int ind = size;
        size++;
        while(size>0 && arr[(ind-1)/2]<arr[ind]){
            swap(arr[(ind-1)/2],arr[ind]);
            ind = (ind-1)/2;
        }
    }

};
int main(){


    return 0;
}