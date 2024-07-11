#include<iostream>
#include<string>
#include<stack>
using namespace std;
int segments(string s){
    s+=' ';
    stack<int> st;
    string l="";
    for(int i=0;i<=s.length();i++){
        if(s[i]!=' '){
            l.push_back(s[i]);
        }
        else if(s[i]==' '){
            if(l.length()>0){
                st.push(1);
                l="";
            }
            st.push(0);
        }

    }
    int cnt=0;
    while(!st.empty()){
        cnt = cnt+st.top();
        st.pop();
    }
    return cnt;

}

int components(string s){
    int count = 0;
    bool insegment = false;
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            if(insegment){
                count++;
                insegment = false;
            }
        }
        else{
            insegment=true;
        }
    }
    if(insegment) count++;
    return count;
}
int main(){
    string s;
    getline(cin,s);
    cout<<components(s)<<endl;
    return 0;
}