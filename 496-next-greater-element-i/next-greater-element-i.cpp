class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int num : nums1){
            int max = -1;
            bool flag = false;
            for(int j=0;j<nums2.size();j++){
                if(nums2[j] == num){
                    flag =true;
                }
                if(flag && nums2[j]>num){
                    max = nums2[j];
                    break;
                }
            }
            ans.push_back(max);
        }
        return ans;
    }
};