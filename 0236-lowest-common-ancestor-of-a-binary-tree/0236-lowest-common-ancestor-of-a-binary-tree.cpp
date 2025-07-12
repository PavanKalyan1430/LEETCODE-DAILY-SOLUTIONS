TreeNode* LCA(TreeNode* root, TreeNode* p , TreeNode* q){

    if (root == NULL) return NULL;

    if (root->val == p->val || root->val == q->val) return root;

    TreeNode* left = LCA(root->left, p, q);
    TreeNode* right = LCA(root->right , p, q);

    if (left and right ) return root;

    if (left) return left ;

    if (right) return right ;

    return NULL;

}
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        return LCA(root, p, q);
    }
};