#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string decodeString(string s) {
        stack<string> st;
        string currentString = "";
        int num = 0;
        
        for (char c : s) {
            if (isdigit(c)) {
                num = num * 10 + (c - '0');
            } else if (isalpha(c)) {
                currentString += c;
            } else if (c == '[') {
                st.push(currentString);
                st.push(to_string(num));
                currentString = "";
                num = 0;
            } else if (c == ']') {
                int repeatTimes = stoi(st.top());
                st.pop();
                string previousString = st.top();
                st.pop();
                string temp = "";
                for (int i = 0; i < repeatTimes; ++i) {
                    temp += currentString;
                }
                currentString = previousString + temp;
            }
        }
        
        return currentString;
    }
};
