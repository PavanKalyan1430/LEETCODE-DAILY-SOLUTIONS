int dfs(TreeNode* root, int& maxsum){

    if ( !root ) return 0;

    int left = max(0, dfs(root->left, maxsum));
    int right = max(0, dfs(root->right, maxsum));

    int pathsum = root->val + left + right;
    maxsum = max(maxsum , pathsum);

    return max(left, right) + root->val;

}


class Solution {
public:
    int maxPathSum(TreeNode* root) {
        
        int maxsum = INT_MIN;

        dfs(root, maxsum);

        return maxsum;
    }
};