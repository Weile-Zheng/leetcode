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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v; 
        helper(root, 0, v); 
        return v; 
    }
    void helper(TreeNode* root, int level, vector<vector<int>>& v){
        if(root){
            if(level>=v.size())v.push_back({});
            v[level].push_back(root->val);
            helper(root->left, level+1, v);
            helper(root->right, level+1, v); 
        }
    }
};
