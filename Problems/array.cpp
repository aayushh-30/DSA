//initialising a array with a single number;

// #include<iostream>
// using namespace std;
// int main(){


//     int arr[100];
     
//     for(int i=0;i<100;i++){
//         arr[i]=55;
//     }

//     cout<<arr[26];
// }



#include<iostream>
#include<vector>
using namespace std;


// //finding max and min in an array;
// int max_min(int arr[],int size){
//     int max,min;
//     max=min=arr[0];
     
//     for(int i=0;i<size;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//         if(arr[i]<min){
//             min=arr[i];
//         }
//     }
//     return max,min;

// }


// //sum of all the elements oa an aaray
// int sum_of_elements(int arr[],int size){
//     int sum=0;
//     for(int i = 0; i<size ; i++){
//         sum=sum+arr[i];
//     }
//     return sum;

// }

// //linear search
// //return 0 if the number is not present and 1 if the number is present;

// int search(int arr[],int size,int num_req){
//     for(int i=0;i<size;i++){
//         if(num_req==arr[i]){
//             return 1;
//         }

//     }
//     return 0;
// }


// //reversing an array;
// void reverse(int arr[],int size){
//     int i=0,j=size-1;
//     while(i<j){
//         int a = arr[i];
//         arr[i]=arr[j];
//         arr[j]=a;
//         i++;j--;
//     }
//     return;


// }

// //swapping alternate elements
// //only for even number of element in an array
// void s_a_e(int arr[],int size){

//     int i=0,j=1;
//     while(j!=size-1){
//         int a=arr[i];
//         arr[i]=arr[j];
//         arr[j]=a;
//         i=i+2;
//         j=j+2;
//     }
// }

// //finding unique element
// int unique(int arr[],int size){
//     int ans=0;
//     for(int i=0;i<size;i++){
//         ans=ans^arr[i];
//     }
//     return ans;
// }
 
//finding duplicates elements
//not optimal....can be a better way;
// int duplicates(int arr[],int size){
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             if(arr[i]==arr[j]){
//                 return arr[j];
//             }
            
//         }
//     }
// }

//difference of sum of element and the sum of digit of an array
// int sum_diff(int arr[],int size){
//     int sum=0,digitsum=0;
//     for(int i=0;i<size;i++){
//         sum=sum+arr[i];
//         while(arr[i]!=0){
//             digitsum+=arr[i]%10;
//             arr[i]/=10;
//         }
//     }
//     return abs(sum-digitsum);
// }

//removing duplicates from an sorted array;
 void removeduplicates(vector<int> &v){
    int p1=0,p2=1;
    while(p2<v.size()){
        if(v[p1]==v[p2]){
            for(int i=p2;i<v.size();i++){
                v[i]=v[i+1];
            }
        }
        p1++,p2++;
    }

 }


 //moving zeroes to the end of an array;
 //relative ordering of non zero elements does not matter;
 //1st approach
void movingzeroes(vector<int> &arr){
    int i=0,j=arr.size()-1;
    while(i<j)
    {
        if (arr[i]==0 && arr[j]!=0){
            swap(arr[i],arr[j]);
            i++;j--;
        }
        if(arr[i]!=0){
            i++;
        }
        if(arr[j]==0){
            j--;
        }
    }
}

//2nd approach
//relative position of the non-zero elements must be preserved;

void movingzeroes2(vector<int>& arr){
    int i=0,j=arr.size();{
        for(int k=0;k<j;k++){
            if(arr[k]!=0){
                arr[i]=arr[k];
                i++;
            }
        }
        for(int l=i;l<arr.size();l++){
            arr[l]=0;
        }
    }
}

//finding the sum of 1st and 2nd highest number of an array

int sumOfTwo(vector<int> &v){
    int max=v[0];
    int smax=v[0];
    for(int i=0;i<v.size();i++){
        if(v[i]>max){
            max=v[i];
        }
    }
    for(int i=0;i<v.size();i++){
        if(v[i]>smax && v[i]!=max){
            smax = v[i];
        }
    }
    return max+smax;
}

int main(){


    vector<int> v(5);
    v.push_back(0);
    v.push_back(2);
    v.push_back(0);
    v.push_back(3);
    v.push_back(4);


    cout<<sumOfTwo(v);

    // removeduplicates(v);
    // for(int i=0;i<5;i++){
    //     cout<<v[i]<<" ";
    // }
    
    //call for moving zeroes
    // movingzeroes2(v);
    // for(int i=0;i<5;i++){
    //     cout<<v[i]<<" ";
    // }



    
    //call for max_min;

    // int result=max_min(arr,4);
    // cout<<result;

    //call for sum_of_elements
    // cout<<"SUM OF ALL THE ELEMENTS OF THE ARRAY : "<<sum_of_elements(arr,4)<<endl;
    

    //call for search;
    // cout<<search(arr,4,4);

    //call for reverse;
    // reverse(arr,5);
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }

    //call for reverse;
    // s_a_e(arr,4);
    // for(int i=0;i<4;i++){
    //     cout<<arr[i]<<" ";
    // }

    //call for unique;
    // cout<<unique(arr,5);

    //call for duplicates
    // cout<<duplicates(arr,5);

    //call for sum_diff;
    // cout<<sum_diff(arr,5);
}