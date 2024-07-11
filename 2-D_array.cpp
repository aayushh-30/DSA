// //MATRIX MULTIPLICATION
// #include<iostream>
// using namespace std;
// int main(){
//     int m,n,p;
//     cin>>m>>n>>p;
//     int arr1[m][n],arr2[n][p],res[m][p];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr1[i][j];
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<p;j++){
//             cin>>arr2[i][j];
//         }
//     }

//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr1[i][j]<<" ";
//         }cout<<endl;
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<p;j++){
//             cout<<arr2[i][j]<<" ";
//         }cout<<endl;
//     }

//     for(int i=0;i<m;i++){
//         for(int j=0;j<p;j++){
//             int sum=0;
//             for(int k=0;k<n;k++){
//                 sum+=arr1[i][k]*arr2[k][j];
//             }
//             res[i][j]=sum;
//         }
//     }

//     for(int i=0;i<m;i++){
//         for(int j=0;j<p;j++){
//             cout<<res[i][j]<<" ";
//         }cout<<endl;
//     }
//     return 0;
// }



#include<iostream>
using namespace std;
struct node *ptr;
int main(){
    int rows,cols;
    cin>>rows>>cols;
    int arr[rows][cols];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
       }cout<<endl;
    }

    int transpose[cols][rows];
    for(int i=0;i<cols;i++){
        for(int j=0;j<rows;j++){
            transpose[i][j]=arr[j][i];
        }
    }
    for(int i=0;i<cols;i++){
        for(int j=0;j<rows;j++){
            cout<<transpose[i][j]<<" ";
        }cout<<endl;
    }
    


    return 0;
}