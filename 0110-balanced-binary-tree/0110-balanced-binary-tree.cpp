

int fun(TreeNode* root){

    if (!root) return 0;

    int left =  fun(root->left);
   
    int right = fun(root->right);
    if (left == -1 || right == -1) return -1;

    if (abs(left - right) > 1) return -1;

    return 1 + max(left , right);


}

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        
       
    if (fun(root) == -1) return false;
    else return true;
    }
        //return flag;

    
};