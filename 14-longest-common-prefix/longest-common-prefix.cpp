class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        int i=0,j=2;
        string ans = "";
        if(n == 1){
            return strs[0];
        }
        while(i<strs[0].size() && i<strs[1].size()){
            if(strs[0][i] == strs[1][i]){
                ans += strs[0][i];
                i++;
            }
            else{
                break;
            }
        }
        
        while(j<n){
            string an = "";
            int z =0;
            while(z<strs[j].size() && z<ans.size()){
                 if(strs[j][z] == ans[z]){
                    an += strs[j][z];
                    z++;
                 }
                 else{
                    break;
                 }
            }
            ans = an;
            if(ans.empty()) break;
            j++;
        }
        return ans;
    }
};