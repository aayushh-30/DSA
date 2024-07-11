#include<iostream>
#include<vector>
using namespace std;

int maxSum(vector<int> &arr,int size){
    int s = 0;
    int e = size-1;
    int sum = 0;
    for(int i=0;i<=e;i++){
        sum+=arr[i];
    }
    while(e<arr.size()-1){
        int currSum = sum;
        currSum-=arr[s];
        s++;
        e++;
        currSum+=arr[e];
        sum = max(currSum,sum);

    }
    return sum;

};

//longest length of the subarray whose sum is less than k

int maxLen(vector<int> &arr,int k){
    int s,e;
    s=0;e=0;
    int l = -1;
    int sum = 0;
    while(e<arr.size()){
        sum = sum+arr[0];
         while(sum>k){
                sum-=arr[s];
                s++;
            }
        if(sum<=k){
            l = max(l,e-s+1);
            e++;
        }

    }
    return l;
};

int func(vector<int> &arr,int k){
    int lsum = 0;
    int rsum = 0;
    int maxSum = 0;
    for(int i=0;i<k;i++) lsum+=arr[i];
    maxSum = lsum; 
    int e = arr.size()-1;
    for(int i=k-1;i>=0;i--){
        lsum -= arr[i];
        rsum += arr[e];
        e--;

        maxSum = max(maxSum,lsum+rsum);

    }
};
int main(){
    vector<int> arr{-1,2,3,4,-2};

    int ans = maxSum(arr,2);
    cout<<ans;


    return 0;
}