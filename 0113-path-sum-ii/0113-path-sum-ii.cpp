void dfs(TreeNode* root, int target, vector<int>&temp, vector<vector<int>>&result){

    if (!root) return;
    
    target-=root->val;
    temp.push_back(root->val);

    if (!root->left && !root->right){
        if (target == 0) result.push_back(temp);
        temp.pop_back();
        return;
    }

    dfs(root->left, target, temp, result);
    dfs(root->right, target, temp, result);
    temp.pop_back();
    
    
}



class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int target) {
        vector<vector<int>> result;
        vector<int> temp;

        dfs(root, target, temp, result);
        return result;

    }
};