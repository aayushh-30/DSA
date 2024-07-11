#include<iostream>
using namespace std;
int main(){
    //size of array;
    int n;
    cin>>n;

    //defining an array;
    int arr[n];

    //taking input;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //printing the element of the array;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    int a,b;
    cin>>a>>b;
    int arr2[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr2[i][j];
        }
    }

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout<<arr2[i][j]<<"  ";
        }
        cout<<endl;
    }

    return 0;
}