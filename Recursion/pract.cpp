#include<iostream>
#include<vector>
using namespace std;

int sum(vector<int> arr,int n){
    if(n==0||n==1){
        return arr[n];
    }
    if(n<0) return 0;
    int sum1 = sum(arr,n-2)+arr[n];
    int sum2 = sum(arr,n-1)+arr[n-1];

}


int partition(int arr[],int start,int end){

    int pivotelement = arr[start];

    int count = 0;
    for(int i=start+1;i<=end;i++){
        if(pivotelement>arr[i]){
            count++;
        }
    }

    int pivotind = start + count;

    swap(arr[start],arr[pivotind]);

    int i=0,j=end;

    while(i<pivotind && j>pivotind){
        while(arr[i]<pivotelement){
            i++;
        }
         while(arr[j]>pivotelement){
            j--;
        }
        if(i<pivotind && j>pivotind){
            swap(arr[i++],arr[j--]);
        }
    }

}

void quick(int arr[],int start,int end){
    if(start>=end){
        return;
    }

    int p = partition(arr[],start,end);

    quick(arr,start,p-1);
    quick(arr,p+1,end);
}
int main(){

    int arr[]={2,1,4,5,3};

    int size = 5;

    quick(arr,0,size-1);


    return 0;
}