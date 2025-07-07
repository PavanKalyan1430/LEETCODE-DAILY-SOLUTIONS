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

 bool HelperFunction(TreeNode* root1, TreeNode* root2){

    if (!root2 and !root1)  return true;

    if (root1 ==NULL or root2==NULL) return false;


    if (root1->val != root2->val)  return false;

    

    return HelperFunction(root1->left, root2->left) and HelperFunction(root1->right, root2->right);

    


 }
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {

        return HelperFunction(p, q);
    }
};