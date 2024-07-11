if(s[0]>='A' && s[0]<='Z'){
        int i = 1,j=s.length()-1;
        while(i<j){
            if((s[i]>='A' && s[i]<='Z') && (s[j]>='a' && s[j]<='z')||((s[j]>='A' && s[j]<='Z') && (s[i]>='a' && s[i]<='z'))){
                return false;
            }
            i++;
            j--;
        }
        return true;

    }
    else{
        return false;
    }