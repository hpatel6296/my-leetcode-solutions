class Solution {
public:
    void devide(vector<int>& nums,int s,int e){
        if(s>=e){
            return;
        }
        int mid = s + (e-s)/2;
        devide(nums,s,mid);
        devide(nums,mid+1,e);
        margeSort(nums,s,e,mid);
    }

    void margeSort(vector<int>& nums,int s,int e,int mid){
        int n1 = s;
        int n2 = mid+1;
        vector<int> sort;
        while(n1<=mid && n2<=e){
            if(nums[n1]<nums[n2]){
                sort.push_back(nums[n1]);
                n1++;
            }
            else{
                sort.push_back(nums[n2]);
                n2++;
            }
        }
        while(n1<=mid){
            sort.push_back(nums[n1]);
            n1++;
        }
        while(n2<=e){
            sort.push_back(nums[n2]);
            n2++;
        }
        for(int i=s;i<=e;i++){
            nums[i] = sort[i-s];
        }
    }
    int arrayPairSum(vector<int>& nums) {
          int n = nums.size();
          devide(nums,0,n-1);      
          int sum=0;
          for(int i=0;i<nums.size();i = i+2){
              sum += nums[i];
          }
          return sum;
    }
};