//array must be monotonic;
#include<iostream>
#include<vector>
using namespace std;
// int binarySearch(int arr[],int size,int key){
//     int start=0;
//     int end=size-1;
//     int mid=(start+end)/2;
//     while(start<=end){
//         if(arr[mid]==key){
//             return mid;
//         }
//         if(arr[mid]>key){
//             end=mid-1;
//         }
//         else{
//             start=mid+1;
//         }

//         mid=(start+end)/2;

//     }
//     return -1;
// }


int ranges(vector<int>& nums,int target){
    int start=0;
    int end=nums.size()-1;
    int fp=-1,lp=-1;

    //left most

    while(start<=end){
        int mid=start+(end-start)/2;
        if(nums[mid]==target){
            fp=mid;
            end=mid-1;
        }
        else if(nums[mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }


    start=0;
    end=nums.size()-1;


    //right most

    while(start<=end){
        int mid=start+(end-start)/2;
        if(nums[mid]==target){
            lp=mid;
            start=mid+1;
        }
        else if(nums[mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }

    // if(lp-fp+1)
    // return {fp,lp};
    // else
    // return {-1,-1};
}






int main(){
    vector<int> v{1,2,3,3,3,3,4,5,6};

    
}