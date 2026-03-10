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
class Solution {
public:

    unordered_map <long long,  long long > m;
    int cnt = 0;

    void dfs(TreeNode* root, long long sum , int target){

        if (!root) return ;
        
        sum += root->val;
        long long  comp = sum - target;

        if (m.count(comp)) cnt+= m[comp];
        m[sum]+=1;

        dfs(root->left, sum, target);
        dfs(root->right, sum, target);
        m[sum]-=1;
    
       

    }


    int pathSum(TreeNode* root, int targetSum) {
        m[0] = 1;
        dfs(root, 0LL,targetSum);
        return cnt;
    }
};