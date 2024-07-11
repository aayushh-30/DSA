#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void ins(int arr[],int &size,int val){
    size = size+1;
    arr[size]=val;
    int i = size;
    while(i>1){
        int p = i/2;
        if(arr[p]<arr[i]){
            swap(arr[p],arr[i]);
            i = p;
        }
        else{
            return;
        }

    }
}

void del(int arr[],int size){
    arr[1]=arr[size];
    size--;
    int i=1;
    while(i<size){
        int l = 2*i;
        int r = 2*i+1;
        int lar = arr[l]>arr[r]?l:r;
        if(arr[i]>arr[lar]){
            swap(arr[i],arr[lar]);
            i=lar;
        }
        else{
            return;
        }
    }
}

void maxheapify(int arr[],int size,int i){
    int largest = i;
    int lc = 2*i;
    int rc = 2*i+1;
    if(lc<=size && arr[lc]>arr[largest]){
        largest = lc;
    }
    if(rc<=size && arr[rc]>arr[largest]){
        largest = rc;
    }
    if(largest!=i){
        swap(arr[largest],arr[i]);
        maxheapify(arr,size,largest);
    }
}

// void minheapify(int arr[],int size,int i){
//     int smallest = i;
//     int lc = 2*i;
//     int rc = 2*i+1;
//     if(lc<size && arr[lc-1]<arr[smallest-1]){
//         smallest = lc;
//     }
//     if(rc<size && arr[rc-1]<arr[smallest-1]){
//         smallest = rc;
//     }
//     if(smallest!=i){
//         swap(arr[smallest-1],arr[i-1]);
//         maxheapify(arr,size,smallest);
//     }
// }


void pr(int arr[],int size){
    for(int i=1;i<=size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){

    int arr[20]={0,10, 5, 15, 2, 20, 30};
    int size = 6;
    for(int i=size/2-1;i>0;i--){
        maxheapify(arr,size,i);
    }
    pr(arr,size);
    // for(int i=size/2;i>=0;i--){
    //     minheapify(arr,size,i);
    // }
    // pr(arr,size);
    // vector<int> hp(6);
    // for(int i=0;i<6;i++){
        
    
    
   
    
    return 0;
}