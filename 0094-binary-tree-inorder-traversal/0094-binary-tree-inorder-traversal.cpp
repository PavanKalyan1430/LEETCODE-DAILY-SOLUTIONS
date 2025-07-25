void inorder(TreeNode* root, vector<int> & result){
    if ( root == NULL) return ;

    inorder(root->left, result);
    result.push_back(root->val);
    inorder(root->right, result);
}
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector <int> result;
        inorder(root, result);
        return result;
    }
};