#include<bits/stdc++.h>
using namespace std;

class Solution {
    int fun(string &s, int x, char f, char se) {
        int ans = 0;
        string temp;
        for (char c : s) {
            temp.push_back(c);
            if (temp.size() >= 2 && temp[temp.size() - 2] == f && temp[temp.size() - 1] == se) {
                temp.pop_back();
                temp.pop_back();
                ans += x;
            }
        }
        s = temp;
        return ans;
    }
public:
    int maximumGain(string s, int x, int y) { 
        if (x > y) {
            return fun(s, x, 'a', 'b') + fun(s, y, 'b', 'a');
        } else {
            return fun(s, y, 'b', 'a') + fun(s, x, 'a', 'b');
        }
    }
};

int main(){


    return 0;
}
