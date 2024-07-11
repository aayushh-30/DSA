#include<iostream>
#include<vector>
using namespace std;
void iss(vector<int> &arr){
    int n = arr.size();
    for(int i=1;i<n;i++){
        int k = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>k){
            arr[j+1]=arr[j];
            j= j-1;
        }
        arr[j+1]=k;
        for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
        

    }

}
void bubble(vector<int> &arr){
    int n = arr.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void sel(vector<int> &arr){
    int n = arr.size();
    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j = i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min = j;
            }
        }
        if(min!=i){
            swap(arr[min],arr[i]);
        }
    }
}
int main(){
    vector<int> arr{2,5,9,0,1};
    sel(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}