#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// int thmax(vector<int> &arr){
//     sort(arr.begin(),arr.end());
//     int i = arr.size()-1;
//     while(i>=1){
//         if(arr[i-1]==arr[i]){
//             i--;
//         }

//     }
// }
int thirdmax(vector<int> &arr){
    if(arr.size()>=3){
    int max1,max2,max3=INT32_MAX;
    vector<int> copy = arr;
    sort(copy.begin(),copy.end());
    max1 = copy[copy.size()-1];
    int i = copy.size()-1;
    while(i>=0){
        if(copy[i]!=max1){
            max2 = copy[i];
            break;
        }
        i--;
    }
    int j = copy.size()-1;
    while(j>=0){
        if(copy[j]!=max1 && copy[j]!=max2 ){
            max3 = copy[j];
            break;
        }
        j--;
    }
    if(max3==-1){
        return max1;
    }
    return max3;
    }
    else{
        sort(arr.begin(),arr.end());
        return arr[arr.size()-1];
    }
    
}
int main(){
    vector<int> arr={2,2,3,1};
    int k = thirdmax(arr);
    cout<<k;
    return 0;
}