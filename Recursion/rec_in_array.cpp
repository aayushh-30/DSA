#include<iostream>
using namespace std;
void show(int arr[],int i,int size,int &sum){
    if(i==size) return;
    
    show(arr,i+1,size,sum);
    sum+=arr[i];
    //cout<<arr[i]<<" ";

}
//sum of all elements
int sum(int arr[],int i,int size){
    if(i==size) return 0;

    return arr[i]+sum(arr,i+1,size);
}
//sum of even
int evenSum(int arr[],int i,int size){
    if(i==size) return 0;
    if(arr[i]%2!=0){
        return arr[i]+evenSum(arr,i+1,size);
    }
    else{
        return evenSum(arr,i+1,size);
    }
} 
int main(){
    int arr[]={1,2,3,4,5};
    int idx = 0;
    int size = 5;
    //int sum2 = 0;
    //show(arr,idx,size,sum2);
    //cout<<sum2;
    cout<<endl; 
    cout<<evenSum(arr,idx,size);
    return 0;
}