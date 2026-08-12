class Solution {
public:
    void findSubArray(vector<int>& candidantes,int target,int idx,vector<vector<int>> &ans,vector<int> &an){
           if(target < 0 || idx >= candidantes.size()){
              return ;
           }
           if(target == 0){
             ans.push_back(an);
             return;
           }
           if(idx<candidantes.size()){
           an.push_back(candidantes[idx]);
           findSubArray(candidantes,target-candidantes[idx],idx,ans,an);
           //findSubArray(candidantes,target-candidantes[idx],idx+1,ans,an);
           an.pop_back(); 
           findSubArray(candidantes,target,idx+1,ans,an);
           }

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
          vector<vector<int>> ans;
          vector<int> an;
          findSubArray(candidates,target,0,ans,an);
          return ans;
    }
};