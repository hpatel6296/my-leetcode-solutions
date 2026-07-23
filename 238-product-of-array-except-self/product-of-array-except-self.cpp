class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int mul = 1,i=0,a;
       int n = nums.size(),x=0;
       bool flag = false;
       while(i<n){
           if(nums[i] == 0){
              a = i;
              i++;
              x++;
              flag = true;
           }
           if(i<n){
           mul = nums[i]*mul;
           i++; 
           }
       }
       vector<int>num(n,0);
       if(x > 1){
          return num;
       }
       if(flag == true){
           num[a] = mul;
           return num;
       }
       else{
           for(int j=0;j<nums.size();j++){
               num[j] = mul / nums[j];
           }
       }
       return num;
    }
};