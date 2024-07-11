#include<iostream>
#include<stack>
#include<vector>
using namespace std;
bool validparenthesis(string s){
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='{'||s[i]=='['||s[i]=='('){
            st.push(s[i]);

        }
        else{
            if(st.empty()){
                return false;
            }
            char top = st.top();
            if(s[i]=='}' && top=='{'|| s[i]==')' && top=='(' || s[i]==']' && top=='['){
                st.pop();
            }
            else{
                return false;
            }

        }
        
    }
    if(st.empty()){
            return true;
        }
    else{
        return false;
    }
    
}
int main(){
    string s;
    cin>>s;

    bool v = validparenthesis(s);

    cout<<v;
    
    return 0;
}
