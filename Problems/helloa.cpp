#include<iostream>
#include<vector>
#include<stack>
#include<string>
using namespace std;
int main(){
    vector<string> arr = {"1","2","C"};
    int k = stoi(arr[0]);
    cout<<k;
    stack<int> st;
    st.push(arr[0]);
    return 0;
}