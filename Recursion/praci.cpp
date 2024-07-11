#include <vector>
#include <string>
#include <iostream>

using namespace std;

void fun(int i, string s1, string s2, string s, vector<string>& ans,int count) {
    if (i == s1.length()) {
        ans.push_back(s);
        return;
    }
    s += s1[i];
    for (int j = 0; j < s2.length(); j++) {
        s += s2[j];
        fun(i + 1, s1, s2, s, ans,count);
        s.pop_back();
    }
    // If s2 is empty, we still want to add the current character from s1 and continue
    fun(i + 1, s1, s2, s, ans,count);
    s.pop_back();
}
vector<string> ans;
void fun2(string s1,string s2,int i,string s){
    if(i==s1.length()) return;

    s+=s1[i];
    for(int i=0;i<s2.length();i++){
        s+=s2[i];
        ans.push_back(s);
        s.pop_back();
    }
    s.pop_back();
    fun2(s1,s2,i+1,s);
}
int main() {
    string s1 = "ab";
    string s2 = "cd";
    vector<string> ans;
    string s = "";
    fun(0, s1, s2, s, ans,2);
    for (const string& str : ans) {
        cout << str << endl;
    }
    return 0;
}