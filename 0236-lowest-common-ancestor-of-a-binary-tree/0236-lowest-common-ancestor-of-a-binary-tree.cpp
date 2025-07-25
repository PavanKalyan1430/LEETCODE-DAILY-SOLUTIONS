TreeNode* lcs(TreeNode* root, TreeNode* p, TreeNode* q){

    if (!root) return NULL;

    if ( root == p || root == q) return root;

    TreeNode* left = lcs(root->left, p , q);
    TreeNode* right = lcs(root->right, p , q);

    if (left and right) return root;
    else if (left) return left;
    else if (right) return right;

    return NULL;

}


class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        return lcs(root, p, q);

        

    }
};