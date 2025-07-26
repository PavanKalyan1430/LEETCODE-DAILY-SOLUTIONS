int depth(TreeNode* root, bool &check){

    if ( root == NULL) return 0;

    int left = depth(root->left , check);
    int right = depth(root->right, check);

    if ( abs(left - right) > 1 ) check = false;

    return max(left, right) + 1;
}

class Solution {
public:
    bool isBalanced(TreeNode* root) {

        bool check = true;
        int h = depth(root, check);

        return check;


    }
};