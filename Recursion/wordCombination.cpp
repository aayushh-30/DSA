#include<bits/stdc++.h>

using namespace std;
vector<string> ans;

void fun1(string s1,string s2,int n,int i,string as){
    if(i==n){
        ans.push_back(as);
        return;
    }

    fun1(s1,s2,n,i+1,as)
}
void fun(int i,int n,string s1,string s2,string s){
    if(i==s1.length()) {
        ans.push_back(s);
        return;
    };
    s+=s1[i];
    for(int j=0;j<s2.length();j++){
        s+=s2[j];
        fun(i+1,n,s1,s2,s);
        s.pop_back();
    }
    s.pop_back();
}

int main(){
    fun(0,2,"abc","def","");
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<"  ";
    }



    return 0;
}