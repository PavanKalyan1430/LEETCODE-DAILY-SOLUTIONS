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

/* ON THE RUN WE WILL AHVE TO MAKE A LINKED LIST WHERE THE LEFT CHILD SHOULS ALWAYS BE NULL AND RIGHT CHILD SHOULD BE THERE 

BUT THE LINKED LIST SHOULD BE LIEK A PRE ORDER TRAVERSAL OF THE TREE 

SO WE CAN DO THIS BY USING A REVERSE PRE ORDER TRAVERSAL 

RIGHT LEFT ROOT

*/



void dfs(TreeNode* root, TreeNode*& prev){

    if (!root) return;

    dfs(root->right, prev);
    dfs(root->left, prev);

    root->right = prev;
    root->left = NULL;
    prev = root;
}


class Solution {
public:

    void flatten(TreeNode* root) {
        
        TreeNode* prev = nullptr;

        dfs(root, prev);
        
    }
};