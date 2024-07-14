#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(!st.empty() && s[i]=='*'){
                st.pop();
            }
            else if(s[i]!='*'){
                st.push(s[i]);
            }
        }
        string ans = "";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};