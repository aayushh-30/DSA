#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
unordered_map<int,int> freq(vector<int>& arr){
    unordered_map<int,int>freq;
    for(int i=0;i<arr.size();i++){
        if(freq.find(arr[i])==freq.end()){
            freq[arr[i]]=1;
        }
        else{
            freq[arr[i]]++;
        }
    }
    return freq;

}
int main(){
    vector<int> arr = {1,2,1,3,4,5,4,3,2,1};
}