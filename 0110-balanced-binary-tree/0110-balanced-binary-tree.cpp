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

 int HelperFunction(TreeNode* root, bool &check){
    if (!root) return 0;

    int left =  HelperFunction( root->left, check);
    int right = HelperFunction(root->right, check);

    if (abs(left - right) > 1) check = false;;

    return max(left, right) + 1;
 }
class Solution {
public:
    bool isBalanced(TreeNode* root) {

        bool check = true;
        
        if (!root) return true;

        HelperFunction( root, check);
        
        return check;


        // if (root->left and  root->right) return true;

        // if (root->left or root->right) return false;



    }
};