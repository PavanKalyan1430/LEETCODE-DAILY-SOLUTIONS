bool HelperFunction(TreeNode* root, long mini, long maxi){

    if (!root ) return true;

    if(root->val <=  mini or root->val >= maxi) return false;

     return HelperFunction(root->left, mini, root->val) && HelperFunction(root->right, root->val, maxi);


}


class Solution {
public:
    bool isValidBST(TreeNode* root) {
        long mini = LONG_MIN;
        long maxi = LONG_MAX;

        return HelperFunction(root, mini, maxi);

    }
};