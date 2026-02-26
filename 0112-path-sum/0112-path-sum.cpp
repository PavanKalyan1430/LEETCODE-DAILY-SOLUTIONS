bool DFS(TreeNode* root, int &targetSum, int currentSum){

    if ( !root ) return false;

    currentSum+= root->val;

     if (!root->left and !root->right){
        if (currentSum == targetSum){
            return true;
        }
    }


    bool left =  DFS(root->left , targetSum, currentSum);
    bool right =  DFS(root->right , targetSum, currentSum);

    return left or right;
}

class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {

        int currentSum = 0;
        return DFS(root, targetSum, currentSum);
    }
};