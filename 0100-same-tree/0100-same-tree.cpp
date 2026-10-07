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
void preorder(TreeNode* rootp, TreeNode* rootq, bool &check) {
    if (rootp == NULL && rootq == NULL) {
        return;
    }
    if (rootp == NULL || rootq == NULL) {
        check = false;
        return;
    }
    if (rootp->val != rootq->val) {
        check = false;
        return;
    }
    preorder(rootp->left, rootq->left, check);
    preorder(rootp->right, rootq->right, check);
}
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool check = true;
        preorder(p, q, check);
        return check;
    }
};