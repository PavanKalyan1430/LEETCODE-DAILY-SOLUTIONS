bool dfs(TreeNode* root, long mini, long maxi){

        if (!root) return true;

        if (root->val >= maxi || root->val <= mini ) return false;

        bool left = dfs(root->left, mini, root->val);
        bool right = dfs(root->right, root->val, maxi);
        return left && right;

}


class Solution {
public:
    bool isValidBST(TreeNode* root) {
        
        long  mini = LONG_MIN;
        long  maxi = LONG_MAX;
        return dfs(root, mini, maxi);

    }
};