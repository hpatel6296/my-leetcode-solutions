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
    void treeToArray(TreeNode* root,int targetSum,vector<int> nums,int& finalSum){
        if(root == NULL){
            return;
        }
        nums.push_back(root->val);
        if(root->left == NULL && root->right == NULL){
            int sum = 0;
            for(int i=0;i<nums.size();i++){
                sum += nums[i];
            }
            if(sum == targetSum){
                finalSum = sum;
            }
        }
        if(root->left != NULL){
            treeToArray(root->left,targetSum,nums,finalSum);
        }
        if(root->right != NULL){
            treeToArray(root->right,targetSum,nums,finalSum);
        }
        nums.pop_back();
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL){
            return false;
        }
        vector<int> nums;
        int finalSum;
        treeToArray(root,targetSum,nums,finalSum);
        if(targetSum == finalSum){
            return true;
        }
        return false;
    }
};