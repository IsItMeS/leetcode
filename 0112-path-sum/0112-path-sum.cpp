/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
int sum(TreeNode* root, int add, int b) {
    if (root == NULL) {
        return 0;
    }
    b += root->val;
    if (root->left == NULL && root->right == NULL) {
        if (b == add)
            return 1;
        return 0;
    }
    if(sum(root->left, add, b))
        return 1;
    if(sum(root->right, add, b))
        return 1;

    return 0;
}
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == NULL) {
            return false;
        }
        int a = 0;
        return sum(root, targetSum, a);
    }
};