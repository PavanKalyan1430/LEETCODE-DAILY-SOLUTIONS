void dfs(TreeNode* root, int temp, int &min_h){

    if (!root) return ;

    temp+=1;
    if (!root->left && !root->right){
        min_h = min(min_h, temp);
    }

    dfs(root->left, temp, min_h);
    dfs(root->right, temp, min_h);
    return;



}


class Solution {
public:
    int minDepth(TreeNode* root) {
        
        if (!root) return 0;

        int temp = 0;
        int min_h = INT_MAX;

         dfs(root, temp, min_h);
         return min_h;
    }
};