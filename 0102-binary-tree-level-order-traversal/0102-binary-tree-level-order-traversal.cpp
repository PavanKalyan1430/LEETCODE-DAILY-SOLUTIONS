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

 void HelperFunction(TreeNode* root, queue<TreeNode*> q, vector<vector<int>> &result ){

    if (!root) return;
    q.push(root);

    while(!q.empty()){
        int size = q.size();
        vector<int> temp;

        for (int i=0; i<size; i++){
            TreeNode* curr = q.front();
            q.pop();

            if (curr->left) q.push(curr->left);
            if (curr->right) q.push(curr->right);

            temp.push_back(curr->val);
        }

        result.push_back(temp);
    }
 }
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {

        queue<TreeNode*> q;
        vector<vector<int>> result;


        HelperFunction(root, q, result);

        return result;
    }
};