//only for positive integer
#include<iostream>
#include<vector>
#include<map>
using namespace std;

//using hash table
void countfrequency(vector<int> &arr){
    map<int,int> freq;
    for(int i=0;i<arr.size();i++){
        if(freq.find(arr[i])!=freq.end()){
            freq[arr[i]]++;
        }
        else{
            freq[arr[i]]=1;
        }
    }
}

int maxxi(vector<int> &arr){
    int maxi = 0;
    for(int i=0;i<arr.size();i++){
        maxi = max(maxi,arr[i]);
    }
    return maxi;
}
void countingfrequency(vector<int> &arr){
    int size = maxxi(arr)+1;
    int freq[size]={0};
    for(int i=0;i<arr.size();i++){
        freq[arr[i]]++;
    }
    for(int i=0;i<size;i++){
        cout<<i<<"--->"<<freq[i]<<endl;
    }

}
//sorting two array
int main(){
    vector<int> arr = {1,2,3,4,1,2,5,3,1};
    countingfrequency(arr);

    

    return 0;
}
