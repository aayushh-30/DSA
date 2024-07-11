//test cases are not passing for very long number
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string multiply(string s1,string s2){
    int num1=0,num2=0;
    for(int i=0;i<s1.length();i++){
        int k=s1[i]-'0';
        num1=num1*10+k;

    }
    for(int i=0;i<s2.length();i++){
        int k=s2[i]-'0';
        num2=num2*10+k;

    }
    int pd = num1*num2;
    if(pd==0)
    return "0";
    string ans;
    while(pd>0){
        char a = (pd%10)+'0';
        ans.push_back(a);
        pd/=10;
    }
    reverse(ans.begin(),ans.end());
    return ans;
    
}
int main(){
    string num1,num2;
    cin>>num1;
    cin>>num2;
    cout<<multiply(num1,num2);
    return 0;
}