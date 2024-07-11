#include<iostream>
#include<stack>
#include<string>
using namespace std;
string reversestring(string s){
    stack<char> st;
    for(int i=0;i<s.length();i++){
        st.push(s[i]);
    }
    string rev;
    while(!st.empty()){
        rev.push_back(st.top());
        st.pop();

    }
    return rev;
}
int main(){
    string s;
    cin>>s;
    cout<<reversestring(s);
    return 0;
}