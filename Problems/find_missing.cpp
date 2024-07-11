#include<iostream>
#include<vector>
using namespace std;
int main(){
    int ans = 0;
    int n = 5;
    vector<int> arr = {1,2,3,4};
    for(int i=0;i<arr.size();i++){
        ans = ans ^ arr[i];
    }
    for(int i=1;i<n;i++){
        ans = ans ^ i;
    }
    cout<<"missing number is :"<<ans;

    return 0;
}