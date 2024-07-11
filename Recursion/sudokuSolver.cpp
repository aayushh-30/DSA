#include<bits/stdc++.h>

using namespace std;

bool isPossible(int i,int j,char c,vector<vector<char>> board){
    for(int a=0;a<9;a++){
        if(board[a][j]==c) return false;
        if(board[i][a]==c) return false;
        if(board[3*(i/3)+i/3][3*(i/3)+i%3]==c) return false;
    }

    return true;
}

bool sudokuSolver(vector<vector<char>> board){
    for(int i=0;i<board.size();i++){
        for(int j=0;j<board[i].size();j++){
            if(board[i][j]=='.'){
                for(char c = '1';c<='9';c++){
                    if(isPossible(i,j,c,board)){
                        board[i][j] = c;

                        if(sudokuSolver(board)==true){
                            return true;
                        }else{
                            board[i][j] = '.';
                        }
                    }
                }
            }
            return false;
        }
    }
    return true;
}

int main(){

    return 0;
}