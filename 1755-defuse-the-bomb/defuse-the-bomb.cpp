class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        if(k == 0){
            vector<int> ans(n,0);
            return ans;
        }
        vector<int> ans1;
        if(k>0){
        for(int i=0;i<n;i++){
            int sum = 0;
            for(int j=0;j<k;j++){
              if(i+j+1 < n){
                    sum += code[i+j+1];
                    }
               else{
                        sum += code[i+j-n+1];
                    }
                }
                ans1.push_back(sum);
            }
        }
        else{
            k = -k;
            for(int i=0;i<n;i++){
                int sum=0;
                for(int j=0;j<k;j++){
                    if(i-j-1 >= 0){
                        sum += code[i-j-1];
                    }
                    else{
                        sum += code[n+(i-j-1)];
                    }
                }
                ans1.push_back(sum);
            }
        }
        return ans1;
    }
};