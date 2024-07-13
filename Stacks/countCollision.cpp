#include<bits/stdc++.h>
#include<stack>
using namespace std;
class Solution {
public:
    int countCollisions(string dir) {
        int score = 0;
        stack<char> st;
        for(int i=0;i<dir.length();i++){
            if(dir[i]=='S' && st.empty()==true){
                st.push('S');
            }
            if(dir[i]=='R'){
                st.push(dir[i]);
            }else if(!st.empty() && dir[i]=='S'){
                while(!st.empty() && st.top()=='R'){
                        score++;
                        st.pop();
                    }
                    st.push('S');
            }else if(!st.empty() && dir[i]=='L'){
                if(st.top()=='R'){
                    while(!st.empty() && st.top()=='R'){
                        score++;
                        st.pop();
                    }
                    score++;
                    st.push('S');

                }
                else{
                    score++;
                }
            }
        }
        return score;
        
    }
};