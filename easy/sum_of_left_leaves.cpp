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
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0; 
        helper(root, sum, false);
        return sum; 
        
    }
    void helper(TreeNode* root, int& sum, bool isLeft){
        if(!root->left && !root->right){
            if(isLeft) sum += root->val; 
        }
        if(root->left) helper(root->left, sum, true);
        if (root->right) helper(root->right, sum, false); 
    }
};
