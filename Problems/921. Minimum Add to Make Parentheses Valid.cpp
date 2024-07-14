#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minAddToMakeValid(string s) {
        int ct = 0;
        stack<char> st;
        for(char c:s){
            if(c=='('){
                st.push(c);
            }else if(c==')' && st.empty()==true){
                ct++;
            }else{
                st.pop();
            }
        }
        while(!st.empty()){
            ct++;
            st.pop();
        }

        return ct;
        
    }
};