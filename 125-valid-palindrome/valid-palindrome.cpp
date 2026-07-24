class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size() == 0 || s.size() == 1){
            return true;
        }
        int i=0,j=s.size()-1;
        while(i <= j){
           
               while(!isalnum(s[i]) && i<j){
                    i++;
               }
                
                if(i==j){
                    return true;
                }
           
               while(!isalnum(s[j]) && j > 0){
                    j--;
               }
               if(j== 0){
                return true;
               }
           
            if(tolower(s[i]) != tolower(s[j])){
                 return false;
             }
            i++;
            j--;
        }
        return true;
    }
};