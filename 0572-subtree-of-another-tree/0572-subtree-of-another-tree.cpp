bool dfs(TreeNode* root, TreeNode* subRoot){

    if (!root and !subRoot ) return true;

    if ( !root or !subRoot ) return false;

    if (root->val != subRoot->val ) return false;


    return dfs(root->left , subRoot->left) and dfs(root->right, subRoot->right);

}
        
class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        
        if (!root) return false;

         if (dfs(root, subRoot)) return true;
        
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
        






    }
};