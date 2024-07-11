#include<iostream>
#include<vector>
#include<stack>
#include<string>
using namespace std;
vector<int> fun(vector<int> &arr){
    stack<int> st;
    st.push(-1);
    vector<int> ans;
    for(int i=arr.size()-1;i>=0;i--){
        int curr = arr[i];
        while(st.top()>=curr){
            st.pop();
        }
        ans[i]=st.top();
        st.push(curr);
    }
    return ans;
}
int main(){
    vector<int> arr;
    
    cout<<"hello";
    return 0;
}