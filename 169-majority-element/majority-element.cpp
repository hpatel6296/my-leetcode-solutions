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