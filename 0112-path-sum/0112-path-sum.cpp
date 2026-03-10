
class Solution {
public:
    bool hasPathSum(TreeNode* root, int target) {
        if (!root) return false;


        if (!root->left && !root->right){
            target -= root->val;
            if (target == 0) return true;
            else return false;
        }

        bool left = hasPathSum(root->left, target-root->val);
        bool right = hasPathSum(root->right, target-root->val);
        return left || right;

    }
};