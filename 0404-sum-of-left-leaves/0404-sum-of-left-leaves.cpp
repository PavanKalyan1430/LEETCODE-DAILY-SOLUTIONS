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

void HelperFunction(TreeNode* root, int& sum){

    if (!root)  return;

    if (root->left and !root->left->left and !root->left->right){
        sum += root->left->val;
    }

    HelperFunction(root->left, sum);

    HelperFunction(root->right, sum);



}
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int sum =0;
        HelperFunction(root, sum);

        return sum;
    }
};