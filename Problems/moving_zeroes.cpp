#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{1,0,98,7,0};
    int j=0;
    for(int i=0;i<5;i++){
        if(arr[i]!=0){
            arr[j]=arr[i];
            j++;

        }
    }
    return 0;
}