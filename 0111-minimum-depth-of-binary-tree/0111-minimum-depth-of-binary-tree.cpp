void HelperFunction(TreeNode* root, int & min_height, int height){

    if (!root) return ;

    if (!root->left and !root->right) min_height = min(min_height, height);

    HelperFunction(root->left, min_height, height+1);

    HelperFunction(root->right, min_height, height+1);

}
class Solution {
public:
    int minDepth(TreeNode* root) {

        if (!root) return 0;
        
        int height = 1;
        int min_height = INT_MAX;

        HelperFunction(root, min_height, height);

        return min_height;
    }
};