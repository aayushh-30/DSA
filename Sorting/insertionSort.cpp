#include<iostream>
#include<vector>
using namespace std;
// void insertionSort(vector<int> &v){
//     int n=v.size();
//     for(int i=1;i<n;i++){
//         int currentElement=v[i];

//         int j=i-1;
//         while(j>=0 && v[j]>currentElement){
//             v[j+1]=v[j];
//             j--;
//         }
//         v[j+1]=currentElement;
//     }
//     return;
// }

void insertionsort(vector<int> &arr){
    for(int i=1;i<arr.size();i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]<temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    insertionsort(v);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}