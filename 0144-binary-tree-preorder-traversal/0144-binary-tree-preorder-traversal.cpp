/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}he
 * };
 */

 void HelperFunction(TreeNode* root, vector<int> &res){

        if (!root) return ;

        res.push_back(root->val);

        HelperFunction(root->left, res);

        HelperFunction(root->right, res);
        
 }



class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector <int> res;
        HelperFunction(root, res);

        return res;
    }
};