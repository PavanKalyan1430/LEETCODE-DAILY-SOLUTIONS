int dfs(TreeNode* root, bool& check){
        if (!root) return 0;

        int left = dfs(root->left, check);
        int right = dfs(root->right, check);

        if (abs (left - right) > 1) check = false;

        return max(left, right) + 1;
}


class Solution {
public:
    bool isBalanced(TreeNode* root) {
        
        bool check = true;
        
        dfs(root, check);

        return check;
    }
};