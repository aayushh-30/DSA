#include<iostream>
using namespace std;

int part(int arr[],int l,int h){
    int i = l;
    int j = h;
    int p = arr[i];
    while(i<j){
        while(arr[i]<=p) i++;
        while(arr[j]>p) j--;
        if(i<j){
            swap(arr[i],arr[j]);
        }
        swap(arr[l],arr[j]);
        for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
        return j;
    }
}

void QuickSort(int arr[],int l,int h){
    if(l<h){
        int pivot = part(arr,l,h);
        QuickSort(arr,l,pivot-1);
        QuickSort(arr,pivot+1,h);
    }
}
int main(){

    int arr[]={2,1,7,3,4,5};

    QuickSort(arr,0,5);

    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    

    return 0;
}