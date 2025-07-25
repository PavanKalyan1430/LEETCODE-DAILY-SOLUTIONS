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

bool HelperFunction(TreeNode* root, long min_val, long max_val){

    if (root == NULL) return true;

    if (root->val >= max_val || root->val <= min_val) return false;

    int left = HelperFunction(root->left, min_val, root->val);
    int right = HelperFunction(root->right, root->val, max_val);

    return left && right;

    //return HelperFunction(root->left, min_val, root->val) &&   HelperFunction(root->right, root->val, max_val);

}

class Solution {
public:
    bool isValidBST(TreeNode* root) {

        long min_val = LONG_MIN;
        long max_val = LONG_MAX;
        return HelperFunction(root, min_val, max_val);
    }
};