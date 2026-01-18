void DFS(TreeNode* root, vector<string>&result, string temp){

    if (!root) return;

    if (!root->left && !root->right){
        temp += to_string(root->val);
        result.push_back(temp);
        return;
    }

    else temp += (to_string(root->val) + "->");

    DFS(root->left, result, temp );

    DFS(root->right, result, temp);
    

   

    return;
    


}
class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;

        string temp = "";

        DFS(root, result, temp);

        return result;
    }
};