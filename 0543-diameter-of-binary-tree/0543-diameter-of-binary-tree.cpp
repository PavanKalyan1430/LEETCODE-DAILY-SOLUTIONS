
 int HelperFunction(TreeNode* root, int &diameter){

    if (!root) return 0;

     int left = HelperFunction(root->left, diameter);
     int right = HelperFunction(root->right, diameter);
 
    diameter = max(diameter, left + right);

    return max(left, right)  + 1;
 }

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if (!root) return 0;

        int diameter = 0;
        HelperFunction( root, diameter);
        return diameter;

        
    }
};