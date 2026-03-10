void dfs(TreeNode* root, int level , vector<int>& result){

    if (!root) return;

    if (level == result.size()) result.push_back(root->val);
    dfs(root->right, level+1, result);
    dfs(root->left, level+1, result);

    return;
}



class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        
        int level = 0;
        vector<int> result;

        dfs(root, level, result);
        return result;
    }
};