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
void inorder(TreeNode* root)
{
    if(root==NULL)
    return;
    swap(root->left,root->right);
    inorder(root->left);
    inorder(root->right);
}
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
        return root;
        inorder(root);
        return root;
    }
};