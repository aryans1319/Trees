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
    void inorderTraversal(TreeNode *node,vector<int>&inorder){
        if(node==NULL)return;
        inorderTraversal(node->left,inorder);
        inorder.push_back(node->val);
        inorderTraversal(node->right,inorder);    
    }
    
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>inorder;
        inorderTraversal(root,inorder);
        return inorder;
    }
};