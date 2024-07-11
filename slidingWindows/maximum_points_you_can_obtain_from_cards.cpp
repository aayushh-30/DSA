#include<bits/stdc++.h>
using namespace std;
int fun(vector<int> &arr,int k){
    int left_sum = 0;
    int right_sum = 0;
    int max_sum = 0;

    for(int i=0;i<k;i++){
        max_sum+=arr[i];
    }

    int last_index = arr.size()-1;
    for(int i=k-1;i>=0;i--){
        left_sum-=arr[i];
        right_sum+=arr[last_index];
        last_index--;
        max_sum = max(max_sum,left_sum+right_sum);
    }

    return max_sum;

}
int main(){

    return 0;
}