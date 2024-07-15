class Solution {
public:
    int numberOfSpecialChars(string s) {
        int arrS[26]={0};
        int arrC[26] = {0};
        for(int i=0;i<s.length();i++){
            if(s[i]>='a'){
                int ind = s[i]-'a';
                arrS[ind]++;
            }else{
                 int ind = s[i]-'A';
                 arrC[ind]++;

            }
        }
        int ans = 0;
        for(int i=0;i<26;i++){
            if(arrS[i]!=0 && arrC[i]!=0){
                ans+=1;
            }
        }

        return ans;
        
    }
};