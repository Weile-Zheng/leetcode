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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return makeTree(nums, 0, nums.size()-1);
    }

    TreeNode* makeTree(vector<int>& nums, int begin, int end){
        if(begin >end) return nullptr;

        int middle = (begin + end)/2;

        TreeNode* root = new TreeNode(nums[middle]);
        root->left = makeTree(nums, begin, middle-1);
        root->right = makeTree(nums, middle+1, end);
        return root; 
    }
};

// Submission: https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/description/
