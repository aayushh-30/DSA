#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string fun(string s){
    for(int i=1;i<s.length();i++){
        if(s[i]=='i'){
            reverse(s.begin(),s.begin()+i);
        }
    
        
    }
    s.erase(remove(s.begin(),s.end(),'i'),s.end());
    return s;
    
    
    
}
int main(){
    string s;
    cin>>s;
    cout<<fun(s);
    return 0;
}