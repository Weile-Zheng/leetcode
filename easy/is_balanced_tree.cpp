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
    bool isBalanced(TreeNode* root) {
        if(!root) return true; 
        int leftMax = layerDeep(root->left);
        int rightMax = layerDeep(root->right); 
        if(leftMax - rightMax > 1 || leftMax-rightMax<-1) return false;
        return isBalanced(root->left)&&isBalanced(root->right); 
    }

    int layerDeep(TreeNode* node){
       if(!node) return 0; 
       return 1 + max(layerDeep(node->left), layerDeep(node->right));
    }
};
