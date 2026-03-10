
class Solution {
public:
    bool hasPathSum(TreeNode* root, int target) {
        if (!root) return false;

        target -= root->val;

        if (!root->left && !root->right){
            if (target == 0) return true;
            else return false;
        }

        bool left = hasPathSum(root->left, target);
        bool right = hasPathSum(root->right, target);
        return left || right;

    }
};