
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int k = flowerbed.size();
        if(k==1 && n==1 && flowerbed[0]==0) return true;
        int pre = -1;
        int curr = 0;
        

        while(curr<k-1){
            int next = curr+1;
            if(pre==-1 && flowerbed[curr]==0 && flowerbed[next]==0){
                flowerbed[curr]=1;
                n--;
                pre = curr;
            }
            if(flowerbed[curr]==1){
                pre = curr;
            }
            if(flowerbed[curr]==0 && flowerbed[next]==0 && curr-pre>=2){
                flowerbed[curr] = 1;
                pre = curr;
                n--;
            }
            curr++;
        }
        if( k>=2 && flowerbed[k-1]==0 && flowerbed[k-2]==0) n--;
        return n<=0;
        
    }
};