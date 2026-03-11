void dfs(TreeNode* root, int &sum, int temp){

    if ( !root) return;

    temp = temp*10 + root->val;

    if (!root->left &&  !root->right){
        sum += temp;
    }

    dfs(root->left, sum, temp );
    dfs(root->right, sum, temp );

    return;


}



class Solution {
public:
    int sumNumbers(TreeNode* root) {
        
        int sum  = 0;
        int temp = 0;

        dfs(root, sum, temp);

        return sum;
    }
};