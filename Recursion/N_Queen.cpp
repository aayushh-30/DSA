#include<bits/stdc++.h>
using namespace std;
bool isSafe(int r,int c,vector<string> board,int n){
    int i = r;
    int j = c;

    while(i>=0 && j>=0){
        if(board[i][j]=='Q'){
            return false;
        }
        i--;
        j--;
    }

    i = r;
    j = c;
    while(j>=0){
        if(board[i][j]=='Q'){
            return false;
        }
        j--;
    }

    while(i<n && j>=0){
        if(board[i][j]=='Q'){
            return false;
        }
        i++;
        j--;
    }

    return true;

}

void NQ(int c,int n,vector<string> board,vector<vector<string>> ans){
    if(c==n){
        ans.push_back(board);
        return;
    }

    for(int row = 0;row<n;row++){
        if(isSafe(row,c,board,n)){
            board[row][c] = 'Q';
            NQ(c+1,n,board,ans);
            board[row][c] ='.';
        }
    }

}
int main(){


    return 0;
}