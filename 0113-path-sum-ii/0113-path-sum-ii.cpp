void fun(TreeNode* root, int target , int sum , vector<vector<int>>&result, vector<int> &temp){

    if (!root) return;

    sum += root->val;
    temp.push_back(root->val);

    if (!root->left && !root->right){
       // cout<<sum <<" "<<root->val<<endl;
        if(sum == target) result.push_back(temp);
        
        
    }

    fun(root->left, target, sum , result, temp);
    fun(root->right, target, sum , result, temp);

    temp.pop_back();

    
    

}


class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int target) {
        
        vector<vector<int>> result;
        vector<int> temp;

        fun(root, target, 0 , result, temp );

        return result;
    }
};