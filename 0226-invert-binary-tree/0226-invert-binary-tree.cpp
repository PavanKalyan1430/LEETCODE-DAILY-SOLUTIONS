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
void HelperFunction(TreeNode* root){

    if (!root) return;

    TreeNode *curr = root->left;
    root->left = root->right;
    root->right = curr;

     HelperFunction( root->left);
     HelperFunction( root->right);



}

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {

        if (!root) return NULL;
        HelperFunction(root);
        return root;
    }
};