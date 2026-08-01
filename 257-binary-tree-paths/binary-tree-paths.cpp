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
 // Using BackTraking 
class Solution {
public:
    void treeToString(TreeNode* root,vector<int> nums,vector<string>& ans){
            if(root == NULL){
                return;
            }
            nums.push_back(root->val);
            if(root->right == NULL && root->left == NULL){
                 string path = "";
                for(int i=0;i<nums.size();i++){
                    path += to_string(nums[i]);
                    if(i != nums.size()-1){
                    path += "->";
                    }
                }
                ans.push_back(path);
            }
            else{
            if(root->left != NULL){
                treeToString(root->left,nums,ans);
            }
            if(root->right != NULL){
                treeToString(root->right,nums,ans);
            }
            }
            nums.pop_back();
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<int> nums;
        vector<string> ans;
        treeToString(root,nums,ans);
        return ans;
    }
};

/*
 //->using dfs (depth first Serch)
class Solution {
public:
    void dfs(TreeNode* root,string path,vector<string>& ans){
        if(root == NULL){
            return ;
        }
        path += to_string(root->val);

        if(root->left == NULL && root->right == NULL){
            ans.push_back(path);
            return;
        }
        if(root->left != NULL){
            dfs(root->left,path+"->",ans);
        }
        if(root->right != NULL){
            dfs(root->right,path+"->",ans);
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string branch;
        vector<string> ans;
        dfs(root,branch,ans);
        return ans;
    }
};
*/