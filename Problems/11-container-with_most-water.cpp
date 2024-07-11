#include<iostream>
#include<vector>
using namespace std;
int area(vector<int> &arr){
    int max_bredth = -1;
    int max_b_ind = -1;
    for(int i=0;i<arr.size();i++){
        max_bredth = max(arr[i],max_bredth);
    }
    for(int i=0;i<arr.size();i++){
        if(arr[i]==max_bredth){
            max_b_ind = i;
            break;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    return 0;
}