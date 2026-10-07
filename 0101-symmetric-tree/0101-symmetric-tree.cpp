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
void inorder(TreeNode* root,TreeNode* rootr,bool &check)
{
    if(root==NULL && rootr==NULL)
    return;
    if(root==NULL || rootr==NULL)
    {
        check = false;
        return;
    }
    inorder(root->left, rootr->right, check);
    if (root->val != rootr->val) {
        check = false;
        return;
    }
    inorder(root->right, rootr->left, check);
}
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        bool check = true;
        inorder(root->left,root->right,check);
        return check;
    }
};