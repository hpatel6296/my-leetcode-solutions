class Solution {
public:
    void bubbleSort(vector<int>& nums){
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size()-1-i;j++){
                if(nums[j+1]<nums[j]){
                    int temp = nums[j+1];
                    nums[j+1] = nums[j];
                    nums[j] = temp;
                }
            }
        }
    }
    int maxProduct(vector<int>& nums) {
        bubbleSort(nums);
        int max1 = nums[nums.size()-1] - 1;
        int max2 = nums[nums.size()-2] - 1;
        return max1 * max2;
    }
};