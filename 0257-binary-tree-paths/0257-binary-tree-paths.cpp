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
void preorder(TreeNode* root, string &s, vector<string> &ans){
    if(root==NULL){
        return;
    }
    // to restore prev ans at node 1 temp = "", node 2 "1->", node 5 "1->2->"
    // each recursive call has its own temp
    string temp = s;
    int x = root->val;
    s = s + to_string(x);
    if(root->left==NULL && root->right == NULL)
    {
        ans.push_back(s);
    }
    else{
    s = s + "->";
    preorder(root->left,s,ans);
    preorder(root->right,s,ans);
    }
    s = temp;
}
class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        if(root==NULL){
            ans.push_back(" ");
            return ans;
        }
        if(root->left==NULL && root->right == NULL)
        {
            int a = root->val;
            ans.push_back(to_string(a));
            return ans;
        }
        string ss="";
        preorder(root,ss,ans);
        return ans;
    }
};