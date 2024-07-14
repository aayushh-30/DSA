#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        long long len = s.size() , i ;

    stack<char> stack_s , stack_t ;

    for(i=0 ;i<len ;i++) {
        if(s[i] == '#') {
            if(!stack_s.empty())
            stack_s.pop();
        }
        else {
            stack_s.push(s[i]);
        }
    } 

    len = t.size() ;
    for(i=0 ;i<len ;i++) {
        if(t[i] == '#') {
            if(!stack_t.empty())
            stack_t.pop();
        }
        else {
            stack_t.push(t[i]);
        }
    }

    len = stack_s.size() ;

    if(len != stack_t.size())
    return false;

    for(i=0 ;i<len ;i++) {
        
        if(stack_s.top() != stack_t.top())
        return false ;

        stack_s.pop();
        stack_t.pop();
    }

    return true ;
    }
};