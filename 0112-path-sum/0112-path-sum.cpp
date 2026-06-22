bool fun(TreeNode* root, int sum, int &target){

    if (!root) return false;

    sum += root->val;
    
    if (!root->left && !root->right && sum == target ) return true;

    bool left = fun(root->left, sum , target) ;
    bool right = fun(root->right, sum , target);

    return left || right;


}



class Solution {
public:
    bool hasPathSum(TreeNode* root, int target) {
        
        return fun(root,0, target);
    }
};