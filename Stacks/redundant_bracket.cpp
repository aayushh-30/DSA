#include<iostream>
#include<stack>
#include<string>
using namespace std;
string fun(string s){
    stack<char> st;
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        if(ch=='('||ch=='+'||ch=='-'||ch=='*'||ch=='/'){
            st.push(ch);
        }
        else if(ch==')'){
            if(st.top()=='+'||st.top()=='-'||st.top()=='*'||st.top()=='/'){
                st.pop();st.pop();
            }
            else{
                return "redudant";
            }
            
        }
    }
    return "not redudant";
}
int main(){
    string s;
    cin>>s;
    cout<<fun(s);
    return 0;
}