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

int fun(TreeNode* root, bool &flag){

    if (flag == false) return 0;
    if (!root) return 0;

    int left =  fun(root->left, flag);
    int right = fun(root->right, flag);

    if (abs (left - right) > 1) flag = false;

    return 1 + max(left , right);


}

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        
        bool flag = true;
        fun(root, flag);
        return flag;

    }
};