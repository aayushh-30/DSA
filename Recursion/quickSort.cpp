#include<iostream>
#include<vector>
using namespace std;
int partition(int arr[],int s,int e){

    int pivot = arr[s];

    int cnt = 0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }

    int pivotind = s+cnt;

    swap(arr[pivotind],arr[s]);


    int i=0,j = e;
    while(i<pivotind && j> pivotind){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotind && j>pivotind){
            swap(arr[i++],arr[j--]);
        }

    }
    return pivotind;

}


void QuickSort(int arr[], int s,int e){
    if(s>=e){
        return;
    }

    int p = partition(arr,s,e);

    QuickSort(arr,s,p-1);

    QuickSort(arr,p+1,e);

}
int main(){
    int arr[5] = {2,5,6,1,3};
    int s = 5;
    QuickSort(arr,0,s-1);

    for(int i=0;i<s;i++) cout<<arr[i]<<" ";
    


    return 0;
}