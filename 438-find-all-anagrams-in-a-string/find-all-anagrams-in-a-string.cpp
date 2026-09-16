class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int n = s.size();
        int m = p.size();
        if(n<m){
            return ans;
        }
        unordered_map <char,int> number;
        for(char c : p){
            number[c]++;
        }
        for(int i=0;i<=n-m;i++){
            unordered_map <char,int> number1;
            for(int j=0;j<m;j++){
                char c = s[i+j];
                number1[c]++;
            }
            if(number == number1){
                ans.push_back(i);
            }
        }
        return ans;
    }
};