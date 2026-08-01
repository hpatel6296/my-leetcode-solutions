/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void treeToArray(TreeNode* root,vector<vector<int>> &ans,int targetSum,vector<int> nums){
        if(root == NULL){
            return ;
        }
        nums.push_back(root->val);
        if(root->right == NULL && root->left == NULL){
            int sum = 0;
            for(int i=0;i<nums.size();i++){
                sum += nums[i];
            }
            if(sum == targetSum){
                ans.push_back({nums});
            }
        }
        if(root->right != NULL){
            treeToArray(root->right,ans,targetSum,nums);
        }
        if(root->left != NULL){
            treeToArray(root->left,ans,targetSum,nums);
        }
        nums.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> nums;
        vector<vector<int>> ans;
        treeToArray(root,ans,targetSum,nums);
        return ans;
    }
};