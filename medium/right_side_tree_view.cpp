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
    vector<int> rightSideView(TreeNode* root) {
        vector <int> v; 
        if(!root)return v; 
        // if a node at a height is already seen. only one node at each height can be observed starting from the right. 
        unordered_set<int> s; 
        helper(root, v, s, 0);
        return v; 
    }
    void helper(TreeNode* root, vector<int>& v, unordered_set<int>& s, int height){
        if(root){
            if(s.find(height)==s.end()){
                v.push_back(root->val); 
                s.insert(height);
            }
            helper(root->right, v, s, height+1); 
            helper(root->left, v, s, height+1); 
        }
    }
};
