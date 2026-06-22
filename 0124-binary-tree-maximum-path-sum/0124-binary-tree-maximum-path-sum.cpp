int fun(TreeNode* root, int &ans ){

    if (!root) return 0;


    int left_sum   =  max(0, fun(root->left, ans));
    int right_sum  =  max(0, fun(root->right, ans));

    int total_sum = left_sum + right_sum + root->val;

    ans = max(ans , total_sum);
   // cout<<ans<<endl;

    return root->val + max(left_sum , right_sum);


}



class Solution {
public:
    int maxPathSum(TreeNode* root) {
        
        int ans = INT_MIN;
        int sum = 0;

        fun(root, ans);

        return ans;
    }
};