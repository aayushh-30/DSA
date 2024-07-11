#include<iostream>
#include<string>
#include<stack>
using namespace std;
string fun(string s){
    stack<char> st;
    string ans="";
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        if(ch=='('){
            
            if(st.top()=='('){
                st.pop();
            }
            st.push(ch);
        }
        else if(st.top()==')'){
            if(st.top()==')'){
                st.pop();
            }
            ans.push_back(st.top());
            ans.push_back(')');
            st.pop();
            
        }
    }
    return ans;

}

int main(){

    string s;
    cin>>s;
    string k = fun(s);
    cout<<k;
    return 0;
}