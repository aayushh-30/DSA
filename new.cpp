#include<iostream>
#include<string>
using namespace std;
void add(string s1,string s2){
    cout<<s1+s2;
}
int main(){
    string s1,s2;
    cin>>s1;
    cin>>s2;
    add(s1,s2);

    
    return 0;
}