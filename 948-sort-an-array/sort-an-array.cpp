class Solution {
public:
    void marge(vector<int>& nums,int s,int mid,int e){
        int x = mid - s + 1;
        int y = e - mid;

        vector<int> L1(x);
        vector<int> L2(y);

        for(int i=0;i<x;i++){
            L1[i] = nums[s+i];
        }
        for(int i=0;i<y;i++){
            L2[i] = nums[mid+i+1];
        }
        int i=0,j=0,k=s;
        while(i<x && j<y){
            if(L1[i]<L2[j]){
                nums[k] = L1[i];
                i++;
            }
            else{
                nums[k] = L2[j];
                j++;
            }
            k++;
        }
        while(i<x){
                nums[k] = L1[i];
                i++;
                k++;
        }
        while(j<y){
            nums[k] = L2[j];
            j++;
            k++;
        }
    }
    void margeSort(vector<int>& nums,int s,int e){
        if(s == e){
            return ;
        }
        int mid = s + (e-s)/2;
        margeSort(nums,s,mid);
        margeSort(nums,mid+1,e);
        marge(nums,s,mid,e);
    }
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size()-1;
        margeSort(nums,0,n);
        return nums;
    }
};