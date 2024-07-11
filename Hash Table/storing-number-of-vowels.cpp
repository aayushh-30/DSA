#include<iostream>
#include<map>
#include<string>
using namespace std;
void count(string word,string in){
    map<char,int> tab;
    for(int i=0;i<word.length();i++){
        tab[word[i]]=0;
    }
    for(int i=0;i<in.length();i++){
        if(tab.find(in[i])!=tab.end()){
            tab[in[i]]++;

        }
    }
    for(auto itr = tab.begin();itr!=tab.end();itr++){
        cout<<itr->first<<"  ---->   "<<itr->second<<endl;
    }
}
int main(){
    string word,in;
    cin>>word;
    cin>>in;
    count(word,in);

}
