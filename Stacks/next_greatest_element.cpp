#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {12,4,5,9,0,7};
    vector<int> ans(6,-1);
    stack<int> st;
    st.push(arr[0]);
    for(int i=1;i<arr.size();i++){
        while(!st.empty() && st.top()<arr[i]){
                st.pop();
            }
        if(!st.empty()){
            ans[i] = st.top();
        }else{
            ans[i] = -1;
        }
        st.push(arr[i]);
    }

    for(auto k:ans){
        cout<<k<<" ";
    }

    return 0;
}