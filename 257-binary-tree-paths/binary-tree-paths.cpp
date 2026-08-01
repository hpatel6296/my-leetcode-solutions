/**
 * Definition for a binary tree root.
 * struct Treeroot {
 *     int val;
 *     Treeroot *left;
 *     Treeroot *right;
 *     Treeroot() : val(0), left(nullptr), right(nullptr) {}
 *     Treeroot(int x) : val(x), left(nullptr), right(nullptr) {}
 *     Treeroot(int x, Treeroot *left, Treeroot *right) : val(x), left(left), right(right) {}
 * };
 */
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