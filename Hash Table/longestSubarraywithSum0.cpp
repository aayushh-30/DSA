#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    unordered_map<int,int> mp;
    int sum = 0;
    int maxLen = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==0){
            maxLen = max(maxLen,i+1);
        }
        if(mp.find(sum)!=mp.end()){
            maxLen = max(maxLen,abs(mp[sum]-i));

        }else{
            mp[sum] = i;

        }

    }
    return maxLen;

    return 0;
}