


class Solution {
public:
    bool hasPathSum(TreeNode* root, int target) {
        
        if (!root) return false;

        target -= root->val;

        if (!root->left and !root->right){
            if (target == 0) return true;

            
            
        }
        
        cout<<target<<" ";
         return hasPathSum(root->left, target) or hasPathSum(root->right, target);
        
        

    }
};