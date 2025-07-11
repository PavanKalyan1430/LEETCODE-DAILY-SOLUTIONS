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
 void DFS(TreeNode* root, vector<int>&result){
    if (root == NULL) return;

    DFS(root->left, result);
    result.push_back(root->val);
    DFS(root->right, result);
 }
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        vector <int> result;
        DFS(root,result );

        return result[k-1];
    }
};