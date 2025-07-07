/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

 void HelperTree(TreeNode* root, vector<int> &tree){

    if (!root) return;

    if (root->left == NULL and root->right == NULL) tree.push_back(root->val);

     HelperTree(root->left, tree);

     HelperTree(root->right, tree);
 }
class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector <int> tree1;
        vector <int> tree2;

        HelperTree(root1, tree1);    //FOR TREE1
        HelperTree(root2, tree2);    // FOR TREE2 

        return tree1 == tree2;
    }
};