#include<bits/stdc++.h>

using namespace std;

//printing all the sub array
// vector<vector<int>> ans;
// void fun(vector<int> &arr,int i,int n,vector<int> k){
//     if(i==n){
//         ans.push_back(k);
//         return;
//     }
//     for(int a = i; a<n ; a++){
//         k.push_back(arr[a]);
        
//         fun(arr,a+1,n,k);
//         ans.push_back(k);
//         k.pop_back();
//     }
// }

//printing all the sub sequence;
vector<vector<int>> ans1;
void fun1(vector<int> &arr,int i,int n,vector<int> k){
    if(i==n){
        ans1.push_back(k);
        return;
    }

    k.push_back(arr[i]);
    fun1(arr,i+1,n,k);
    k.pop_back();
    fun1(arr,i+1,n,k);
}



int main(){
    vector<int> arr = {1,2,3,4};
    fun1(arr,0,4,{});
    for(auto i: ans1){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}