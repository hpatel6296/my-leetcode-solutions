//Kadane's Algorithm

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() == 0){
           return 0;
       }
       if(nums.size() == 1){
           return nums[0];
       }
       int maxSum = INT_MIN;
       int currSum = 0;
       for(int i=0;i<nums.size();i++){
          currSum = max(currSum + nums[i],nums[i]);
          maxSum = max(maxSum,currSum);
       }
       return maxSum;
    }
};