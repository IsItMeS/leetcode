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
TreeNode* overlap(TreeNode* root1,TreeNode* root2,TreeNode* &root3){
    if(root1==NULL && root2==NULL){
        root3 = NULL;
        return root3;
    }
    if(root1!=NULL && root2==NULL){
        return root1;
    }
    else if(root1==NULL && root2!=NULL){
        return root2;
    }
    else if(root1!=NULL && root2!=NULL){
        if (root3 == NULL)
            root3 = new TreeNode();
        root3->val = root1->val + root2->val;
    }
    root3->left = overlap(root1->left,root2->left,root3->left);
    root3->right = overlap(root1->right,root2->right,root3->right);
    return root3;
}
class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        TreeNode* root3 =new TreeNode;
        return overlap(root1,root2,root3);
    }
};