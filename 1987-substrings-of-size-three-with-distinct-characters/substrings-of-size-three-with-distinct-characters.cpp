class Solution {
public:
    int countGoodSubstrings(string s) {
        int n = s.size();
        vector<string> ans;
        for(int i=0;i<n-2;i++){
           string sub;
           if(s[i]!=s[i+1] && s[i]!=s[i+2] && s[i+1]!=s[i+2]){
                sub += s[i]+s[i+1]+s[i+2];
           }
           else{
            continue;
           }
           ans.push_back(sub);
        }
        return ans.size();
    }
};