class Solution {
public:
    set<vector<int>> s;
    void combiSum(vector<int>& arr,int tar,int idx,vector<vector<int>>& ans,vector<int>& combin){
        if(tar < 0 || idx == arr.size()){
            return ;
        }
        if(tar == 0){
            if(s.find(combin) == s.end()){
            ans.push_back({combin});
            s.insert(combin);
            }
        }
        combin.push_back(arr[idx]);
        //single element
        combiSum(arr,tar-arr[idx],idx+1,ans,combin);
        //same element take multipale time 
        combiSum(arr,tar-arr[idx],idx,ans,combin);
        combin.pop_back();
        //No element take 
        combiSum(arr,tar,idx+1,ans,combin);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> combi;
        combiSum(candidates,target,0,ans,combi);
        return ans;
    }
};