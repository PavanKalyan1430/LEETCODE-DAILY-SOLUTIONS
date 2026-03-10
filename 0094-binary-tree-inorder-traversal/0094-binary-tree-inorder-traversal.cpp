void fun(vector<int>& result, TreeNode* root){

    if (!root) return;

    fun(result, root->left);
    result.push_back(root->val);
    fun(result, root->right);

}
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;

        fun(result, root);

        return result;
    }
};