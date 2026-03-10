bool DFS(TreeNode* root1, TreeNode* root2){
    if (!root1 && !root2) return true;
    else if (!root1 || !root2) return false;

    else if (root1->val != root2->val) return false;

    bool left = DFS(root1->left, root2->right);
    bool right = DFS(root1->right, root2->left);
    return left && right;
}
class Solution {
public:
    bool isSymmetric(TreeNode* root) {   
        return DFS(root, root);
    }
};