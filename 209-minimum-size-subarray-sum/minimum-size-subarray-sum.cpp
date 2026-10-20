class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int right=0,left=0;
        int sum = 0,minLet = INT_MAX;
        while(right < nums.size()){
              
              sum += nums[right];
              
              while(sum >= target){
                minLet = min(minLet,right - left + 1);
                 sum -= nums[left];
                 left++;
              }
              right++;
        }
        if(minLet == INT_MAX){
            return 0;
        }
        return minLet;
    }
};