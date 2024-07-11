#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
bool ismono(vector<int> &arr){
vector<int> copy = arr;
sort(copy.begin(),copy.end());
for(int i=0;i<arr.size();i++){
        cout<<copy[i];
    }

for(int i=0;i<arr.size();i++){
    if(arr[i]!=copy[i]){
        return false;
    }
}
reverse(copy.begin(),copy.end());
cout<<endl;
for(int i=0;i<arr.size();i++){
        cout<<copy[i];
    }
for(int i=0;i<arr.size();i++){
    if(arr[i]!=copy[i]){
        return false;
    }
}
return true;
}
int main(){

    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<ismono(arr);

    
    return 0;
}