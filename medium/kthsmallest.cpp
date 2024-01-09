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
    int kthSmallest(TreeNode* root, int k) {
        int answer;
        helper(root, k ,answer);
        return answer;
    }
    void helper(TreeNode* root, int& k, int& answer){
        if(root&&k>0){
            helper(root->left, k, answer);
            if(--k==0) answer = root->val; 
            helper(root->right, k, answer);
        }
    }
};
