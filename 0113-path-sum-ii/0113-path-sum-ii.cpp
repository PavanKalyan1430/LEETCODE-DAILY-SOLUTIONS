void HelperFunction(TreeNode* root, int &target, int currSum, vector<vector<int>>&result, vector<int> temp){

    if (!root) return ;

    currSum += root->val;
    temp.push_back(root->val);

    if (!root->left and !root->right){
        if (target == currSum){
            result.push_back(temp);
        }
    }

    HelperFunction(root->left, target, currSum, result, temp);

    HelperFunction(root->right, target, currSum, result, temp);

    


}
class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int target) {

        vector<vector<int>> result;
        vector<int> temp;
        int currSum = 0;

        HelperFunction(root, target, currSum, result, temp);

        return result;

    }
};