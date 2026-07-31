class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int n = nums.size();
       if(k == 0){
        return;
       }
       if(k%n == 0){
        return ;
       }
       if(k>n){
       k %= n;
       }
       vector<int> ans(n,0);
       int x = k,i=0;
       while(x>0){
        ans[i] = nums[n-x];
        x--;
        i++;
       }
       int j=0;
       while(i<n){
         ans[i] = nums[j];
         j++;
         i++;
       } 
       for(int i=0;i<n;i++){
          nums[i] = ans[i];
       }
    }
};
/*
//-> Using Two Pointer Method
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;

        reverse(nums.begin(),nums.end());

        reverse(nums.begin(),nums.begin()+k);

        reverse(nums.begin()+k,nums.end());
    }
};
*/