#include<iostream>
#include<vector>


using namespace std;
//lower bound;
//return the number index which greater than or equal to the target
int lowerBound(vector<int> arr,int t){
    int i = 0;
    int e = arr.size()-1;
    int ans = -1;
    while(i<=e){
        int mid = i+(e-i)/2;
        if(arr[mid]>=t){
            ans = mid;
            e = mid -1;
        }else{
            i = mid+1;
        }
    }
    return ans;
}

int upperBound(vector<int> arr,int t){
    int i = 0;
    int e = arr.size()-1;
    int ans = -1;
    while(i<=e){
        int mid = i+(e-i)/2;
        if(arr[mid]>t){
            e = mid -1;
        }else{
            ans = mid;
            i = mid+1;
        }
    }
    return ans;

}

int main(){

    return 0;
}