// --> Using Binary Serch 

class Solution {
public:
    int binarySerch(vector<int>& arr,int s,int e){
        if(s == e){
            return s;
        }
        int mid = s + (e-s)/2;
        if(arr[mid] < arr[mid+1]){
            return binarySerch(arr,mid+1,e);
        }
        else{
            return binarySerch(arr,s,mid);
        }
        return 1;
    }
    int peakIndexInMountainArray(vector<int>& arr) {
        return binarySerch(arr,0,arr.size()-1);
    }
};

/*
// Useing Loop in O(n) Time complexity
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
            if(arr[i] > arr[i+1]){
                return i;
            }
        }
        return -1;
    }
};
*/