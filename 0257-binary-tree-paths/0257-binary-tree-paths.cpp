void dfs(TreeNode* root, vector<string>& result, string temp){

        if (!root) return;

        temp+= to_string(root->val);
        
        if (!root->left && !root->right){
            result.push_back(temp);
        }

        dfs(root->left, result, temp+"->");
        dfs(root->right, result, temp+"->");

       
}



class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        

        vector<string> result;
        string temp = "";

        dfs(root, result, temp);

        return result;



    }
};