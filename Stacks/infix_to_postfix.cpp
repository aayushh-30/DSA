#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;
class conversion{
    private:
    bool op(char k){
        return (k=='+'||k=='/'||k=='-'||k=='*');

    }
    int presc(char k){
        if(k=='+'||k=='-')
        return 1;
        else if (k=='*'||k=='/')
        return 2;
        else
        return 3;
    }
    public:
    string in_to_po(string s){
        stack<char> st;
        string ans;
        for(int i=0;i<s.length();i++){
            char ch = s[i];
            if(ch=='('){
                st.push(ch);
            }
            else if(!(st.empty()) && ch==')'){
                while(!(st.empty()) && st.top()!='('){
                    ans.push_back(st.top());
                    st.pop();
                }
                st.pop();
            }
            else if(op(ch)){
                if(st.empty()) st.push(ch);
                else{
                    if(presc(st.top())<=presc(ch)){
                        ans.push_back(st.top());
                        st.pop();
                        st.push(ch);
                    }
                    else{
                        st.push(ch);
                    }
                }
            }
            else{
                ans.push_back(ch);
            }

        }
        while(!(st.empty())){
            ans+=st.top();
            st.pop();

        }
        return ans;
    }
};
int main(){
    conversion s;
    string k;
    cin>>k;
    cout<<"POST-FIX : "<<s.in_to_po(k)<<endl;
    reverse(k.begin(),k.end());
    string pre = s.in_to_po(k);
    reverse(pre.begin(),pre.end());
    cout<<"PRE-FIX : "<<pre;

    return 0;
}