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
    int goodNodes(TreeNode* root) {
        return 1+helper(root->left, root->val)+helper(root->right, root->val);

    }
    int helper(TreeNode* root, int max){
        if(root){
            if(root->val>=max){
                max = root->val;
                return 1+helper(root->left, max)+helper(root->right, max);
            }
            return helper(root->left, max)+helper(root->right, max);
        }
        return 0; 
    }
};
