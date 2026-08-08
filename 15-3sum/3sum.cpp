class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int s,e;
        for(int i=0;i<nums.size()-2;i++){
            if(i>0 && nums[i] == nums[i-1])continue;
              s = i+1;
              e = nums.size()-1;
              while(s<e){
                  int sum = nums[s] + nums[i] + nums[e];
                  if(sum == 0){
                       ans.push_back({nums[s],nums[i],nums[e]});
                       while (s < e && nums[s] == nums[s + 1]) s++;
                       while (s < e && nums[e] == nums[e - 1]) e--;
                       s++;
                       e--;
                  }
                  else if(s<nums.size() && sum < 0){
                       s++;
                  }
                  else{
                       e--;
                  }
              }
        }
        return ans;
    }
};