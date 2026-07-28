class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int> nums(m+n,0);
        int i=0,j=0,k=0;;
        while(i<m && j<n){
            if(nums1[i] < nums2[j]){
                nums[k] = nums1[i];
                i++;
            }
            else{
                nums[k] = nums2[j];
                j++;
            }
            k++;
        }
        while(i<m){
            nums[k] = nums1[i];
            i++;
            k++;
        }
        while(j<n){
            nums[k] = nums2[j];
            k++;
            j++;
        }
        k = nums.size()-1;
        double ans;
        if(k%2 == 0){
            ans = nums[k/2];
            ans = ans;
        }
        else{
           ans = nums[k/2] + nums[(k/2) + 1];
           ans = ans/2;
        }
        return ans;
    }
};