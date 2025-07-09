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
 void TreePaths(TreeNode* root, vector<string>&result, string temp){

        if (!root) return ;

        if (root->left or root->right)temp = temp + to_string(root->val) + "->";
        else temp = temp + to_string(root->val);

        if (!root->left and !root->right) result.push_back(temp);

        TreePaths(root->left, result, temp);
        TreePaths(root->right, result, temp);


 }
class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        
        vector<string> result ;
        string temp = "";

        TreePaths(root, result, temp);

        return result;



    }
};