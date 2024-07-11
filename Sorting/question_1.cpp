#include<iostream>
#include<vector>
using namespace std;


void bubbleSort(vector<int>& v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]); 
            }
        }
    }
}


void insertionSort(vector<int>& v){
    int n=v.size();
    for(int i=1;i<n;i++){
        int current=v[i];

        int j=i-1;
        while(j>=0 && v[j]>current){
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=current;
    }
}


void SelectionSort(vector<int>& v){
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]>v[j]){
            swap(v[i],v[j]);
            for(int i=0;i<v.size();i++){
                    cout<<v[i]<<" ";
                }
                cout<<endl;
            }
        }
    }

}


void SelectionSort2(vector<int>& v){
    for(int i=0;i<v.size()-1;i++){
        int minind=i;
        for(int j=i+1;j<v.size();j++){
            if(v[minind]>v[j])
            minind=j;
        }
        swap(v[i],v[minind]);
    }
}



int main(){
    vector<int> a{64,25,12,22,11};
    // bubbleSort(a);
    // insertionSort(a);
    SelectionSort2(a);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }


    return 0;
}