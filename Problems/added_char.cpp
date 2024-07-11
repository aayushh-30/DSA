#include<iostream>
#include<string>
using namespace std;
char diff(string s,string t){
    int ans1=0;
    for(int i=0;i<s.length();i++){
        ans1 = ans1 ^ s[i];
    }
    for(int i=0;i<t.length();i++){
        ans1 = ans1 ^ t[i];
    }
    
    cout<<char(ans1);
}
using namespace std;
int main(){
    string a,b;
    cin>>a;
    cin>>b;
    diff(a,b);
    
    return 0;
}