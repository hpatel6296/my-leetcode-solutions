class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int minSum = INT_MAX;
        for(int i=l;i<=r;i++){
            for(int j=0;j<nums.size();j++){
                int sum=0;
                for(int k=0;k<i && i+j<=nums.size();k++){
                    sum += nums[j+k];
                }
                if(sum > 0 && sum < minSum){
                    minSum = sum;
                }
            }
        }
        if(minSum == INT_MAX){
            return -1;
    }
        return minSum;
    }
};