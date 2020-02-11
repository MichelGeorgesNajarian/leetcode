/*
* https://leetcode.com/problems/binary-tree-inorder-traversal/
* Runtime: 0 ms, faster than 100.00% of C++ online submissions for Binary Tree Inorder Traversal.
* Memory Usage: 11 MB, less than 5.00% of C++ online submissions for Binary Tree Inorder Traversal.
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if (root == NULL) {
            return {};
        }
        vector<int> ret;
        if (root->left == NULL && root->right == NULL) {
            ret.push_back(root->val);
            return ret;
        }
        vector<int> temp;
        if (root->left != NULL) {
            temp = inorderTraversal(root->left);
            ret.insert(ret.end(), temp.begin(), temp.end());
            temp.clear();
        }   
        ret.push_back(root->val);
        if (root->right != NULL) {
            temp = inorderTraversal(root->right);
            ret.insert(ret.end(), temp.begin(), temp.end());
            temp.clear();
        }
        return ret;
    }
};
