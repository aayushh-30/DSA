#include<iostream>
#include<vector>
using namespace std;
void selectionSort(vector<int> &v){
    int n=v.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]>v[j]){
                swap(v[i],v[j]);
            }

        }
        for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    }
    return;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    selectionSort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}