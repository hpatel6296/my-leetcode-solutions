/*
-> Solving Using Sorting */
class Solution {
public:
    void bubbleSort(vector<int>& nums){
        for(int i=0;i<nums.size();i++){
            bool flag = false;
            for(int j=0;j<nums.size()-1-i;j++){
                if(nums[j]>nums[j+1]){
                    int temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                    flag = true;
                }
            }
            if(flag == false){
                return;
            }
        }
    }
    int majorityElement(vector<int>& nums) {

        bubbleSort(nums);
        int n = nums.size();
        return nums[n/2];
    }
};

/*
--> Solve Using Hash Table 
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> count;
        for(int num : nums){
            count[num]++;
        }
        int maxF = 0;
        int maxN = 0;
        for(const auto& [element, frequency] : count){
             if(frequency > maxF){
                maxF = frequency;
                maxN = element;
             }
        }
        return maxN;
    }
};

*/