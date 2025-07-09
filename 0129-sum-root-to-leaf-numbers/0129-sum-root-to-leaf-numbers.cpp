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

void HelperFunction(TreeNode* root, int ans, vector<int>&result){

    if (!root) return ;

     ans = ans*10 + root->val;

    if (!root->left and !root->right) result.push_back(ans);

    HelperFunction(root->left, ans, result);
    HelperFunction(root->right, ans, result);


}

class Solution {
public:
    int sumNumbers(TreeNode* root) {
        
        int ans = 0;
        int sum =0;
        vector<int> result;
        HelperFunction(root, ans, result);

        for (int i: result){
            sum += i;
        }

        return sum;



    }
};