#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
char maxi(string s){
    int arr[26]={0};
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z'){
            arr[s[i]-'a']++;
        }
        else if(s[i]>='A' && s[i]<='Z'){
            arr[s[i]-'A']++;
        }
    }
    int maxi = -1;int ans=0;
    for(int i=0;i<26;i++)
    if(maxi<arr[i]){
        ans = i;
        maxi = max(maxi,arr[i]);
    }
    
    return char(ans+'a');

}
int main(){
    string s;
    cin>>s;
    cout<<maxi(s);
    
    return 0;
}