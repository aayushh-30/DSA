#include<iostream>
#include<string>
using namespace std;
int countlastword(string s){
    int k = s.length()-1;
    while(s[k]==' '){
        k--;
    }
    int count = 0;
    for(int i=k;i>=0;i--){
        if((s[i]>='A' && s[i]<='Z')||(s[i]>='a' && s[i]<='z')){
            count++;
        }
        int j = i-1;
        if(s[j]==' '){
            break;
        }
    }
    return count;
}
int main(){
    string s;
    getline(cin,s);
    cout<<countlastword(s);

    return 0;
}