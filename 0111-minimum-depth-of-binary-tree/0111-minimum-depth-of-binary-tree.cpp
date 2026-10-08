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
    int minDepth(TreeNode* root) {
        int ans;
        if(root == NULL)
        return 0;
        int leftH = minDepth(root->left);
        int rightH = minDepth(root->right);
        if(root->left == NULL)
        return rightH+1;
        else if(root->right == NULL)
        return leftH+1;
        else
        ans = min(leftH,rightH) + 1;

        return ans;
    }
};