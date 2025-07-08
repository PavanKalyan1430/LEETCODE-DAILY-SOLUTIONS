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
 
 bool HelperFunction(TreeNode* root){

    if (root == NULL) return true;

    cout<<root->val<<" ";
    if (root->left and root->left->val >= root->val) return false;

    if (root->right and root->val >= root->right->val) return false;


    return HelperFunction(root->left) &&  HelperFunction(root->right);





}



class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return HelperFunction(root);
    }
};