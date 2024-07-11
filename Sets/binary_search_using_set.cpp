#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main(){
    vector<int> arr= {1,2,4,4};
    vector<int> ans;
    set<int> k = {arr.begin(),arr.end()};
    set<int> :: iterator itr;
    itr = k.begin();
    for(itr;itr!=k.end();itr++){
        cout<<*itr<<" ";
        ans.push_back(*itr);
    }

    
    
}