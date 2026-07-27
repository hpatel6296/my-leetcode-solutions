class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>nums(m+n,0);
        int i=0,j=0,k=0;
        while(i<m && j<n){
            if(nums1[i]>nums2[j]){
                nums[k] = nums2[j];
                j++;
            }
            else{
                nums[k] = nums1[i];
                i++;
            }
            k++;
        }
       while(i<m){
           nums[k] = nums1[i];
           k++;
           i++;
       }
        while(j<n){
            nums[k] = nums2[j];
            j++;
            k++;
        }
        for(int i=0;i<m+n;i++){
            nums1[i] = nums[i];
        }
    }
};

/*
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int a = m-1;
        int b = n-1;
        int c = m+n-1;
        while(b>=0){
               if(a>=0 && nums1[a] > nums2[b]){
                nums1[c] = nums1[a];
                a--;
               }
               else{
                nums1[c] = nums2[b];
                b--;
               }
               c--;
        }
    }
};
*/