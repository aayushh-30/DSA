#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<string> fizzbuzz(int n){
    vector<string> ans;
    for(int i=1;i<=n;i++){
        
        if(i%3==0 && i%5==0){
            ans.push_back("FizzBuzz");
        }
        else if(i%3==0){
            ans.push_back("Fizz");
        }
        else if(i%5==0){
            ans.push_back("Buzz");
        }
        else{
            ans.push_back(to_string(i));
        }
        
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    // fizzbuzz(n);
    vector<string> k = fizzbuzz(n);
    for(int i=0;i<n;i++){
        cout<<k[i]<<" ";
    }
    return 0;
}