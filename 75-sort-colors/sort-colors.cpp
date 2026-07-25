class Solution {
public:
    void sortColors(vector<int>& nums) {
        int r=0,b=0,w=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0){
                r++;
            }
            if(nums[i] == 1){
                b++;
            }
            if(nums[i] == 2){
                w++;
            }
        }
        int j = 0;
        while(j<nums.size()){
            while(r>0){
                nums[j] = 0;
                j++;
                r--;
            }
            while(b>0){
                nums[j] = 1;
                j++;
                b--;
            }
            while(w>0){
                nums[j] = 2;
                j++;
                w--;
            }
        }
    }
};

/*

--> Using Bubble sort
class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size()-i-1;j++){
                if(nums[j+1]<nums[j]){
                    int temp = nums[j+1];
                    nums[j+1] = nums[j];
                    nums[j] = temp;
                }
            }
        }
    }
};
*/