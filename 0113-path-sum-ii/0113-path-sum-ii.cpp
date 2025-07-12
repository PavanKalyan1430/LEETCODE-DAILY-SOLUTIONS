void HelperFunction(TreeNode* root, int &targetSum, int currSum, vector<int>&temp ,vector<vector<int>>& result){
    
    if (root == NULL ) return ;

    currSum += root->val;
    temp.push_back(root->val);

    if (root->left == NULL and root->right == NULL and currSum == targetSum){
        result.push_back(temp);
        }

     HelperFunction(root->left, targetSum, currSum,temp, result);

     for (int i : temp) cout<<i<<" ";
     cout<<endl;

     HelperFunction(root->right, targetSum, currSum, temp, result);
     temp.pop_back();


    

}
class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        vector<vector<int>> result; 
        vector<int> temp;
        int currSum = 0;

        HelperFunction(root, targetSum, currSum,temp, result);

        return result;

    }
};