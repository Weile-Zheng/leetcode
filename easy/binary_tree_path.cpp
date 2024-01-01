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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> v;
        string s = to_string(root->val);
        helper(root, s, v);
        return v;  
    }
    
    void helper(TreeNode* root, string s, vector<string>& v){
        if(root->left){
            string left = s+"->"+ to_string(root->left->val); 
            helper(root->left, left , v); 
        }

        if(root->right){
            string right = s+"->"+ to_string(root->right->val); 
            helper(root->right, right, v); 
        }

        if(!root->left && !root->right){
            v.push_back(s);
        } 
    }
};
