#include<iostream>
#include<map>
#include<string>
using namespace std;
map<char,int> fun(string s)
{
    map<char,int> mp;
    for(int i=0;i<s.length();i++)
    {
        char k = s[i];
        if(mp.find(k)!=mp.end()){
            mp[k]++;
        }
        else{
            mp[k]=1;
        }
    }
    return mp;
}
int main(){
    string s;
    getline(cin,s);
    map<char,int> j = fun(s);

    map<char,int>::iterator itr;
    itr = j.begin();
    cout<<"KEY"<<"\t"<<"VALUE"<<endl;
    for(itr;itr!=j.end();itr++){
        cout<<itr->first<<"\t"<<itr->second<<endl;
        
    }

    string ans="";




    return 0;
}