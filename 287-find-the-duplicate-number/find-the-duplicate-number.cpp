//Using Hash Table
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> count;
        int a = 0;
        for(int i=0;i<nums.size();i++){
            if(count.find(nums[i]) != count.end()){
               return nums[i];
            }
            count.insert(nums[i]);
        }
        return 0;
    }
};


/*
//--> Using array
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> freq(nums.size()+1,0);

        for(int num : nums){
            freq[num]++;
        }
        for(int i=0;i<nums.size();i++){
            if(freq[i] >1){
                return i;
            }
        }
        return 0;
    }
};
*/