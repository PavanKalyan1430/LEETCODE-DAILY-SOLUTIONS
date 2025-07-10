TreeNode* HelperFunction(TreeNode* root, TreeNode* p, TreeNode* q){
    if (!root) return NULL;

    if (root->val == p->val or root->val == q->val) return root;

    TreeNode* left = HelperFunction( root->left,  p,  q);

    TreeNode* right = HelperFunction( root->right,  p,  q);

    if (left and right) return root;

    if (left) return left;
    if (right) return right;


    return NULL;
}
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        if (!root) return NULL;
        return HelperFunction(root, p, q);
    }
};